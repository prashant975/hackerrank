#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    int rem=year%4;
    if(year>0){
        if((rem==0 && year % 100 != 0 )|| year%400==0)
        {
            printf("Yes, %d is a leap year.",year);
        }
        else{
            printf("No, %d is not a leap year.",year);
        }
    }
    else{
        printf("The given year %d is Invalid year.",year);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
