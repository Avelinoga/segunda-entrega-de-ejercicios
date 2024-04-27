#include<stdio.h>
int main(){
	int num, res;
	
	printf("ingrese un numero entero\n");
	scanf("%d",&num);
	
	res= num*num-25;

	printf("El cuadrado de %d disminuido en 25 es: %d\n",num,res);
	return 0;
}
