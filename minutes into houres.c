//program convert minutes into hours
#include<stdio.h>
void main()
{
	//intialization
	int minutes;
	printf("Enter total minutes");
	scanf("%d",&minutes);
	printf("%d hour(s),%d minute(s)",minutes/60,minutes%60);
	
}
