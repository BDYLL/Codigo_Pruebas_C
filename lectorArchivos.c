#include <stdio.h>

void readFile(){
	FILE *file;

	file=fopen("/home/diego/Escritorio/lol","w");

	fprintf(file,"lol\n");

	fclose(file);
}

int main(){
	readFile();
	return 0;
}
