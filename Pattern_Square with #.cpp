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
    
    if(n<=2||n>50){
        cout<<"Shape Not Possible";
    }
    else{
        
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
    }
    return 0;
}
