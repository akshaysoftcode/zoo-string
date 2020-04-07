#include <stdio.h>
#include <string.h>
void main(){
	char x[20];
	char ch='z';
	char bh='o';
	int i,c=0,d=0;
	gets(x);
	//l=strlen(x);
	//printf("%d",l);
	for(i=0;x[i] ;i++)
	{
		if (x[i]==ch)
		{
		c++;
		}

		else if(x[i]==bh)
		{
		d++;
		}

	}
	//printf("%d",c);
if ((2*c)==d)
{
	printf("Yes");
}
else if((2*c)!=d)
{
	printf("No");
}

}
