#include <stdio.h>

int main()
{
	int a;
	int b;
	double first;
	double second;
	double third;	
		
	scanf("%d", &a);
	scanf("%d", &b);
	
	first = b-(ceil(b/10)*10);
	second = ceil(b/10)-(ceil(b/100)*10);
	third = ceil(b/100);
	
	printf("%.f\n",a*first);
	printf("%.f\n",a*second);
	printf("%.f\n",a*third);
	printf("%d",a*b);
	

	return 0;
}
