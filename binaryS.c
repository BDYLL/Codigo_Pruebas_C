#include <stdio.h>

int binaryS(int a[], int min, int max, int s){
	if(min<=max){
		int mid=(min+max)/2;
		
		if(a[mid]==s){
			return mid;
		}
		else if(a[mid]<s){
			return binaryS(a,min,mid-1,s);
		}
		else if(a[mid]>s){
			return binaryS(a,mid+1,max,s);
		}
	}
	return -1;
}

void printArray(int a[], int size){
	int i;

	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
}

int main(){
	
	int a[]={1,2,3,4,5,6};
	
	int size = (sizeof(a))/(sizeof(a[0]));

	printf("%d\n",size);

	printf("%d\n",3/2);

	int index = binaryS(a,0,(size-1),4);

	printf("%d\n",index);	

	return 0;
}
