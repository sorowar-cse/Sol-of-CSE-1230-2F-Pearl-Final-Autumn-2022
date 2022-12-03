#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,b,a;
    int t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    n=sqrt(a*a+b*b);
    double ans=(a*b)/n;
    cout<<fixed<<setprecision(2)<<ans<<endl;}
    return 0;
}
