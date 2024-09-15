#include <stdio.h>
#include <math.h>

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

    double twox = x2 - x1;
    double twoy = y2 - y1;
    int resultx = twox * twox;
    int resulty = twoy * twoy;
    int add = resultx + resulty;


    if (add < 0) {
        printf("Error");
    } else {
        double finish = sqrt(add);
        if (finish != (int)(finish)) {
             printf("√%d", add);
        } else {
            printf("%d", (int)finish); 
    }
}
    return 0;
}


// TO DO 
// - Handle scanf error
// - Handle negative numbers
