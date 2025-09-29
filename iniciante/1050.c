#include <stdio.h>

// Função para buscar a cidade correspondente ao DDD
const char* buscarCidade(int ddd_buscado, int ddds[], const char* cidades[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (ddds[i] == ddd) {
            return cidades[i];
        }
    }
    return "DDD nao cadastrado";
}

int main() {
    // Definindo os DDDs e suas respectivas cidades. Eles tem que ser colocados na mesma posição i dos 2 vetores
    int ddds[] = {61, 71, 11, 21, 32, 19, 27, 31};
    const char* cidades[] = {
        "Brasilia",
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de Fora",
        "Campinas",
        "Vitoria",
        "Belo Horizonte"
    };
    int tamanho = sizeof(ddds) / sizeof(ddds[0]);

    // Lendo o DDD de entrada
    int ddd;
    scanf("%d", &ddd);

    // Buscando a cidade correspondente ao DDD
    const char* cidade = buscarCidade(ddd, ddds, cidades, tamanho);

    // Imprimindo o resultado
    printf("%s\n", cidade);

    return 0;
}
