#ifndef ALUNO_H
#define ALUNO_H

typedef struct Aluno {
char nome[100];
int ra;
int notas;
Dados * nota;
}Aluno;
void Aluno * newAluno(int ra, char * nome[100]);
void Aluno * AddNota(Aluno *aux,int maxnota);
void ImprimeAluno(Aluno *a);

#endif

