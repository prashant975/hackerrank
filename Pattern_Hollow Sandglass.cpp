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
    
    
    if(n<=1||n>100){
        cout<<"Shape Not Possible";
    }
    
    else{
       n=n*2-1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
        
            if(i==j||i+j==n-1||(j%2==0&&i==0)||(j%2==0&&i==n-1)){
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
