#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Chose a number: ");
    scanf("%d", &a);

    printf("Chose another number: ");
    scanf("%d", &b);
    
    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    float div = (float)a / b;

    a += 2;
    b *=3;

    a++;
    b--;

    printf("\n\nThe sum of A + B is: %d \n", sum);
    printf("The subtraction of A - B is: %d \n", sub);
    printf("The multiply of A * B is: %d \n", mult);
    printf("The division of A / B is: %.2f \n", div);
    printf("New value of A(After += 2 and ++): %d \n", a);
    printf("New value of B(After *= 3 and --): %d \n", b);
}