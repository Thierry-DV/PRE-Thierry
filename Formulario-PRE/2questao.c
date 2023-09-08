/*2 questao
Aluno: Thierry Uchoa de Freitas*/

#include <stdio.h>

float hora;
int horas, minutos,minutostot,minutostotais, segundos, segundoshoras, segundosminutos;

int main() {

    printf("Digite a hora (no formato Horas.Minutos): ");
    scanf("%f", &hora);

    // Extrai a parte inteira (horas) e a parte decimal (minutos)
    horas = (int)hora;
    minutos = (int)((hora - horas) * 100); // Multiplicamos por 100 para converter a parte decimal em minutos

    //Calcula os minutos
    minutostot = horas * 60;
    minutostotais = minutostot + minutos;
    
    // Calcula os segundos
    segundosminutos = (minutos * 60);
    segundoshoras = (horas * 3600);
    segundos = segundoshoras + segundosminutos;

    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59) {
        printf("Horas: %d\n", horas);
        printf("Minutos: %d\n", minutostotais);
        printf("Segundos: %d\n", segundos);
    } else {
        printf("Hora invalida.\n");
    }
    return 0;
}