#include <stdio.h>

int main(){
	
	int arr[10];
	int i=0;
	int j=0;

	for(;i<10;i++){
		arr[i]=i;
	}

	for(;j<(sizeof(arr)/sizeof(arr[0]));j++){
		printf("%d\n",arr[j]);
	}
	
	return 0;
}
