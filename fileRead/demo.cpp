#include <iostream>
using namespace std;
int jc(int i){
	if(i==1){
		return 1;
	}
	else{
		return i*jc(i-1);
	}
}
int main(){
	freopen("abc.in","r",stdin);
	freopen("abc.out","w",stdout);
	int a;
	cin>>a;
	cout<<jc(a);
	fclose(stdin);
	fclose(stdout);
} 
