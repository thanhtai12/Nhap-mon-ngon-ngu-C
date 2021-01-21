#include <stdio.h>

int main(void) {
  int i;
  int n;
  printf("nhap n=");
  scanf("%d",&n);
  //khai bao mang
  int a[100]={n} ;
  for(i=1;i==n;i++){

    scanf("%d ",&i);
  }
  for(i=1;i<n;i++){
  //hien thi mang ra man hinh
  printf("%d\t",a[i]);
  }
  //khai bao bien tong
  int tong;
  tong= tong +a[i];
  //hien thi tong cua mang
  printf("%d",tong);
  
  //chay 
  return 0;
}
