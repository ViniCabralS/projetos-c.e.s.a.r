#include <stdio.h>

int main() {
	int i,cont;
	float n,total,media;
	
	i = 1;
	cont = 0;

	while(i != 4){
		printf("Digite sua nota da %dVA\n",i);
		scanf("%f",&n);

		if (n < 0 && cont == 0){
			printf("Digite sua nota da segunda chamada:\n");
			scanf("%f",&n);
			cont = cont++;
		}

		total = total + n;
		i = i + 1;
	}
	media = total / 3;
	if (media >= 7){
		printf("Você passou com a media %f\n",media);
	}
	else{
		printf("Você foi pra final! Digite sua nota:\n");
		scanf("%f",&n);
		if (n >= 7){
			printf("Você passou!");
		}
		else{
			printf("Você reprovou!");
		}

	}
}
