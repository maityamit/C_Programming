#include<stdio.h>
int main()
{
	int num1; float num2; char ch;
	printf("\nEnter an Integar : ");
	scanf("%d",&num1);
	printf("\nEnter a Float : ");
	scanf("%f",&num2);
	printf("\nEnter a character : ");
	fflush(stdin);
	scanf("%c",&ch);
	printf("\n\nInteger: %d",num1);
	printf("\n\nInteger: %u",num1);
	printf("\n\nFloat: %f",num2);
	printf("\n\nFloat: %e",num2);
	printf("\n\nCharacter: %c",ch);
	return 0;
}
