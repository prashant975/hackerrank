#include <stdio.h>
#include <string.h>

int main() {
    int month;
    scanf("%d",&month);
    int year;
    scanf("%d",&year);
     
    
    if((month>=1)&&(month<=12)) {
    if(year>=1)
    {    
            switch(month)
            {
            case 1: {
                printf("31");
                break;
            }
            case 2: {
                if((year%4==0&& year % 100 != 0 )|| year%400==0) {
                    printf("29");
                }
                else {
                    printf("28");
                }
                break;
            }
            case 3: {
                printf("31");
                break;
            }
            case 4: {
                printf("30");
                break;
            }
            case 5: {
                printf("31");
                break;
            }
            case 6: {
                printf("30");
                break;
            }
            case 7: {
                printf("31");
                break;
            }
            case 8: {
                printf("31");
                break;
            }
            case 9: {
                printf("30");
                break;
            }
            case 10: {
                printf("31");
                break;
            }
            case 11: {
                printf("30");
                break;
            }
            case 12: {
                printf("31");
                break;
            }
            }

        }
        else {
    printf("Invalid Year");
  return 0;
}
  
    
}
    else {
        
            printf("Invalid Month\n");
        
          
        }
    if(year<=0)
    {
         printf("Invalid Year");
    }
    
    
  



/* Enter your code here. Read input from STDIN. Print output to STDOUT */
return 0;
}
