#include <stdio.h>
#include <math.h>


int main(void){

    double f1, f2, f3, deg, rad;

    printf("合力を計算します\nF1 [ N ] = ");
     scanf("%lf",&f1);
    printf("F2 [ N ] = ");
     scanf("%lf",&f2);
    printf("θ [ deg ] = ");
     scanf("%lf",&deg);

    rad = M_PI / ( 180.0 / deg );

    f3 = sqrt( pow((f1 * cos(rad) + f2),2.0) + pow((f1 * sin(rad)),2.0) );

    printf("F1,F2の合力,F3 [ N ] = %3.2lf",f3);

    return 0;
}
