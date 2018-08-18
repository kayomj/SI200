#include<stdio.h>
#include "Aluno_Ex3.h"
Aluno * newAluno(char * nome, int ra){
  Aluno *aux = (Aluno*)malloc(sizeof(Aluno));
  aux->nome=nome;
  aux->ra=ra;
  aux->notas=newDados(3);
  
}
Aluno * AddNota(Aluno *aux,int maxnota){
  add(aux->notas, maxnota);
  return aux;
}
