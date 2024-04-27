#include<stdio.h>
int main(){
	int x,y,z,res;

	printf("ingrese un dato\n");
	scanf("%d",&x);
	printf("ingrese el segundo dato\n");
	scanf("%d",&y);
	printf("ingrese eltecer dato\n");
	scanf("%d",&z);
	
	res=(x*x)+(y*y)+(z*z*z);
	
	printf("el resultado es: %d\n",res);
	return 0;
}
