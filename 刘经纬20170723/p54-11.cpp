#include <iostream>
using namespace std;
int main(){
   float x,y;
   cin>>x;
   
   if(x>0){
   	y=1+x*x;
   } 
   else if(x==0){
   	y=0;
   }
   else{
   	y=10+x;
   }

   cout<<y;
   return 0;
}
