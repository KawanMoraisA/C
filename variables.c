#include <stdio.h>

int main() {
    char nome[20];
    int idade;
    int peso;
    float altura;
    char letra;

    printf("Type your name: \n");
    scanf("%s", nome);
    printf("Type your age: \n");
    scanf("%d", &idade);
    printf("Type your weight: \n");
    scanf("%d", &peso);
    printf("Type your hight: \n");
    scanf("%f", &altura);
    printf("Type one character: \n");
    scanf(" %c", &letra);
    printf("Analyzing data.. \n\n\n\n\n");
    printf("Your name is %s, you are %d years old \n", nome, idade);
    printf("You're %fm, and your weight is %d \n", altura, peso);
    printf("You chose the letter %c", letra);
}