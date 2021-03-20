  
#include <stdio.h>

int main(void) {
  int n;
  printf("Nhap n = ");
  scanf("%d",&n);
  int tong = 0;
  for(int i ; i <= n; i++){
    if(n % i == 0){
      tong = tong + i;
        printf("%d la so hoan hao\n",n);
      } else {
        printf("%d la sao khong hoan hao\n",n);
      }
  }
  return 0;
}
