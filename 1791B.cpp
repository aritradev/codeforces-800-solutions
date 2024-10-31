#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        int y=0;
        int flag=1;
        for(int i =0 ; i<n;i++){
            if(s[i]=='R'){
                x+=1;
            }
            else if(s[i]=='L'){
                x-=1;
            }
            else if(s[i]=='U'){
                y+=1;
            }
            else if(s[i]=='D'){
                y-=1;
            }

            if((x==1)&&(y==1)){
                cout<<"YES"<<endl;
                flag=0;
                break;

            }


        }
        if(flag==1)
        cout<<"NO"<<endl;
    }
}