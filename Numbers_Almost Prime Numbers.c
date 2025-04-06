#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int ampfc=0;
    for(int i=2;i<=n;++i){
        int pfc=0;
        int num=i;
        while(num%2==0){
            pfc++;
            num=num/2;
        }
        for(int j=3;j<=sqrt(num);j+=2){
            while(num%j==0){
                pfc++;
                num=num/j;
            }
        }
        if(num>2){
            pfc++;
        }
        if(pfc==2){
            ampfc++;
        }
    }

    printf("%d",ampfc);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
