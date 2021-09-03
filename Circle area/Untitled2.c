#include<stdio.h>
#define PIE 3.14
int main()
{
	int r;
	float area;
	printf("\nEnter the radius: ");
	scanf("%d",&r);
	area = PIE*r*r;
	printf("\nThe Area is: %.2f.",area);
	return 0;
	
	
	
}
