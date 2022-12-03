#include <iostream>

using namespace std;

int main()
{
    int n,i,num,x=0;
    cin>>n;
    int A1[n];
    for(i=0;i<n;i++){
         cin>>num;
         if(num%2==0){A1[x]=num; x++;}
    }
    for(i=x-1;i>=0;i--) cout<<A1[i]<<endl;
    return 0;
}
