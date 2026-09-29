#include <stdio.h>
int main ()
{
	int i,num;
	printf("Total number of containers today: ");
	scanf("%d" , &num);
	for (i = 1 ; i<=num ; i++)
	{
		int weight;
		int ctype;
		printf("Container's Cargo Type(1 for General Goods,2 for Hazardous Materials,3 for Refregerated Goods): ");
		scanf("%d" , &ctype);
		printf("Weight of the container:");
		scanf("%d" , &weight);
		switch(ctype)
		{
			case 1:
				if(weight<= 20000)
				{
					printf("Eligible for loading.");
				}
				else
				{
					printf("Not Eligible for loading.");
				}
				break;
			case 2:
				if(weight<= 15000 && i % 2 != 0)
				{
					printf("Eligible for loading.");
				}
				else
				{
					printf("Not Eligible for loading.");
				}
				break;
			case 3:
				if(weight<= 18000)
				{
					printf("Eligible for loading.");
				}
				else
				{
					printf("Not Eligible for loading.");
				}
				break;
		}
		
		int r1 = weight % 97;
		int final_code = r1 % 100;
	    printf("\nYour Final 2 digit tracking Code is:%d" , final_code);
		
			
	}
	
	return 0;
} 
