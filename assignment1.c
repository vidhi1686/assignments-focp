// q1.WAP to check whether a given is Armstrong or not
#include <stdio.h>
#include <math.h>
int main() {
    int num, num2, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    num2 = num;
    while (num2 != 0) {
        num2 /= 10;
        ++n;
    }
    num2 = num;
    while (num2 != 0) {
        remainder = num2 % 10;
        result += pow(remainder, n);
        num2 /= 10;
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
//q2.WAP to read two integers and print their HCF (Highest Common Factor).
#include <stdio.h>
int HCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int c, d;
    printf("Enter two integers: ");
    scanf("%d %d", &c, &d);
    int hcf = HCF(c, d);
    printf("HCF of %d and %d is %d\n", c, d, hcf);

    return 0;
}
//Q3.WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int c = (~a) & b;
        a = a ^ b;
        b = c<< 1;
    }
    return a;
}

int main() {
    int A, B;
    printf("Enter two integers: ");
    scanf("%d %d", &A, &B);
    int SUB = subtract(A, B);
    printf("Result of %d - %d is %d\n", A, B, SUB);

    return 0;
}
//Q4.WAP to accept two integer numbers and swap them using 4 different methods in C
//SWAPPING #1

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n",a,b);
    printf("Hence ,number is:%d %d\n",a,b);
    return 0;
}
//SWAPPING #2
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers (non-zero): ");
    scanf("%d %d", &a, &b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("After swapping: a= %d, b= %d\n",a,b);

    return 0;
}
//SWAPPING #3
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers (non-zero): ");
    scanf("%d %d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a= %d, b= %d\n",a,b);

    return 0;
}
//SWAPPING #4
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers (non-zero): ");
    scanf("%d %d", &a, &b);
    int temp = a;
    a =b;
    b =temp;
    
    printf("After swapping: a= %d, b= %d\n",a,b);

    return 0;
}
//Q5.WAP to check whether number is Perfect Number or not.
#include <stdio.h>

int Perfect(int num1) {
    int sum = 0;
    for (int i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0) {
            sum += i;
        }
    }
    return sum == num1;
}

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (Perfect(a) && a > 0) {
        printf("%d is a Perfect Number.\n", a);
    } else {
        printf("%d is not a Perfect Number.\n", a);
    }

    return 0;
}
/*Q6.WAP to accept a coordinate point in an XY coordinate system and determine in which
quadrant the coordinate point lies.*/
#include <stdio.h>
void determineQuadrant(int a, int b) {
    if (a> 0 && b > 0) {
        printf("The point (%d, %d) lies in Quadrant I.\n", a, b);
    } else if (a < 0 && b > 0) {
        printf("The point (%d, %d) lies in Quadrant II.\n", a, b);
    } else if (a< 0 && b< 0) {
        printf("The point (%d, %d) lies in Quadrant III.\n", a, b);
    } else if (a > 0 && b< 0) {
        printf("The point (%d, %d) lies in Quadrant IV.\n", a ,b);
    } else if (a == 0 && b != 0) {
        printf("The point (%d, %d) lies on the Y-axis.\n", a, b);
    } else if (a != 0 && b == 0) {
        printf("The point (%d, %d) lies on the X-axis.\n", a, b);
    } else {
        printf("The point (%d, %d) is at the Origin.\n", a, b);
    }
}
int main() {
    int a, b;
    printf("Enter the X coordinate: ");
    scanf("%d", &a);
    printf("Enter the Y coordinate: ");
    scanf("%d", &b);
    determineQuadrant(a, b);

    return 0;
}
/*Q7.WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per
user’s choice*/
#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    return decimal;
}
int decimalToBinary(int decimal) {
    int binary = 0, base = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    return binary;
}

int main() {
    int choice, number;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("Decimal equivalent: %d\n", binaryToDecimal(number));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        printf("Binary equivalent: %d\n", decimalToBinary(number));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
//Q8.WAP to print below mentioned pattern:
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
   return 0;
}
//Q9.WAP to print following Pyramid:
#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }
        for (int j = 0; j < (rows - i - 1) * 2; j++) {
            printf(" "); 
        }
        for (int j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    for (int j = 0; j < 2 * rows; j++) {
        printf("%d", j % 2);
    }
    printf("\n"); 

    return 0;
}
//Q10.WAP to print Pascal’s Triangle.
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        int n=1; 
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" "); 
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", n);
            n = n* (i - j) / (j + 1); 
        }
        printf("\n");
    }

    return 0;
}

