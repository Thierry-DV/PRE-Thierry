#include <stdio.h>
#include <math.h>

int main() {
    float numero, quadrado, cubo, raizQuadrada, raizCubica, resto;
    
    printf("Digite um numero positivo e maior que zero: ");
    scanf("%f", &numero);
    
    if (numero <= 0) {
        printf("O numero deve ser positivo e maior que zero.\n");
        return 1;
    }
    
    // Calcula e mostra o número ao quadrado
    quadrado = numero * numero;
    printf("O numero ao quadrado e: %.2f\n", quadrado);
    
    // Calcula e mostra o número ao cubo
    cubo = numero * numero * numero;
    printf("O numero ao cubo e: %.2f\n", cubo);
    
    // Calcula e mostra a raiz quadrada do número
    raizQuadrada = sqrt(numero);
    printf("A raiz quadrada do numero e: %.2f\n", raizQuadrada);
    
    // Calcula e mostra a raiz cúbica do número
    raizCubica = cbrt(numero);
    printf("A raiz cubica do numero e: %.2f\n", raizCubica);
    
    // Calcula e mostra o resto da divisão do número por 3
    resto = fmod(numero, 3);
    printf("O resto da divisao por 3 e: %.2f\n", resto);
    
    return 0;
}
