#include <stdio.h>


void insertion(int a[],int size){
	int j;
	int i;

	for(j=1;j<size;j++){
		int tmp = a[j];
		i=j-1;
		for(;i>=0 && a[i]>tmp;i--){
			a[i+1]=a[i];
		}
		a[i+1]=tmp;
	}
}

void swap(int* p1, int* p2){
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}

void mix(int a[], int min, int mid, int max){
	int i,j;
	int n1=mid-min+1;

	int n2=max-mid;

	int tmpL[n1];
	int tmpR[n2];

	for(i=0;i<n1;i++){
		tmpL[i]=a[min+i];
	}
	for(j=0;j<n1;j++){
		tmpR[j]=a[mid+1+j];
	}

	i=0;
	j=0;
	int k=min;

	while(i<n1 && j< n2){
		if(tmpL[i]<=tmpR[j]){
			a[k]=tmpL[i];
			i++;
		}
		else{
			a[k]=tmpR[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		a[k]=tmpL[i];
		i++;
		k++;
	}

	while(j<n2){
		a[k]=tmpR[j];
		j++;
		k++;
	}
}

void merge(int a[], int min, int max){
	if(min<max){
		int mid=(max+min)/2;
		merge(a,min,mid);
		merge(a,mid+1,max);
		mix(a,min,mid,max);
	}
}


void bubble(int a[], int size){
	int i;
	int j;
	int aux;

	for(i=0;i<size-1;i++){
		for(j=0;j<(size-1)-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);				
			}
		}
	}
}

void printArray(int a[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("[ %d ] ",a[i]);
	}
	printf("\n");
}

/*int main(){

	int a[] = {10,2,9,1,0,3};
	
	int size = sizeof(a)/sizeof(a[0]);
	
	printArray(a,size);
	bubble(a,size);
	printArray(a,size);	

	return 0;
}*/

int main(){
	int a[] = {10,9,3,1,0,100,2};
	int size = sizeof(a)/sizeof(a[0]);

	printArray(a,size);

	//insertion(a,size);

	merge(a,0,size-1);

	printArray(a,size);

	return 0;
}