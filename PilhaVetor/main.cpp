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

#include "pilhavet.h"
using namespace std;

#define TAM 5

int pilha[TAM];
int topo=-1;

void Push(int valor){
    if(topo == TAM - 1){
        printf("pilha cheia\n");
	return;
    }
    topo++;
    pilha[topo] = valor;
    printf("Inserido\n");
}

Vazia(){
    if(topo == -1)
        return true;
    else
        return false;
}

Pop(){
    if(!Vazia())
	return topo--;
    else
	return -1;
}

void Mostra(){
    int i;
    for(i=0; i <= topo; i++){
	printf("%d\t", pilha[i]);
    }
    printf("\n");
}

TopoPilha(){
    if(!Vazia())
        return pilha[topo];
    else
	return -1;
}

int main(){
    int valor, i, fimPilha;
    for(i = 0; i < TAM; i++){
	printf("Escreva o %d valor para inserir na pilha: ", i);
	scanf("%d", &valor);
	Push(valor);
    }

    fimPilha = topo;
    for(i = -1; i <= fimPilha; i++){
	Mostra();
	printf("O topo da pilha eh %d\n", TopoPilha());
	if(Pop() == -1){
            printf("Pilha vazia!\n");
	}
    }
    return 0;
}