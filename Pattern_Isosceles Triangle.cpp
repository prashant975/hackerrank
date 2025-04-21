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
    n=n*2-1;
    if(n<=1){
        cout<<"Shape Not Possible";
    }
    else{
        
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i+j>=n/2&&j-i<=n/2&&i<=n/2){
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
