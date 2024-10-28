#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    float n1, n2, n3, media;
    printf("Digite três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = calcularMedia(n1, n2, n3);
    printf("Média: %.2f - %s\n", media, media >= 6 ? "Aprovado" : "Reprovado");
    return 0;
}
