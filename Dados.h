/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dados.h
 * Author: meira
 *
 * Created on 10 de Agosto de 2018, 21:59
 */

#ifndef DADOS_H
#define DADOS_H

#include <stdbool.h>
#include <stdlib.h>


typedef struct Dados{
    /** vetor */
    int * v;
    /** numero de v */
    int tam;
    /** cap */
    int max;
}Dados;

Dados * newDados(int maxParam);

void add(Dados *d, int valor);

void imprimeD(Dados *d);

#endif /* DADOS_H */
