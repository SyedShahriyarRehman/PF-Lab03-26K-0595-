#include <stdio.h>
int main () 
{
	int age,day,rate;
	char category;
	
	printf("Enter your Age: ");
	scanf("\n%d" , &age);


	while (age != 0)
	{
		printf("Enter the Category: ");
	    scanf(" \n%c" , &category);
		switch(category)
		{
			case 'R':
				rate = 500;
				if(age<=13)
				{
					rate = rate*0.7;
					printf("The Price for your ticket is:%d" ,rate);
				}
				else if (age>=60)
				{
					rate = rate*0.8;
					printf("The Price for your ticket is:%d" ,rate);
				}
				else 
				{
					rate = rate;
					printf("The Price for your ticket is:%d" ,rate);
				}
				break;
				
			case 'D':
				rate = 800;
				if(age<=13)
				{
					rate = rate*0.7;
					printf("The Price for your ticket is: %d" , rate);
				}
				else if(age>=60)
				{
					rate = rate*0.8;
					printf("The Price for your ticket is: %d" , rate);
				}
				else 
				{
					rate = rate;
					printf("The Price for your ticket is: %d" , rate);
				}
				break;
				
			case 'P':
				rate = 1200;
				if(age<=13)
				{
					rate = rate*0.7;
					printf("The Price for your ticket is: %d" , rate);
				}
				else if(age>=60)
				{
					rate = rate*0.8;
					printf("The Price for your ticket is: %d" , rate);
				}
				else 
				{
					rate = rate;
					printf("The Price for your ticket is: %d" , rate);
				}
				break;
				
				
		}
		printf("Enter date of the month: ");
		scanf("\n%d" ,&day);
		if (day % 5 == 0)
			{
				printf("BONUS DAY,Here is Your 50 RS off");
				rate = rate - 50;
			}
		if (rate < 100)
		{
			rate = 100;
		}
		
		printf("Your Final Price is: %d" , rate);
		
		printf("Enter your Age: ");
	    scanf("%d" , &age);
			
	}
    return 0;
}

