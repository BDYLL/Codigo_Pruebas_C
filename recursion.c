#include <stdio.h>

int factorial(int n){
	if(n==0){
		return 1;
	}	
	else{
		return n*factorial(n-1);
	}
}

int toBinary(int n){
	if(n<2){
		printf("%d",n);
		return n;
	}
	else{
		int tmp=toBinary(n/2);
		printf("%d",tmp);
	}
	printf("\n");
	return 0;
}

int sqr(int x){
	return x*x;
}

int nthPower(int x, int n){
	if(n==1){
		return x;
	}
	else if(n==0){
		return 1;
	}
	else if((n%2)==0){
		return sqr(nthPower(x,n/2));
	}
	else{
		return x*sqr(nthPower(x,(n-1)/2));
	}
}

int fib(int n){
	if(n==0){
		return 0;
	}
	else{
		int arr[n];
		arr[0]=0;
		arr[1]=1;
		int j;

		for(j=2;j<n;j++){
			arr[j]=arr[j-1]+arr[j-2];
		}
		return arr[n-1];
	}
}

int ack(int m, int n){
	if(m==0){
		return n+1;
	}
	else if((m>0) && (n==0)){
		return ack(m-1,1);
	}
	else{
		return ack(m-1,ack(m,n-1));
	}
}



int main(){	

	int x;
	int n;
	int res;

	printf("Enter an integer base: \n");
	scanf("%d",&x);
	printf("Enter an integer exponent: \n");
	scanf("%d",&n);

	res = nthPower(x,n);

	printf("%d\n", res);

	return 0;
}
