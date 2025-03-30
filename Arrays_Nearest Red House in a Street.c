#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
        
    }
    float b[n];
    for(int i=0;i<n;++i){
        b[i]=INFINITY;
    }
    
    for(int i=0;i<n;++i){
        if(a[i]==1){
            b[i]=0;
        }
        else if(i>0&&b[i-1]!=INFINITY&&a[i]!=-1){
            float dis;
            if(a[i]==2){
                dis=0.5;
            }
            else{
                dis=1;
            }
            if(b[i]>b[i-1]+dis){
                b[i]=b[i-1]+dis;
            }
        }
    }
    for(int i=n-1;i>=0;--i){
        if(a[i]==1){
            b[i]=0;
        }
        else if(i<n-1&&b[i+1]!=INFINITY&&a[i]!=-1){
            float dis;
            if(a[i]==2){
                dis=0.5;
            }
            else {
                dis=1;
            }
            if(b[i]>b[i+1]+dis){
                b[i]=b[i+1]+dis;
            }
            
        }
    }
    for(int i=0;i<n;++i){
        if(b[i]==INFINITY){
            b[i]=-1;
        }
    }
    
    for(int i=0;i<n;++i){
        
    printf("%.1f ",b[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
