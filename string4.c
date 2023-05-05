#include<stdio.h>

main()

{
	char a[100];
	a[0]='d';
	a[1]='h';
	a[2]='r';
	a[3]='u';
	a[4]='v';
	
	
	char i;
	for(i=0;i<5;i++)
	{
		printf("%c",a[i]-32);
	}
}
