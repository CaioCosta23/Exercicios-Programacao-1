// Leia um número real  (de no máximo 2 casas decimais) e exiba o número com a parte inteira e a parte decimal separados;

#include <stdio.h>

int main(){
	float numero, casasDecimais;
	
	scanf("%f", &numero);
	
	printf("INTEIRO:%d,", (int)numero);
	printf("REAL:%.2f", (numero - (int)numero));
	
	return 0;
}