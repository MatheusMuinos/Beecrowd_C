#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura de nó da árvore
typedef struct No {
    char chave[60];
    char animal[20];
    struct No *esquerda;
    struct No *direita;
} No;

// Função para inserir na árvore
No* inserir(No* no, char* chave, char* animal) {
    if (no == NULL) {
        no = (No*)malloc(sizeof(No));
        strcpy(no->chave, chave);
        strcpy(no->animal, animal);
        no->esquerda = no->direita = NULL;
        return no;
    }
    if (strcmp(chave, no->chave) < 0)
        no->esquerda = inserir(no->esquerda, chave, animal);
    else if (strcmp(chave, no->chave) > 0)
        no->direita = inserir(no->direita, chave, animal);
    return no;
}

// Função para buscar na árvore
char* buscar(No* raiz, char* chave) {
    if (raiz == NULL) return NULL;
    if (strcmp(chave, raiz->chave) == 0) return raiz->animal;
    if (strcmp(chave, raiz->chave) < 0)
        return buscar(raiz->esquerda, chave);
    else
        return buscar(raiz->direita, chave);
}

int main() {
    // Criação da árvore e inserção dos nós
    No* raiz = NULL;

    // Inserindo os animais de acordo com a classificação
    raiz = inserir(raiz, "vertebrado-ave-carnivoro", "aguia");
    raiz = inserir(raiz, "vertebrado-ave-onivoro", "pomba");
    raiz = inserir(raiz, "vertebrado-mamifero-onivoro", "homem");
    raiz = inserir(raiz, "vertebrado-mamifero-herbivoro", "vaca");
    raiz = inserir(raiz, "invertebrado-inseto-hematofago", "pulga");
    raiz = inserir(raiz, "invertebrado-inseto-herbivoro", "lagarta");
    raiz = inserir(raiz, "invertebrado-anelideo-hematofago", "sanguessuga");
    raiz = inserir(raiz, "invertebrado-anelideo-onivoro", "minhoca");

    // Variáveis para armazenar as três palavras
    char palavra1[20], palavra2[20], palavra3[20];

    // Lendo as três palavras de entrada
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    // Concatenando as palavras para formar a chave de busca
    char chave[60];
    sprintf(chave, "%s-%s-%s", palavra1, palavra2, palavra3);

    // Buscando na árvore
    char* resultado = buscar(raiz, chave);

    // Imprimindo o resultado
    if (resultado != NULL)
        printf("%s\n", resultado);
    else
        printf("Animal não encontrado\n");

    return 0;
}