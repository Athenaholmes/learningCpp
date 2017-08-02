#include <iostream>
using namespace std;

void move(int level,int l1,int l2);

int main(){
   	move(3,1,2);
}

void move(int level,int l1,int l2)
{
	int l3 = 1;
	if(l1!=1 && l2 !=1){
		l3 = 1;
	}
	else if(l1!=2 && l2 !=2){
		l3 = 2;
	}
	else if(l1!=3 && l2 !=3){
		l3 = 3;
	}
	
	if(level==1)
	{
		cout << level<< ":" << l1 << "->" << l2 << endl;
	}
	else
	{
		move(level-1,l1,l3);
		cout << level<< ":" << l1 << "->" << l2 << endl;
		move(level-1,l3,l2);
	}
}



