#include <stdio.h>
#include <math.h> //数学関数用ヘッダファイル

int main(void){

double r,s,v,k;

printf("r[m] => ");
scanf("%lf",&r);

//  s = 4.0 * 3.14159 * r * r;
//  v = ( 4.0 * 3.14159 * r * r * r )/3.0;

 s = 4.0 * M_PI * pow(r,2.0);
 v = ( 4.0 * M_PI * pow(r,3.0) )/3;
 k = pow(r,(1.0/3.0)); // 分数にも.0

printf("球の表面積 S = %8.2lf [m^2]\n",s);
printf("球の体積   V = %8.2lf [m^3]\n",v);
printf("rの三乗根    = %8.2lf\n",k);

return 0;

}
