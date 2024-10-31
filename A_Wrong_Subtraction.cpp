#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int x,a,n,ans=0;
    cin>>a>>n;
    
    for(int i = 0 ; i < n ; i++){
        x = a % 10 ;
        if(x>0){
            a--;
        }
        else if (x==0)
        a/=10;
    }
    cout<<a<<endl;
}