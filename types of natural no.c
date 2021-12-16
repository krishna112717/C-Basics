#include<stdio.h>
void main()
{
	int n,s,p,q;
	n=5;
	s=n*(n+1)/2;
	p=n*(n+1);
	q=n*n;
	
	printf("sum of frist %d natural numbers is %d\n",n,s);
	printf("sum of frist %d even natural numbers is %d\n",n,p);
	printf("sum of frist %d odd natural numbers is%d",n,q);
}
