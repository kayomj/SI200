/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dados.c
 * Author: meira
 * 
 * Created on 10 de Agosto de 2018, 21:59
 */

#include "Dados.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * Cria um Registro
 * @return registro criado.
 */

Dados * newDados(int maxParam){
    Dados * aux = (Dados *)malloc(sizeof(Dados));
    aux->v = (int *)malloc(sizeof(int)*maxParam);
    aux->tam = 0;
    aux->max = maxParam;
    return aux;
}

void verificaCapacidade(Dados *d){
    if(d->tam==d->max){
        printf("Registro cheio\n");
        exit(1);
    }
}

void verificaLimites(Dados *d, int pos){
    if(pos>=d->tam){
        printf("Posicao invalida\n");
        exit(1);
    }
}

void add(Dados *d, int valor){
    verificaCapacidade(d);
    d->v[d->tam]=valor;
    d->tam += 1;
}

/** Imprime o registro */
void imprimeD(Dados *d){
    printf("(");
    for(int i=0;i<d->tam;i++){
        printf("%d",d->v[i]);
        if(i<d->tam-1){
            printf(",");
        }
    }
    
    printf(")\n");
    
}

/**
 * Remove o registro da posição v[pos]. Sucessores são deslocados
 *  para a esquerda.
 * @param d - Registro
 * @param pos - sera removido v[pos]
 * @return elemento removido
 */
int removeEle(Dados *d, int pos){
    verificaLimites(d,pos);
    int ele =d->v[pos];
    for(int i=pos;i<d->tam-1;i++){
        d->v[i]=d->v[i+1];
    }
    d->tam--;
    return ele;
}


