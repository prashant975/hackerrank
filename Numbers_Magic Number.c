#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int N=n;
    while(n>9){
    int sum=0;
        while(n>0){
            
        sum=sum+n%10;
        n=n/10;
        }
        n=sum;
    }
    if(n==1){
         printf("%d is a magic number\n",N);
    }
   else{
       printf("%d is not a magic number\n",N);
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
