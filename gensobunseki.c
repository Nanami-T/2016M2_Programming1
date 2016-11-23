// 2016.11.16

#include <stdio.h>

int main(void){

 double siryo, nisanka_tanso, issanka_nisuiso, c, h, o, x, y, z;

 printf("元素分析プログラムです\n");

 printf("試料 [mg] -> ");
 scanf("%lf",&siryo);

 printf("CO2 [mg] -> ");
 scanf("%lf",&nisanka_tanso);

 printf("H2O [mg] -> ");
 scanf("%lf",&issanka_nisuiso);


  c = ( nisanka_tanso * 12.0 ) / 44.0;
  h = ( issanka_nisuiso * 2.0 ) / 18.0;
  o = siryo - ( c + h );

   x = c / 12.0;
   y = h / 1.0;
   z = o / 16.0;

 printf("組成式 -> C%2.1lfH%2.1lfO%2.1lf\n",x,y,z);

return 0;

}
