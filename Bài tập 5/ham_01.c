//kh?i khai b�o
#include<stdio.h>
int sum(int a,int b, int c);//khai b�o h�m sum
//kh?i h�m main
int main(){
  int x, y, z;
  printf("x:=");
  scanf("%d",&x);
  printf("y:=");
  scanf("%d",&y);
  printf("z:=");
  scanf("%d",&z);
  printf("x + y + z:=%d",sum(x,y,z));//g?i h�m sum
  return 0;
}
//kh?i d?nh nghia h�m
int sum(int a, int b, int c){//d?nh nghia h�m sum
  return a + b + c;
}
