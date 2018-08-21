#include<stdio.h>
#include "Aluno_Ex3.h"
Aluno* newAluno(int ra, char * nome){
  Aluno* aux = (Aluno*)malloc(sizeof(Aluno));
  aux->ra=ra;
  aux->nome=nome;
  aux->notas=newDados(100);
  
}
Aluno* AddNota(Aluno *aux,int maxnota){
  add(aux->Aluno.notas, maxnota);
  return aux;
}
