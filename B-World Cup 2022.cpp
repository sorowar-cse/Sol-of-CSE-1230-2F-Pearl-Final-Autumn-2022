#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    while(1){
    cin>>n;
    if(!n) break;
    int bj=0,ah,num;
    for(i=0;i<n;i++){
         for(j=0;j<n;j++){cin>>num; if(num) bj++;}
    }
    n*=n;
   ah=n-bj;
   if(bj>ah) cout<<"Blue Jaguar\n";
   else if(bj<ah) cout<<"Aqua Hornero\n";
   else cout<<"Aqua Blue\n";
    }
    return 0;
}
