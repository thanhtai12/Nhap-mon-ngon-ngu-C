  
#include<stdio.h>
int main(void){
  int n;
  int s=0;
  printf("nhap n\t");
  scanf("%d",&n);
    for(int a=1;a<=n;a++){
      s=s+a;
    }
   printf("s=%d",s);
  return 0;
}
