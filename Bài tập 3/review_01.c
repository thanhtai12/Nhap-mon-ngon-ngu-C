#include<stdio.h>
int main(void){
//khai bao n
  int n;
  printf("nhap so can nhap");
  scanf("%d",&n);
  //neu n=1 hien thi one
  if(n==1){
    printf("one");
  }
  //neu n=2 hien thi two
  if(n==2){
    printf("two");
  //neu n=3 hien thi three
  }if(n==3){
    printf("three");
  //neu n=4 hien thi for
  }if(n==4){
    printf("for");
  //neu n=5 hien thi five
  }if(n==5){
    printf("five");
  //neu n=6 hien thi six
  }if(n==6){
    printf("six");
  //neu n=7 hien thi seven
  }if(n==7){
    printf("seven");
  //neu n=8 hien thi eight
  }if(n==8){
    printf("eight");
  //neu n=9 hien thi nine
  }if(n==9){
    printf("nine");
  //neu n khong phai 9 hien thi greater than 9
  }if(n>9){
    printf("greater than 9");
  }
  return 0;
}
