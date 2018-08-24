#ifndef ALUNO_H
#define ALUNO_H
#include "Dados.h"

typedef struct Aluno {
char nome[100];
int ra;
int notas;
Dados * nota;
}Aluno;
Aluno* newAluno(int ra, char * nome);
void AddNota(Aluno *aux, int maxnota);
void ImprimeAluno(Aluno *aux);

#endif
