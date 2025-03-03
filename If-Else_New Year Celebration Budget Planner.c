#include <stdio.h>

int main() {
    int budget;
    scanf("%d",&budget);
    int numguest;
    scanf("%d",&numguest);
    int fcpg;
    scanf("%d",&fcpg);
    int dc;
    scanf("%d",&dc);
    int mc;
    scanf("%d",&mc);
    int ee;
    scanf("%d",&ee);


    

    if(numguest>25&&numguest<=50){
        int tc=(fcpg*numguest)+dc+mc+ee;
        int tfc=numguest*fcpg;
        if(budget>=1&&tc<=budget&&(numguest<=50)&&((dc>=1&&dc<0.3*budget)||(tfc<0.5*budget))&&mc>=1&&fcpg>=1&&ee>=1) {
            printf("Celebration Approved");
        }
        else {
            printf("Celebration Denied");
        }

    }
    else if(numguest>5&&numguest<=25){
        int tc=(fcpg*numguest)+dc+mc+ee;
        int tfc=numguest*fcpg;
        if(budget>=1&&tc<=budget&&(numguest>=1&&numguest<=50)&&((dc>=1&&dc<0.3*budget)||(tfc<0.5*budget))&&fcpg>=1&&ee>=1&&mc>=0) {
            printf("Celebration Approved");
        }
        else {
            printf("Celebration Denied");

        }
        
    }
    else{
            printf("Celebration Denied");

        }







    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
