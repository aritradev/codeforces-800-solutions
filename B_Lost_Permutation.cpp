#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
   int m,s,mx=0;
   int count =0;
   int flag;
   cin>>m>>s;
   int ara[m];
   for(int i =0 ;i<m;i++){
    cin>>ara[i];
   }
   sort(ara,ara+m);
   for(int i =1 ;i<=50;i++){
    if(ara[i-1]!=i){
        s-=i;
        mx=i;
        if(s==0)
        { flag=1;
        break;}
        else  
         flag=0;
    }
    count++;
   }
   
   if (flag==1 && count == mx)
   cout<<"YES\n";
   else
   cout<<"NO\n";

}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
