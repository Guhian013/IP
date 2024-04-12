#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int qtd, num, sum = 0, ceil, floor;
	
	do {
		printf("\n\nInsira a quantidade de números: ");
		scanf("%d", &qtd);
		if(qtd >= 0) {
			
		} else {
			printf("\n\nO número deve ser inteiro e maior ou igual a 0.");
		}
	}
	while(qtd < 0);
	
	int arr[qtd];
	
	for (int i = 1; i <= qtd; i++) {
		printf("\n Entre com o %do. número: ", i);
		scanf("%d", &num);
		
		arr[i-1] = num;
	}
	
	for (int j = 0; j < qtd-1; j++) {
		if (arr[j] > arr[j+1]) {
			ceil = arr[j];
		} else {
			ceil = arr[j+1];
		}
		
		if (arr[j] < arr[j+1]) {
			floor = arr[j];
		} else {
			floor = arr[j+1];
		}
	}
	
	sum = floor + ceil;
	printf("\nA soma do maior com o menor é: %d", sum);
	
}
