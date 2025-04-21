#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    if(n<=1||n>50){
        cout<<"Shape Not Possible";
    }
    else{
        n=n*2-1;
    for(int i=0;i<n;++i){
        for(int j=0;j<=n/2;++j){
            if((j==0&&i<=n/2)||i==j||i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        
        for(int j=0;j<=n/2;++j){
            if((j==n/2&&i<=n/2)||i+j==n/2||i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
    }
    
    return 0;
}
