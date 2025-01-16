#include<stdio.h>

int add(int a,int b){
	return a+b;
}

int main(){
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int c = add(a,b);
	printf("addition of %d and %d is %d\n",a,b,c);
	printf("\ngithub\n");
}
