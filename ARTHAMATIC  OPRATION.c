//printing all arithmatic operiations
#include<stdio.h>
void main()
{
	int a, b, s,d,p,q,r;
	a=11;
	b=2;
	
	s=a+b;
	d=a-b; 
	p=a*b;
	q=a/b;
    r=a%b;
    
	printf("sum of %d is %d is %d\n",a,b,s);
	printf("substaction of %d is %d is %d\n",a,b,d);
	printf("multiplication of%d is %d is %d\n",a,b,p);
	printf("Division of %d is % is %d\n",a,b,q);
	printf("Modulo division of%d is %d is %d",a,b,r);
}
