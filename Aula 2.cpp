//Aula 2
//Pedro Marinho Machado - 16/04/2024
#include <stdio.h>
int main(){
	float raio, area, pi=3.14;
	printf("Digite o raio do circulo que deseja saber a area: \n");
	scanf("%f", &raio);
	if(raio>0){
		area= pi*(raio*raio);
		printf("A area deste circulo e de: %f", area);
	}
}
	
