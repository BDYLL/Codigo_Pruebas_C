#include <stdio.h>

int main(int argc, char *argv[])
{
	
	if(argc!=2){
		printf("usage %s\n", argv[0]);
	}
	else{
		FILE *file = fopen(argv[1],"r");

		if(file!=0){

			int x;

			while((x=fgetc(file))!=EOF){
				printf("%c", x);
			}
			fclose(file);
		}
		else{
			printf("Could not open file\n");
		}
	}

	return 0;
}