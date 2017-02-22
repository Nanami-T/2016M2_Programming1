#include <stdio.h>

int main(void){

int i, s, a, n;

printf("n = ");
 scanf("%d",&n);
 
for( i = 1; i <= n; i ++ ){
   for( s = 1; s <= n - i; s ++ ){
      printf(" ");
    }
   for( a = 1; a <= 2 * i; a ++ ){
      printf("*");
   }
  printf("\n");
}

return 0;

}
