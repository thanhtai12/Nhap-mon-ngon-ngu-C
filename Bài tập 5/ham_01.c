//kh?i khai báo
#include<stdio.h>
int sum(int a,int b, int c);//khai báo hàm sum
//kh?i hàm main
int main(){
  int x, y, z;
  printf("x:=");
  scanf("%d",&x);
  printf("y:=");
  scanf("%d",&y);
  printf("z:=");
  scanf("%d",&z);
  printf("x + y + z:=%d",sum(x,y,z));//g?i hàm sum
  return 0;
}
//kh?i d?nh nghia hàm
int sum(int a, int b, int c){//d?nh nghia hàm sum
  return a + b + c;
}
