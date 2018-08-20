#include<stdio.h>
#include "Aluno_Ex3.h"
struct Aluno {
char nome[100];
int ra;
};
Aluno * newAluno(int ra, char * nome){
  Aluno *aux = (Aluno*)malloc(sizeof(Aluno));
  aux->Aluno.nome=nome;
  aux->Aluno.ra=ra;
  aux->Aluno.notas=newDados(3);
  
}
Aluno * AddNota(Aluno *aux,int maxnota){
  add(aux->Aluno.notas, maxnota);
  return aux;
}
