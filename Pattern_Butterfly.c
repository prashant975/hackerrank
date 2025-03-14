#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
    {
        int n;
        scanf("%d",&n);
         n=n*2-1;
        if(n>1&&n%2!=0&&n<=100){
            
        for(int i=0; i<=n-1; ++i)
        {

            for(int j=0; j<=n; ++j)
            {    if(j==0||j==n||((i==j)&&(i<=n/2))||(i>j&&(i+j<=n-1))||((j-i>=1)&&(j>n/2)&&i>n/2)||((i+j>=n)&&(i<=n/2)))
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
            }
    else{
        printf("Shape Not Possible");
    }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        return 0;
    }
