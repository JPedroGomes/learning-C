#include <stdio.h>
/*
==================================================
Author: JoC#o Pedro Gomes
Project: Functions in C

Description:
Write a program that has a function that receives an array of integers as a parameter and returns the largest value.

DescriC'C#o:
FaC'a um programa que tenha uma funC'C#o que receba um vetor de inteiros como parC"metro e retorne o
maior valor.

Date:
18/04/2026
*/

void pulalinha() {
	printf("    ------    \n");
}

int verificaMaior(int vet[10]) {
	int numeroInicial = vet[0];
	for (int i = 0; i < 10; i++) {
		if (vet[i] > numeroInicial) {
			numeroInicial = vet[i];
		}
	}
	return numeroInicial;
}

int main()
{

	int vet[10];

	printf("digite 10 nC:meros: \n");
	pulalinha();

	for(int i = 0; i < 10; i++) {
		printf("digite o numero %d: \n", i+1);
		scanf("%d", &vet[i]);
	}
	pulalinha();

	printf("O maior valor C): \n");
	pulalinha();
	printf("%d", verificaMaior(vet));

	return 0;
}