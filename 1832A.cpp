#include<iostream>
#include<string>

using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int flag=1;
        int count=1;
        for(int i = 1 ; i<a.size();i++){
            if((a.size()>3)&&(a[0]!=a[i])){
            
                count++;
                if(count>2){
                     cout<<"YES"<<endl;
                    flag=0;
                    break;
                }
               

             

        }

        }
        
        // for(int i=2;i<a.size();i++){
        //  if((a[i]==a[i+1])&&a[i+1]!=a[i+2]){
        //      cout<<"YES"<<endl;
        //      flag=0;
        // }
        // }
       
       if(flag==1)
         cout<<"NO"<<endl;
    }
}
