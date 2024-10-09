#include<stdio.h>
#include "midformula.h"

void mid(double x1, double x2, double y1, double y2){

    double twox = x1 + x2;
    double twoy = y1 + y2;
    double finishx =  twox / 2;
    double finishy =  twoy /2;
    
    printf("(%.lf, %.lf)", finishx, finishy);

}
