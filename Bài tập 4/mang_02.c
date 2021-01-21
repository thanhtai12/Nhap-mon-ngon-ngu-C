#include<stdio.h>
int main(){
  //khai bao bien
  int n=0,i;
  printf("nhap n =");
  scanf("%d",&n);
  //khai bao mang
  int a[100];
  for(i=0;i<n;i++){
    printf("a[%d]:",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    
    printf("%d",a[i]);

  }
  for(i=0;i<n;i++){
    int s=0;
    s=s+a[i];
    //hien thi tong
    printf("tong = %d",s);

  }
  return 0;
}
