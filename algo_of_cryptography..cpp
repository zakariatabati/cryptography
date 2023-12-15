#include<stdio.h>
#include<string.h>
#include<math.h>
int a,b;
int fib (int n)
{
	if(n==0)
		return a;
	if(n==1)
		return b;
	return fib(n-1)+fib(n-2);
		
}
void encrypion(char s[])
{
	int n= strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			int  y = (fib(i+2)%26);
			if((y+s[i])>'z')
				s[i] = 96 +(abs(y+s[i]-122));
			else
				s[i] =(s[i]+y) ;
		}
	}
}
void dencrypion(char s[])
{
	int n = strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			int y = (fib(i+2)%26);
			if(s[i]-y<'a')
				s[i] = 123-(abs(s[i]-y-97));
			else 
				s[i] = s[i] - y;
		}
	}
}
void tolower(char s[])
{
	int n = strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			s[i] = s[i]+32;
	}
}
int main()
{
	char s[200];
	printf("Enter the sentence  :");
	gets(s);
	tolower(s);
	int c;
	do
	{
		printf(" ------------ menu ------------  \n 1:Encrypion \n 2:Dencryption  \n 0:exits \n");
		printf("enter your choice : ");
		scanf("%d",&c);
		if(c==1)
		{
			printf("enter a and b : ");
			scanf("%d%d",&a,&b);
			encrypion(s);
			printf("%s\n",s);
		}
		if(c==2)
		{
			printf("enetr a and b : ");
			scanf("%d%d",&a,&b);
			dencrypion(s);
			printf("%s\n",s);
		}
		
	}while(c!=0);
	
	return 0;
}
