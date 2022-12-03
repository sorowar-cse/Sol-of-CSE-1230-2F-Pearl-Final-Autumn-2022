
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool IsPrime(int m){
   int i,temp;
   if(m==2) return 1;
else if(m%2==0||m==0||m==1) return 0;
else{
temp=sqrt(m);
   for(i=3;i<=temp;i+=2){
       if(m%i==0) return 0;
   }
   return 1;
}
}
int main(){
ll n,temp1,temp2;
while(cin>>n){
temp1=n; temp2=0;
while(temp1){
   temp2=(temp2*10)+(temp1%10);
   temp1/=10;
}
if(IsPrime(n)){
   if(n!=temp2){
       if(IsPrime(temp2)) cout<<n<<" is emirp.\n";
       else cout<<n<<" is prime.\n";}
   else cout<<n<<" is prime.\n";
   } 
else cout<<n<<" is not prime.\n";
}
   return 0;
}
