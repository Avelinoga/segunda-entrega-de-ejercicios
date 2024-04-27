#include<stdio.h>
int main(){
	int a,b,resta,res;

	printf("ingrese un numero\n");
	scanf("%d",&a);
	printf("ingrese el segundo numero\n");
	scanf("%d",&b);

	
	resta=a-b;
	res= resta*resta;
	
	printf("el cuadrado de la diferencia de dos numeros es : %d\n",res);
	return 0;
}
