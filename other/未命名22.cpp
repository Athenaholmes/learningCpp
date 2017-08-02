#include <iostream>
#include <math.h>
using namespace std;

void printStar(int j, int total)
{
	for(int i=abs(ceil(total/2.0)-j);i<= total;i++)
	{
		cout<<'*';
	}
	cout<<endl;
}

void printMultiLine(int total)
{
	for(int j=1; j<=total;j++)
	{
		printStar(j, total);
	}
}

int main()
{
	for(int i=1;i<=4;i++)
	{
		if(i==1){
			continue;
		}
		if(i>=3){
			break;
		}
		cout<<i<<endl;
	}
	
/*
	char name[50] = "";
	int age  = 0;
	scanf("%s", name);
	printf(
		"hello %s", 
		name
	);*/
	//printMultiLine(21);
}
