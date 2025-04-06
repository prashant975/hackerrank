#include <stdio.h>

int main() {
    
    int n1;
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;++i){
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;++i){
        scanf("%d",&b[i]);
    }
    int c[n1+n2];
    int index=0 ,i=0,j=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            c[index++]=a[i++];
            
        }
        else{
        c[index++]=b[j++];
            
        }
    }
    while(i<n1){
        c[index++]=a[i++];
    }
    while(j<n2){
        c[index++]=b[j++];
    }
    
    for(int i=0;i<index;++i){
        printf("%d ",c[i]);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
