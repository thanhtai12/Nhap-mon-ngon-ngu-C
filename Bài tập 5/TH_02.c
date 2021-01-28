  
#include<stdio.h>
int main(void){
  int n=123;
  int s=0;
  printf("nhap n\t");
  scanf("%d",&n);
    for(int i=1;i<n;i++){
      s=s+i;
    }
   printf("s=%d",s);
  return 0;
}
