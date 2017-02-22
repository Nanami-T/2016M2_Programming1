#include <stdio.h>
#include <math.h>

int main(void){

double i, h, w, rad, deg, s;

printf("直角三角形の斜辺[ m ] => ");
 scanf("%lf",&l);
 
prinf("角度θ[ deg ] => ");
 scanf("%lf",&deg);

rad = ( M_PI / ( 180.0 / deg ) );

  h = l * sin( rad );
  w = l * cos( rad );
  s = h * w / 2.0;

printf("高さ h [ m ]   => %8.3lf\n",h);
printf("底辺 w [ m ]   => %8.3lf\n",w);
printf("面積 S [ m^2 ] => %8.3lf\n",s);

return 0;

}
