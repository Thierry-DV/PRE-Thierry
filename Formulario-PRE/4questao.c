/*4 questao
Aluno: Thierry Uchoa de Freitas*/

#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial;

    do {
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Por favor, digite um número inteiro positivo.\n");
        } else if (numero > 0) {
            fatorial = 1;

            // Calcula o fatorial do número
            for (i = 1; i <= numero; i++) {
                fatorial *= i;
            }

            printf("Número: %d\n", numero);
            printf("Fatorial: %llu\n", fatorial);
        }
    } while (numero != 0);

    return 0;
}