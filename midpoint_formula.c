#include <stdio.h>

int main(){

    double x1; //x1=
    double x2; //x2=
    double y1; //y1=
    double y2; //y2=
   
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

     
    double twox = x1 + x2;
    double twoy = y1 + y2;
    double finishx =  twox / 2;
    double finishy =  twoy /2;
    
    printf("(%.lf, %.lf)", finishx, finishy);

    return 0;
}
