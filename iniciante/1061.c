#include <stdio.h>

int main() {
    int dia_inicio, hora_inicio, min_inicio, seg_inicio;
    int dia_fim, hora_fim, min_fim, seg_fim;
    int total_inicio, total_fim, duracao;
    int dias, horas, minutos, segundos;

    // Leitura da entrada
    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &min_inicio, &seg_inicio);
    scanf(" Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &min_fim, &seg_fim);

    // Converter tudo em segundos
    total_inicio = dia_inicio * 86400 + hora_inicio * 3600 + min_inicio * 60 + seg_inicio;
    total_fim = dia_fim * 86400 + hora_fim * 3600 + min_fim * 60 + seg_fim;

    duracao = total_fim - total_inicio;

    // Quebrar em dias, horas, minutos, segundos
    dias = duracao / 86400;
    duracao %= 86400;

    horas = duracao / 3600;
    duracao %= 3600;

    minutos = duracao / 60;
    segundos = duracao % 60;

    // Saída
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
