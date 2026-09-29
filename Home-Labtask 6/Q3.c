#include <stdio.h>
int main ()
{
	int i,num;
	printf("Total number of students in the class: ");
	scanf("%d" , &num);
	for (i = 1 ; i<=num ; i++)
	{
		int m1,m2,m3;
		float avg;
		printf("Marks of subject 1(out of 100): ");
		scanf("%d" , &m1);
		printf("Marks of subject 2(out of 100): ");
		scanf("%d" , &m2);
		printf("Marks of subject 3(out of 100): ");
		scanf("%d" , &m3);
		avg = (m1+m2+m3)/3;
		
		switch((int)(avg/10))
		{
			case 10:
			case 9:
			    printf("Grade A\n");	
				break;
			case 8:
				printf("Grade B\n");	
				break;	
			case 7:
				printf("Grade C\n");	
				break;
			case 6:
				printf("Grade D\n");	
				break;
			default:
				printf("Grade F\n");	
				break;	
				
			avg>= 60 && m1>=40 && m2>=40 && m3>=40  ? printf("Passed") : printf("Failed") ;
		}
	}
	
	return 0;
}
