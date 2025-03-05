#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if((num%2==0&&num%3==0)&&num%5!=0) {
        printf("A");

    }




    else if(num>=1&&num<200) {
        if(num==1*1||num==2*2||num==3*3||num==4*4||num==5*5||num==6*6||num==8*8||num==10*10||num==11*11||num==12*12||num==13*13||num==14*14){
            printf("D");
        }
        
            else if(num==2*11||num==3*7||num==3*11||num==5*7||num==5*11||num==7*11) {

               printf("B");


            }
        else if(num>=10&&num<=99&&(num%3==0||num%7==0)) {
            if(!(num%3==0&&num%7==0)) {
                printf("C");
            }
        
        }
    
    
    
        else {
            printf("E");
        }
    }
    else {
            printf("E");
        }

    



    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
