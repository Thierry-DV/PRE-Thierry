/*2 questao
Aluno: Thierry Uchoa de Freitas*/

#include <stdio.h>

float hora;
int horas, minutos, segundos;

int main() {

    printf("Digite a hora (no formato Horas.Minutos): ");
    scanf("%f", &hora);

    // Extrai a parte inteira (horas) e a parte decimal (minutos)
    horas = (int)hora;
    minutos = (int)((hora - horas) * 100); // Multiplicamos por 100 para converter a parte decimal em minutos

    // Calcula os segundos
    segundos = (horas * 3600) + (minutos * 60); // Converte horas e minutos para segundos

    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59) {
        printf("Horas: %f horas\n", hora);
        printf("Hora em minutos: %d minutos\n", horas * 60 + minutos);
        printf("Hora em segundos: %d segundos\n", segundos);
    } else {
        printf("Hora inválida.\n");
    }

    return 0;
}