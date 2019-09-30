#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <process.h>
#include <string.h>
#include <math.h>
#include <dos.h>
long m;
int anim(char string[10][60], int num)
{
	int i, j, l, k;
	for(i=0; i<num; i++)
	{
		for(j=27-2*i; j>i; j--)
		{
			clrscr();
			for(k=0; k<i; k++)
				cout<<string[k]<<endl;
			for(l=j-1; l>i; l--)
				cout<<endl;
			cout<<string[i];
			delay(10);
		}
	}
	return 0;
}
int marquee(char string1[10][60], int  no)
{
	int i, j, k, l, len, length[10];
	for(i=0; i<no; i++)
		length[i]=strlen(string1[i]);
	for(i=0; i<no; i++)
	{
		for(j=0; j<length[i]; j++)
		{
			clrscr();
			len=strlen(string1[i]);
			for(k=0; k<j; k++)
				cout<<" ";
			cout<<string1[i]<<endl;
			string1[i][len-1]='\0';
			for(l=i+1; l<no; l++)
				cout<<string1[l]<<endl;
			delay(10);
		}
	}
	clrscr();
	return 0;
}
int load()
{
	int i, k=0, j;
	char x=176, y=219;
	for(i=0; i<79; i++)
	{
		delay(10);
		if(i%3==0)
		{	clrscr();cout<<"Loading/\n";


			for(k=0; k<=i; k++)
				cout<<y;
			for(j=0; j<79-i; j++)
				cout<<x;
		}
		else if(i%3==1)
		{
			clrscr();cout<<"Loading|\n";
			for(k=0; k<=i; k++)
				cout<<y;
			for(j=0; j<79-i; j++)
				cout<<x;
		}
		else
		{	clrscr();cout<<"Loading\\\n";
			for(k=0; k<=i; k++)
				cout<<y;
			for(j=0; j<79-i; j++)
				cout<<x;
		}
	}
	return 0;
}