#include<stdio.h>
int main(){
  int n;//kich thuoc mang a
  printf("nhap n=");
  scanf("%d",&n);
  int a[n];
 for(int i=0;i<n;i++){
   printf("nhap a[%d]",i);
   scanf("%d",&a[i]);
 }
 printf("mang a:");
 for(int i=0;i<n;i++){
   printf("%d\t",a[i]);
 }
 int s;
 for(int i=0;i<n;i++){
       s=s+a[i];
 }
       printf("tong=%d",s);
 
 return 0;
}
