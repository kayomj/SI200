#include "Dados.h"
#include "Dados.c"
#include<stdio.h>
#include "Aluno_Ex3.c"
#include "Aluno_Ex3.h"
//Kayo Lourenço Gonçalves da Costa : 200611
//Solon Mota : 092984
int main(){
  Aluno *aux=newAluno (123456, "Pato Donald");
  AddNota(aux,80);
  AddNota(aux,90);
  AddNota(aux,100);
  Aluno *aux1=newAluno (123333,"Margarida");
  AddNota(aux1,90);
  AddNota(aux1,90);
  AddNota(aux1,100);
  ImprimeAluno(aux);
  ImprimeAluno(aux1);
return 0;
}
