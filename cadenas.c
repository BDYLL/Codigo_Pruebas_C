#include <stdio.h>

int main(){
	
	char cadena[200];

	printf("enter something large\n");
	
	fgets(cadena,200,stdin);
	
	int i;
	
	for(i=0;i<200;i++){
		if(cadena[i]=='\n'){
			cadena[i]='\0';
			break;
		}
	}
	
	printf("you entered %s\n",cadena);

	return 0;
}

