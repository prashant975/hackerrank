#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    int sum=0;
    int num=2;
    while(count<n){
        int isPrime=1;
        if(num==2){
            isPrime=1;
        }
        else if(num%2==0){
            isPrime=0;
        }
        else{
            int limit=sqrt(num);
            for(int i=3;i<=limit;++i){
                if(num%i==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime){
            sum=sum+num;
            count++;
        }
        num++;
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
