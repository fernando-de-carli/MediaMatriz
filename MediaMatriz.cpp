#include <stdio.h>

int main () {
	float matriz1 [3][4] = {4.0, 8.0, 6.0, 7.0,
	                         3.0, 9.0, 7.5, 8.5,
							 6.5, 4.0, 7.5, 6.0};
	float vet[3];
	int cott = 1;
	float soma = 0.00;
	
	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 3; j++){
			vet[i] += matriz1[i][j];
			
			if(j == 3){
				cott++;
			}
		}
	}
	for(int i = 0; i <= 2; i++){
		printf("%.2f \n", (vet[i]/cott));
	}
}
