#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    
    
    a =a ^b;
    b =a ^b;
    a =a ^b;
    printf("%d\n",a);
    printf("%d",b);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
