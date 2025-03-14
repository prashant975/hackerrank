#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    

    if(n==0||n==3||n==4){
    
 
    if(n==0) {
        printf("Circle");
    }
    int a,b,c,d;
    int A,B,C,D;
    if(n==3) {
        scanf("%d %d %d ",&a,&b,&c);
        scanf("%d %d %d ",&A,&B,&C);
        if(a<=0||b<=0||c<=0) {
            printf("Invalid Figure");
            return 0;
        }
        if(A<=0||B<=0||C<=0|| A >= 180 || B >= 180 || C >= 180  ||A+B+C!=180) {
            printf("Invalid Figure");
            return 0;
        }

        if((a+b)>c&&(b+c)>a&&(a+c)>b) {
            if(a==b&&b==c){
            if(A==60&&B==60&&C==60){
            printf("Equilateral Triangle");
            }
            
            else{
              printf("Invalid Figure");
           }
            
        }
            else if(a==b||b==c||a==c){
                if(((a==b)&&(A==B)&&B!=C)||(b==c&&B==C&&B!=A)||((a==c)&&(A==C)&&A!=B)){
               
                    printf("Isosceles Triangle");
                
                
            }
                else{
                     printf("Invalid Figure");
                }
            }
            
            else if((a!=b)&&(b!=c)&&(c!=a)){
                if((A!=B)&&(B!=C)&&(C!=A)){
                    printf("Scalene Triangle");
            }
                else{
                    printf("Invalid Figure");
                }
            }


            else {
                printf("Invalid Figure");
            }
        }
        else {
            printf("Invalid Figure");
        }


    }




    else if(n==4) {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        scanf("%d %d %d %d",&A,&B,&C,&D);
        if(a<=0||b<=0||c<=0||d<=0) {
            printf("Invalid Figure");
            return 0;
        }
        if(A<=0||B<=0||C<=0||D<=0||A>=180||B>=180||C>=180|| D >= 180||A+B+C+D!=360) {
            printf("Invalid Figure");
            return 0;
        }

        if(a==b&&b==c&&c==d) {
            if(A==90&&B==90&&C==90&&D==90) {
                printf("Square");
            }
            else if((A==C&&B==D)&&(A!=90&&B!=90&&C!=90&&D!=90)) {
                printf("Rhombus");
            }
            else {
                printf("Invalid Figure");
            }

        }
        else if(a==c&&b==d) {
            if(A==90&&B==90&&C==90&&D==90) {
                printf("Rectangle");
            }
            else if(A==C&&B==D) {
                printf("Parallelogram");
            }
            else {
                printf("Invalid Figure");
            }
        }
        else {
            printf("Invalid Figure");
        }

    }
    }
    else{
            printf("Invalid Figure");
        }
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
