#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num<=0){
        printf("The verdict for the number %d is: INVALID",num);
    }
    else{
    if((num%2==0&&num>10)&&(num%3==0&&num>15)&&num%7==0){
        printf("The verdict for the number %d is: SUPERNATURAL",num);
    }
    else if(!(num%2==0&&num>10)&&(num%3==0&&num>15)&&num%7==0){
        printf("The verdict for the number %d is: MIRACULOUS",num);
    }
    else if((num%2==0&&num>10)&&!(num%3==0&&num>15)&&num%7==0){
        printf("The verdict for the number %d is: MIRACULOUS",num);
    }
    else if((num%2==0&&num>10)&&(num%3==0&&num>15)&&!(num%7==0)){
        printf("The verdict for the number %d is: MIRACULOUS",num);
    }
    else if(!(num%2==0&&num>10)&&!(num%3==0&&num>15)&&num%7==0){
        printf("The verdict for the number %d is: MAGICAL",num);
    }
    else if((num%2==0&&num>10)&&!(num%3==0&&num>15)&&!(num%7==0)){
        printf("The verdict for the number %d is: MAGICAL",num);
    }
    else if(!(num%2==0&&num>10)&&(num%3==0&&num>15)&&!(num%7==0)){
        printf("The verdict for the number %d is: MAGICAL",num);
    }
    else if(!(num%2==0&&num>10)&&!(num%3==0&&num>15)&&!(num%7==0)){
        printf("The verdict for the number %d is: NORMAL",num);
    }
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
