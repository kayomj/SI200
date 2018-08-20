#include<stdio.h>
#include "Aluno_Ex3.h"
Aluno * newAluno(int ra, char * nome){
  Aluno *aux = (Aluno*)malloc(sizeof(Aluno));
  aux->nome=nome;
  aux->ra=ra;
  aux->notas=newDados(3);
  
}
Aluno * AddNota(Aluno *aux,int maxnota){
  add(aux->notas, maxnota);
  return aux;
}
