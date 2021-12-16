#include<stdio.h>
void main()
{
	int side,area,perimeter;
	printf("enter side length");
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("Area of square is %d\n",area);
	printf("Perimeter of square is%d",perimeter);
}
