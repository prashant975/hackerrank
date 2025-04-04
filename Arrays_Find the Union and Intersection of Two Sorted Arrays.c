#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;++i){
        scanf("%d",&b[i]);
    }
    
    int i=0,j=0;
    int ur[200000];
    int ir[100000];
    int u_s=0,i_s=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            if(u_s==0||ur[u_s-1]!=a[i]){
                ur[u_s++]=a[i];
            }
            i++;
        }
        else if(a[i]>b[j]){
            if(u_s==0||ur[u_s-1]!=b[j]){
                ur[u_s++]=b[j];
            }
            j++;
        }
        else{
            if(u_s==0||ur[u_s-1]!=a[i]){
                ur[u_s++]=a[i];
            }
            if(i_s==0||ir[i_s-1]!=a[i]){
                ir[i_s++]=a[i];
            }
            i++;
            j++;
        }
    }
    while(i<n){
        if(u_s==0||ur[u_s-1]!=a[i]){
                ur[u_s++]=a[i];
            }
        i++;
    }
    while(j<m){
        if(u_s==0||ur[u_s-1]!=b[j]){
                ur[u_s++]=b[j];
            }
            j++;
    }
    for(int k=0;k<u_s;k++){
        printf("%d ",ur[k]);
    }
    printf("\n");
    
    if(i_s==0){
        printf("Intersection Not Possible\n");
    }
    else{
        for (int k = 0; k < i_s; k++) {
            printf("%d ", ir[k]);
        }
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
