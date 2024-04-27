#include<stdio.h>
int main(){
	int a,b,suma,res;

	printf("ingrese un numero\n");
	scanf("%d",&a);
	printf("ingrese el segundo numero\n");
	scanf("%d",&b);

	
	suma=a+b;
	res= suma*suma;
	
	printf("el cuadrado de la suma de dos numeros es : %d\n",res);
	return 0;
}
