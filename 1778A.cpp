#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum=0;
        int a=0;
        int flag=0;
        cin>>n;
        int ara[n+3];
         for(int i =0 ; i<n;i++){
            cin>>ara[i];
            sum+=ara[i];
     
        }
        for(int i=0;i<n;i++){
           { if(ara[i]==-1 && ara[i+1]==-1)
            flag=1;}
            { if(ara[i]==-1)
             a=1;}
        }
        if(flag==1){
            sum-=(-2);
            sum+=2;
            cout<<sum<<endl;
        }
        else if(a==0)
       { sum-=4;
        cout<<sum<<endl;
        }
        else
        cout<<sum<<endl;
        
       
        
       
    }
}