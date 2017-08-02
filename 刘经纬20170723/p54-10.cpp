#include <iostream>
using namespace std;
int main(){
    int s;
	cin>>s;
	
	if(s<=160){
		cout<<"适合跑步"; 
	}	
	else if(s>160 && s<=175){
		cout<<"适合打羽毛球";
	}
	else{
		cout<<"适合打篮球";
    }
    return 0;
}
