#include <stdio.h>
#include <stdlib.h>

/*int main(){
	
	int x;
	int  *p;
	
	p=&x;
	
	scanf("%d",&x);
	printf("%d\n",*p);
	
	return 0;
}*/

int mult(int *p,int *x){
	return (*p)*(*x);
}

int main(){
	int d=2;
	int f=4;
	
	printf("%d\n",mult(&d,&f));
	return 0;
}

/*int main(){
	int *p = malloc(sizeof(*p));
	int d=23;
	p=&d;
	printf("%d\n",*p);
	return 0;
}*/
