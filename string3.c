#include<stdio.h>

main()

{
	char a[100];
	a[0]='D';
	a[1]='H';
	a[2]='R';
	a[3]='U';
	a[4]='V';
	
	
	char i;
	for(i=0;i<5;i++)
	{
		printf("%c",a[i]+32);
	}
}
