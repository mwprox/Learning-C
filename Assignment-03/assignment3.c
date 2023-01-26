#include <stdio.h>

int main()
{
	char fname[20];
	char lname[20];

	printf("Enter your first name: ");
	scanf_s("%s", fname, 20);
	printf("Enter your last name: ");
	scanf_s("%s", lname, 20);

	printf("Hello %s %s!\n", fname, lname);
	return 0;
}