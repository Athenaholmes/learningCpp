#include <iostream>
#include <cstdio>

using namespace std;

int isRun(int a)
{
	if((a%4==0 && a%100!=0) || (a%400==0) )	{
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int a,b,c;
		
	cin>>a>>b;
		
	switch(b){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	        cout<<a<<" "<<b<<" "<<"31";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<a<<" "<<b<<" "<<"30";
		    break;
		case 2:
			if(isRun(a)==1) {
				cout<<a<<" "<<b<<" "<<"29";
			}
			else{
				cout<<a<<" "<<b<<" "<<"28";
			}
			break;
	}
	return 0;
}

