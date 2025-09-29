#include <stdio.h>

void calculate_game_duration(int start_hour, int start_minute, int end_hour, int end_minute) {
    // Se o início e o fim são iguais, o jogo durou 24 horas
    if (start_hour == end_hour && start_minute == end_minute) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return;
    }

    // Converter as horas e minutos em total de minutos
    int start_time_minutes = start_hour * 60 + start_minute;
    int end_time_minutes = end_hour * 60 + end_minute;

    // Calcular a duração em minutos
    int duration_minutes;
    if (end_time_minutes >= start_time_minutes) {
        duration_minutes = end_time_minutes - start_time_minutes;
    } else {
        // O jogo terminou no próximo dia
        duration_minutes = (24 * 60) - start_time_minutes + end_time_minutes;
    }

    // Converter a duração de minutos para horas e minutos
    int duration_hours = duration_minutes / 60;
    duration_minutes = duration_minutes % 60;

    // Imprimir a duração no formato desejado
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hours, duration_minutes);
}

int main() {
    int start_hour, start_minute, end_hour, end_minute;

    // Ler a entrada
    scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute);

    // Calcular a duração do jogo e imprimir o resultado
    calculate_game_duration(start_hour, start_minute, end_hour, end_minute);

    return 0;
}
