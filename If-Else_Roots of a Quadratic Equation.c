#include <stdio.h>
#include <math.h>

int main() {

    float a;
    scanf("%f",&a);
    int b;
    scanf("%d",&b);
    float c;
    scanf("%f",&c);
double D, root1, root2, real_part, imaginary_part; 
    D=b*b-(4*a*c);

    if(D>0){
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2 * a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
        printf("Type: Real and Distinct");
    } 
    else if(D==0){
        root1=root2=-b/(2 * a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
        printf("Type: Real and Equal");
    } 
    else{
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-D)/(2 * a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n", real_part, imaginary_part, real_part, imaginary_part);
        printf("Type: Complex");
    }

    return 0;
}
