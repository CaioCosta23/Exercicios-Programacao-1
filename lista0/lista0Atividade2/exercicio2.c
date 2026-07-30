// Faça um programa que leia dois valores inteiros e imprima-os na tela de maneira inversa ao seu recebimento;

#include <stdio.h>

int main() {
	int numero1, numero2;
	
	scanf("%d %d", &numero1, &numero2);
	
	printf("%d,%d", numero2, numero1);
	
	return 0;
}