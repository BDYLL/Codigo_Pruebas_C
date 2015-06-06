#include <stdio.h>
#include <stdlib.h>

int** leer(char path[], int n){
	FILE *file=fopen(path,"r");

	if(file!=0){
		int *vals = (int*)calloc(n*n,sizeof(n));
		int **rows = malloc(n*sizeof(int*));

		int i;
		int j;
		char c;
		for(i=0;i<n;i++){
			c=(char)fgetc(file);
			if(c=='1'){
				vals[i]=1;
			}
			else if(c=='2'){
				vals[i]=2;
			}
			else if(c=='-'){
				vals[i]=0;
			}
			else if(c=='X'){
				vals[i]=-1;
			}
			rows[i]=&vals[i];
		}
		fclose(file);
		return rows;
	}
	else{
		return 0;
	}
}

void printFile(char path[]){
	FILE *file = fopen(path,"r");

	int x;

	while((x=fgetc(file))!=EOF){
		printf("%c", x);
	}
	fclose(file);
	printf("\n");
}

int main(){

	printFile("/home/diego/Documentos/Codigo_C/default.txt");	


	int **vals = leer("/home/diego/Documentos/Codigo_C/default.txt",8);
	if(vals!=0){
		int i;
		int j;

		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				printf("%d",vals[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Error\n");
	}

	
	return 0;
}