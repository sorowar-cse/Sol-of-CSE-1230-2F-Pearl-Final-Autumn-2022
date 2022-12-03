
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    while(1){
         getline(cin,s1);
         if(s1=="END") break;
         map<char,int>m1;
         int i,c=0,sz1=s1.size(),sz2;
         for(i=0;i<sz1;i++){if(s1[i]!=' '){c++; m1[s1[i]]++;} }
         sz2=m1.size();
         if(c==sz2) cout<<s1<<endl;
         m1.clear();
    }
    return 0;
}
