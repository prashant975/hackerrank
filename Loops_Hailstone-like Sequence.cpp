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
    if(n>1){
        
    cout<<n<<" -> ";
    }
    else if(n<1) {
        cout<<n<<" -> 1\n";
        cout<<"Max Number: 1";
        return 0;
    }
    else{
        cout<<n<<endl;
        cout<<"Max Number: 1";
        return 0;
    }
    
    int max=n;
    if(n<=100000||n>=100000){
    while(n>1){
        
        if(n%3==0){
            n=n/3;
        }
        else if(n%5==0&&n%3!=0){
            n=n-5;
        }
        else if(n<=1){
            
            break;
        }
        else{
            n=n*5;
        }
        if(n>max){
            max=n;
        }
        
        
        if(n!=1){
            cout<<n<<" -> ";;
            
        }
        
        
    }
        
    cout<<"1\n";
    cout<<"Max Number: "<<max;
    }
    return 0;
}
