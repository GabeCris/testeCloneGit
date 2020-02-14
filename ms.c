#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

	srand(time(NULL));


	int ms[6];
	int n[6];
	int cont =0;



	printf("Informe 6 numeros: \n");

	for (int i = 0; i <6; i++){

		scanf("%d", &n[i]);
		while(n[i] > 60 || n[i] < 0){
			scanf("%d", &n[i]);
		}
	}

	for (int i = 0; i <6; i++){

  		ms[i] = rand() % 60;
	}

	for (int i = 0; i <6; i++){
		for(int j = 0; j <6; j++)

  		if(n[i] == ms[j]){
  			cont++;
  		}
	}

	printf("VOCE ACERTOU %d NUMEROS\n", cont);

	for (int i = 0; i <6; i++){

  		printf("%d\n", ms[i]);
	}






	
	return 0;
}