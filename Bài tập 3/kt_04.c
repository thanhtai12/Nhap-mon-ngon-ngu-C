
#include<stdio.h>
int main(void){
  int n=123;
  int s=0;
  printf("nhap n\t");
  scanf("%d",&n);
  
    for(int i=1;n>0;i++){
      int so=n%10;
      n=n/10;
      s=s+so;
      printf("s=%d",s);
    }
  
  return 0;
}
