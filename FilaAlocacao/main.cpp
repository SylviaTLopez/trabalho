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
#include "filaaloc.h"

using namespace std;

struct no{
    int dado;
    struct no *prox;
};

struct no *inicio=NULL;
struct no *fim=NULL;

void InsereFila(int valor){
    struct no *aux;
    
    aux=new(struct no);
    aux -> dado=valor;
    aux -> prox=NULL;
    
    if(inicio == NULL) {
        inicio = aux;
        fim = aux;
    } 
    else {
        fim -> prox = aux;
        fim = aux;
    }
}

void Imprime(){
    struct no *aux;
    if(inicio == NULL) {
        printf("Fila vazia");
        return;
    }
    aux = inicio;
    while(aux != NULL) {
        printf("%d", aux -> dado);
        aux = aux -> prox;
    }
}

void RemoveFila(){
    struct no *aux;
    if(inicio == NULL){
        printf("fila vazia");
        return;
   }
    aux = inicio;
    inicio = inicio -> prox;
    if(inicio == NULL){
        fim = NULL;
    }
    delete(aux);
}

int main(){
    InsereFila(10);
    InsereFila(30);
    InsereFila(50);
    Imprime();
    RemoveFila();
}