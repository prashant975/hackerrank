#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned n;
    scanf("%d",&n);
    
    if(n<=360){
        int x=n;
    if(x>=0&&x<90){
        printf("Acute Angle");
    }
    else if(x==90){
        printf("Right Angle");
    }
     else if(x>90&&x<180){
        printf("Obtuse Angle");
    }
    else if(x==180){
        printf("Straight Angle");
    }
    else if(x>180&&x<360){
        printf("Reflex Angle");
    }
    else if(x==360){
        printf("Full Rotation");
    }
    }
    
    else{
        int x=n%360;
            
            if(x>0&&x<90){
        printf("Acute Angle");
    }
    else if(x==90){
        printf("Right Angle");
    }
     else if(x>90&&x<180){
        printf("Obtuse Angle");
    }
    else if(x==180){
        printf("Straight Angle");
    }
    else if(x>180&&x<360){
        printf("Reflex Angle");
    }
    else if(x==0){
        printf("Full Rotation");
    }
    }
        
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
