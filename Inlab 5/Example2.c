#include <stdio.h>
int main() 
{
	int permissions = 0;
	int choice, action;
	int READ = 1;
	int WRITE = 2;
	int EXECUTE = 4;
	int ADMIN = 8;
	printf("1. Read Permission\n");
	printf("2. Write Permission\n");
	printf("3. Execute Permission\n");
	printf("4. Administrator Permission\n");

	scanf("%d", &choice);
	switch(choice) 
	{
		case 1:
		permissions = permissions | READ;
		printf("Read permission granted.");
		break;
		case 2:
		permissions = permissions | WRITE;
		printf("Write permission granted.");
		break;
		case 3:
		permissions = permissions | EXECUTE;
		printf("Execute permission granted.");
		break;
		case 4:
		permissions = permissions | ADMIN;
		printf("Administrator permission granted.");
		break;
		default:
		printf("Invalid choice.");
	}
	printf("1. Check Read Permission\n");
	printf("2. Check Write Permission\n");
	printf("3. Toggle Execute Permission\n");
	printf("4. Remove Administrator Permission\n");

	scanf("%d", &action);
	switch(action) {
		case 1:
		if((permissions & READ) != 0)
		printf("User has Read Permission.");
		else
		printf("User DOES NOT HAVE Read Permission.");
		break;
		case 2:
		if((permissions & WRITE) != 0)
		printf("User has Write Permission.");
		else
		printf("User DOES NOT HAVE Write Permission.");
		break;
		case 3:
		permissions = permissions ^ EXECUTE;
		printf("Execute permission toggled.");
		printf("Updated Permission Value: %d", permissions);
		break;
		case 4:
		permissions = permissions & ~ADMIN;
		printf("Administrator permission removed.");
		printf("Updated Permission Value: %d", permissions);
		break;
		default:
		printf("Invalid action.");
	}
    return 0;
}
