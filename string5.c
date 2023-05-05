#include<stdio.h>

main()

{
	char a[100];
	a[0]='d';
	a[1]='h';
	a[2]='r';
	a[3]='u';
	a[4]='v';
	
	
	printf("%c",a[0]-32);
	
	int i;
	
	for (i=1;i<5;i++)
	{
		printf("%c",a[i]);
	}
}
