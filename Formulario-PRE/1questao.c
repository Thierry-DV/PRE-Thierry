#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    
    printf("Digite um número positivo e maior que zero: ");
    scanf("%f", &numero);
    
    if (numero <= 0) {
        printf("O número deve ser positivo e maior que zero.\n");
        return 1;
    }
    
    // Calcula e mostra o número ao quadrado
    float quadrado = numero * numero;
    printf("O número ao quadrado é: %.2f\n", quadrado);
    
    // Calcula e mostra o número ao cubo
    float cubo = numero * numero * numero;
    printf("O número ao cubo é: %.2f\n", cubo);
    
    // Calcula e mostra a raiz quadrada do número
    float raizQuadrada = sqrt(numero);
    printf("A raiz quadrada do número é: %.2f\n", raizQuadrada);
    
    // Calcula e mostra a raiz cúbica do número
    float raizCubica = cbrt(numero);
    printf("A raiz cúbica do número é: %.2f\n", raizCubica);
    
    // Calcula e mostra o resto da divisão do número por 3
    float resto = fmod(numero, 3);
    printf("O resto da divisão por 3 é: %.2f\n", resto);
    
    return 0;
}