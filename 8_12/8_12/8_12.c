#include <stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5}
	int b[5] = {5,4,3,2,1}
	int t = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d %d",a[i],b[i]);
	}



	return 0£»
}