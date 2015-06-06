#include <stdio.h>


typedef enum {FALSE, TRUE} bool;

int main(void){
	int ans=0;
	int grade=0;		
	bool cont=TRUE;

	while(cont)
	{	
		printf("1) Enter grade\n");		
		printf("2) Exit\n");
		scanf("%d", &ans);		

		if(ans==1)
		{
			printf("Enter your grade\n");
			
			scanf("%d", &grade);
			
			if(grade>=70)
			{
				printf("you passed\n");
			}
			else
			{
				printf("you failed\n");
			}
		}
		else if(ans==2)
		{
			cont=FALSE;
			printf("good bye\n");
		}
		else
		{
			printf("Please enter a valid option\n");
		}
	}
	
	return 0;
}
