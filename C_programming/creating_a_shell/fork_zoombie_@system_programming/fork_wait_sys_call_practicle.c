#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t pid = fork();
	if (pid == 0)
	{
		int number;
		printf("\n\t\tH e l l o w  F r o m  C h i l d\n\n\n");
		printf("\033[36m[+]Bro observe parent is waiting....\n[!]just do it...and end this process...\n");
		printf("\n\nEnter A Number :\n");
		scanf("%d", &number);
		if (number % 2 == 0)
		{
			printf("\nNumber Is Even :)\n");
		}
		else
		{
			printf("\nNumber Is Odd\n");
		}
	}
	///parent section
	else
	{
		wait(NULL);
		printf("\033[31m\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n\033[31m\t   ********hellow From Parent**********");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''          \t\t\t\t\t       ''''");
		printf("\n''''          \t\t\t\t\t       ");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n''''         \t\t\t\t\t       ''''");
		printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
	}
	


    return 0;
   }