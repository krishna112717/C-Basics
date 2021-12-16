#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short int:\nSigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Unsigned:%d to %hu\n",0,USHRT_MAX);
	printf("int:\nSigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("Unsined:%d to %u\n",0,UINT_MAX);
	printf("Long int:\nSigned:%ld to%ld\n",LONG_MIN,LONG_MAX);
	printf("Unsigned:%d to%lu\n",0,ULONG_MAX);
	printf("long long int:\nsigned:%lld to %lld\n",LLONG_MIN,LLONG_MAX);
	printf("Unsigned:%d to %llu",0,ULONG_MAX);
}
