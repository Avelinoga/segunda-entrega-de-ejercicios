#include<stdio.h>
int main(){
	int num;
	float mitad,quintaParte, res;
	
	printf("ingrese un numero entero\n");
	scanf("%d",&num);
	
	mitad= num/2;
	quintaParte= num/5;
	res=mitad+quintaParte;
	
	printf("La mitad mas su quinta parte es: %.2f\n",res);
	return 0;
}
