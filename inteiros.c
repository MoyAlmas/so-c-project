#include <stdio.h>
#include <stdlib.h>

void imprime(int v[]){
	for(int i=0; i<10; i++){
		printf("%d->",v[i]);	
	}
}

void imprime2(float v[]){
	for(int i=0; i<10; i++){
		printf("%.2->",v[i]);	
	}
}

void main(){
	int v;
	int i = 0;
	float b = 0;
	char vector[10];
	int v_i[10];
	float v_j[10];
	printf("Insira os valores inteiros");
	for(int i=1; i<11; i++){
		fgets(vector, 10, stdin);
		v = atoi(vector);
		b = (float) v;
		v_i[10-i]=v;
		v_j[10-i]=v;
	}
	imprime(v_i);
	imprime2(v_j);
}
	
