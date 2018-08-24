#include<stdio.h>
#include<string.h>
#include "Aluno_Ex3.h"
#include "Dados.h"
Aluno* newAluno(int ra, char * nome){
  Aluno* aux = (Aluno*)malloc(sizeof(Aluno));
  aux->ra=ra;
  strcpy(aux->nome,nome);
  aux->nota=newDados(100);

}
void AddNota(Aluno *aux,int maxnota){
  add(aux->nota, maxnota);
}
void ImprimeAluno(Aluno *aux){
  printf("%s\n %d\n",aux->nome,aux->ra);
  imprimeD(aux->nota);
}
