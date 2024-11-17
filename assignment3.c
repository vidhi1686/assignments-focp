//Q1.WAP to make calculator 
#include<stdio.h>
#include<math.h>
int z,a,b;
int add(){
    printf("Pls Enter the first number");
    scanf("%d",&a);
    printf("Pls Enter the second number");
    scanf("%d",&b);
    z=a+b;
    printf("%d",z);
}
int subs(){
    printf("Pls Enter the first number");
    scanf("%d",&a);
    printf("Pls Enter the second number");
    scanf("%d",&b);
    z=a-b;
    printf("%d",z);
}
int mult(){
    printf("Pls Enter the first number");
    scanf("%d",&a);
    printf("Pls Enter the second number");
    scanf("%d",&b);
    z=a*b;
    printf("%d",z);
}
int div(){
    printf("Pls Enter the first number");
    scanf("%d",&a);
    printf("Pls Enter the second number");
    scanf("%d",&b);
    z=a/b;
    printf("%d",z);
}
int logarithmic(){
    int a;
    printf("Enter a positive number: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("Logarithm (base e): %f\n", log(a)); // Natural logarithm
        printf("Logarithm (base 10): %f\n", log10(a));
    } else {
        printf("Error: Logarithm is defined for positive numbers only.\n");
    }
}
int squareroots(){
    int a;
    printf("Enter a non-negative number: ");
    scanf("%d", &a);
    if (a >= 0) {
        printf("Square root: %f\n", sqrt(a));
    } else {
        printf("Error: Square root is not defined for negative numbers.\n");
    }
}
int main(){
    int choice;
    printf("Pls Enter 1 for sum\n");
    printf("Pls Enter 2 for minus\n");
    printf("Pls Enter 3 for multiplication\n");
    printf("Pls Enter 4 for division\n");
    printf("Pls Enter 5 for log of number\n");
    printf("Pls Enter 6 for square root\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        add();
        break;
        case 2:
        subs();
        break;
        case 3:
        mult();
        break;
        case 4:
        div();
        break;
        case 5:
        logarithmic();
        break;
        case 6:
        squareroots();
        break;
    return 0;
}
}