#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin>>n;

	//金字塔	
	for(int i=1;i<=n;i++){
		//i越大，空格打得越少 
		for(int m=1;m<=n-i;m++){ 
			cout<<" ";
		}
		
		//i越大，星星打得越多 
		for(int m=1;m<=i*2-1;m++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<endl;

	//倒金字塔 
	for(int i=n;i>=1;i--){
		//i越大，空格打得越少 
		for(int m=1;m<=n-i;m++){ 
			cout<<" ";
		}
		
		//i越大，星星打得越多 
		for(int m=1;m<=i*2-1;m++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<endl;

	//轴对称金字塔 
	for(int i=1;i<=n;i++){
		int cur = i;
		if(cur > n/2+1){//对折
			cur = n-i+1;
		}
		
		//cur越大，空格打得越少 
		for(int m=1;m<=n-cur;m++){ 
			cout<<" ";
		}
		
		//cur越大，星星打得越多 
		for(int m=1;m<=cur*2-1;m++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<endl;

	//轴对称数字金字塔 
	for(int i=1;i<=n;i++){
		int cur = i;
		if(cur > n/2+1){//对折
			cur = n-i+1;
		}
		
		//cur越大，空格打得越少 
		for(int m=1;m<=n-cur;m++){ 
			cout<<" ";
		}
		
		//cur越大，星星打得越多 
		for(int m=1;m<=cur*2-1;m++){
			cout<<n/2+2-cur;
		}
		
		cout<<endl;
	}
	cout<<endl;

	return 0;
} 
