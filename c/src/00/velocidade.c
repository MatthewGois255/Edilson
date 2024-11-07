#include <stdio.h>

int main() {
    float s0, sf, t0, tf, diferenca_km, diferenca_hora, velocidade_media;

    printf("Em qual km você começou?\n");
    scanf("%f", &s0);
    printf("Em qual km você terminou?\n");
    scanf("%f", &sf);
    printf("Qual era a hora no começo da corrida?\n");
    scanf("%f", &t0);
    printf("E em que hora ela terminou?\n");
    scanf("%f", &tf);

    diferenca_km = sf - s0;
    diferenca_hora = tf - t0;

    velocidade_media = diferenca_km / diferenca_hora;

    printf("A sua velocidade média foi %.2f km/h\n", velocidade_media);

    return 0;
}