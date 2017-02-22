#include <stdio.h>

int main(void){

 int month;
 int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31 }

 printf("月を入力してください => ");
  scanf("%d",&month);

 printf("%d 月は %d 日あります\n",month, days[ month ]);

return 0;

}
