#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest number is : %d",a);
        }
            else {
                printf("The largest number is : %d",c);
                
            }
            
    }
        else if(b>c){
            printf("The largest number is : %d",b);
        }
    else {
        printf("The largest number is : %d",c);
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}