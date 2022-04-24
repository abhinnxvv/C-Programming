#include <stdio.h>

int main()
{
    float num1, num2;
    
    
    printf("Enter 2 numbers seperated by space: ");
    scanf("%f %f", &num1, &num2);
    
    float sum, sub, product, quotient;
    
    sum = num1 + num2;
    sub = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    
    int choice;
    
    printf("What do you want to do?\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n");
    
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("\nSum of %.2f and %.2f = %.2f", num1, num2, sum);
    }
    else if (choice == 2) {
        printf("\nDifference of %.2f and %.2f = %.2f", num1, num2, sub);
    }
    else if (choice == 3) {
        printf("\nProduct of %.2f and %.2f = %.2f", num1, num2, product);
    }
    else if (choice == 4) {
        printf("\nQuotient of %.2f divided by %.2f = %.2f", num1, num2, quotient);
    }
    else printf("\nWrong Choice");
    

    return 0;
}