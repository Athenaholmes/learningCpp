#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b;
	cin>>b;
	cout<<max(a,b);
	

}
int max(int a,int b)
{
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
