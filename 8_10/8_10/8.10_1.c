/*#include <stdio.h>
int main()
{ 
  int i=0;
  int j = 0;
  for (i = 100; i <= 200; i++)
  {
	for (j = 2; j < =i/2; j++)
	{
	   if (i%j == 0)
	   break;
	}
if (j == i)
    printf("%d ",i);
  }
	return 0;
}

#include <stdio.h>
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 400 == 0)
		{
			printf("%d", y);
		}
		else if (y % 4 == 0 && y % 100 != 0)
			printf("%d", y);

	}
	return 0;*/
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
