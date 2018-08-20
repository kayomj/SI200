#include<stdio.h>
#include "Aluno_Ex3.h"
struct Aluno {
char nome[100];
int ra;
};
Aluno * newAluno(int ra, char * nome){
  Aluno *aux = (Aluno*)malloc(sizeof(Aluno));
  aux->nome=Aluno.nome;
  aux->ra=Aluno.ra;
  aux->notas=Aluno.newDados(3);
  
}
Aluno * AddNota(Aluno *aux,int maxnota){
  add(aux->Aluno.notas, maxnota);
  return aux;
}
