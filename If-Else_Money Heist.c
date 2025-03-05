#include <stdio.h>

int main() {
    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    scanf("%d %d %d %d %d %d %d %d %d %d ",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    int a0,b0;
    scanf("%d %d ",&a0,&b0);
    int a1,b1;
    scanf("%d %d ",&a1,&b1);
    int a2,b2;
    scanf("%d %d ",&a2,&b2);
    
    if(a0==0){n0 =(n0+b0)%10;}
    if(a0==1){n1 =(n1+b0)%10;}
    if(a0==2){n2 =(n2+b0)%10;}
    if(a0==3){n3 =(n3+b0)%10;}
    if(a0==4){n4 =(n4+b0)%10;}
    if(a0==5){n5 =(n5+b0)%10;}
    if(a0==6){n6 =(n6+b0)%10;}
    if(a0==7){n7 =(n7+b0)%10;}
    if(a0==8){n8 =(n8+b0)%10;}
    if(a0==9){n9 =(n9+b0)%10;}

    if(a2==0){n0 =(n0+b2)%10;}
    if(a2==1){n1 =(n1+b2)%10;}
    if(a2==2){n2 =(n2+b2)%10;}
    if(a2==3){n3 =(n3+b2)%10;}
    if(a2==4){n4 =(n4+b2)%10;}
    if(a2==5){n5 =(n5+b2)%10;}
    if(a2==6){n6 =(n6+b2)%10;}
    if(a2==7){n7 =(n7+b2)%10;}
    if(a2==8){n8 =(n8+b2)%10;}
    if(a2==9){n9 =(n9+b2)%10;}
     
    if(a1==0){n0 =(n0+b1)%10;}
    if(a1==1){n1 =(n1+b1)%10;}
    if(a1==2){n2 =(n2+b1)%10;}
    if(a1==3){n3 =(n3+b1)%10;}
    if(a1==4){n4 =(n4+b1)%10;}
    if(a1==5){n5 =(n5+b1)%10;}
    if(a1==6){n6 =(n6+b1)%10;}
    if(a1==7){n7 =(n7+b1)%10;}
    if(a1==8){n8 =(n8+b1)%10;}
    if(a1==9){n9 =(n9+b1)%10;}
    
    printf("%d %d %d %d %d %d %d %d %d %d ",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
