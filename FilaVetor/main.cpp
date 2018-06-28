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
#include <stdio.h>

#include "filavet.h"
using namespace std;

#define TAM 5

int fila[TAM];
int inicio=0;
int fim=0;
int cont=0;

void RemoveFila(){
    if(cont > 0){
        if(inicio <= TAM){
            inicio++;
        } 
        else {
            inicio = 0;
        }
        cont--;
    } 
    else {
        printf("fila vazia\n");
    }
}

void InsereFila(int var){
    if(cont < TAM){
        fila[fim] = var;
        cont++;
        if(fim == TAM)
            fim = 0;
        else
            fim++;
    }
    else
        printf("Fila cheia\n");

}

void ImprimeFila(){
    int i, j;
    printf("\ninicio = %d\n", inicio);
    printf("fim = %d\n", fim);
    printf("n de elementos = %d\n\n", cont);

    j = inicio;
    for (i = 0; i < cont; i++){
        if(j < TAM){
            printf("%d\t", fila[j]);
            j++;
        } 
        else {
            j = 0;
        }
    }
}

int main(){
    int valor, i;
    for(i = 0; i < TAM; i++){
	printf("Escreva o %d valor para inserir na fila: ", i);
	scanf("%d", &valor);
	InsereFila(valor);
    }
    ImprimeFila();
    RemoveFila();
    return;
}