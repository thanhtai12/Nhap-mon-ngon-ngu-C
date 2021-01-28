#include<stdio.h>
int main(){
  int a, b, c;
  int n;
  int max[n];
 printf("nh?p s? a:=");
 scanf("%d",&a);
 printf("nh?p s? b:=");
 scanf("%d",&b);
 printf("nh?p s? c:=");
 scanf("%d",&c);
  if(a>b&&a>c){
    printf("%d la phan tu lon nhat",a);
  }
   else if(b>a&&b>c){
    printf("%d la phan tu lon nhat",b);
  }else{
    printf("%d la phan tu lon nhat",c);
  }
   return 0;
}
