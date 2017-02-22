#include <stdio.h>
#include <math.h>

int main(void){ 
double n, i = 1.0, b;

printf("n = ");
 scanf("%lf",&n);
 
 b = sqrt( n );
 
 // while( 1 ){
 //  i = i + 1.0;
 //  if( i > b || fmod(  n , i ) == 0 ) break;
 // } 
 
 do{
  i = i + 1.0;
 }while( i < b && fmod( n , i ) != 0 );
 
 if( i > b ) printf("素数です\n");
 else        printf("素数ではありません\n")
 
 ;return 0
 
 }
