//khối khai báo
#include<stdio.h>
int sum(int a,int b, int c);//khai báo hàm sum
//khối hàm main
int main(){
  int x, y, z;
  sum(x, y, z);
  printf("x:=");
  scanf("%d",&x);
  printf("y:=");
  scanf("%d",&y);
  printf("z:=");
  scanf("%d",&z);
  printf("x + y + z:=%d",sum(x,y,z));//gọi hàm sum
 return 0;
}
//khối định nghĩa hàm
int sum(int a,int b, int c){
 int s= a+b+c;
 return 1;
}
void sum(int a,int b, int c);//khai báo hàm sum
//khối hàm main
int main(){
  int x, y, z;
  sum(x, y, z);
  printf("x:=");
  scanf("%d",&x);
  printf("y:=");
  scanf("%d",&y);
  printf("z:=");
  scanf("%d",&z);
  printf("x + y + z:=%d",sum(x,y,z));//gọi hàm sum
//khối định nghĩa hàm
}
void sum(int a,int b, int c){
 int s= a+b+c;
 
}
