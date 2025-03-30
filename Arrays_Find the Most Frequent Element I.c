#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
      scanf("%d",&a[i]);
    }
    int freq[1001]={0};
    int mfe=a[0];
    int maxf=0;
    for(int i=0;i<n;++i){
        freq[a[i]]++;
       
    }
    
    for(int i=0;i<n;++i){
        if(freq[a[i]]>maxf){
            mfe=a[i];
            maxf=freq[a[i]];
        }
       
    }
    
 
    
    

        
  
    printf("%d",mfe);
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
