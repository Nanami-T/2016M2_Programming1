#include <stdio.h>
#include <math.h>

int main(void){

 printf("a , b => ");
  scanf("%d %d",&a, &b);
  
 if( a > b ){
   m = a;
   n = b;
 }else{
   m = b;
   n = a;
 }
 
// while( m % n != 0 ){
//  d = m % n;
//  m = n;
//  n = d;
// }
 
 do{
   d = m % n;
   m = n;
   n = d;
   }while( m % n != 0);

 printf("%d と %d の最大公約数は %d です\n",a, b, m);

return 0;

}
