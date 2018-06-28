/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: silvi_000
 *
 */

#include <cstdlib>
#include "pilhaaloc.h"

using namespace std;

struct no{
    int dado;
    struct no *prox;
};

struct no *topo=NULL;

void Push(int valor){
    struct no *aux;
    aux = new(struct no);
    aux -> dado = valor;
    aux -> prox = topo;
    topo = aux;
}

Pop(){
    struct no *aux;
    if(topo == NULL) return -1;
    aux = topo;
    topo = topo -> prox;
    delete(aux);
}

Imprime(){
    struct no *aux;
    if(topo == NULL) 
        return -1; 
    aux = topo;
    while(aux != NULL){
        printf("%d \n", aux -> dado);
        aux = aux -> prox;
    }
}

int main(){
    Push(10);
    Push(20);
    Push(30);
    Imprime();
}
