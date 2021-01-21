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
 int tongchan;
 
 for(int i=0;i<n;i++){
   if(a[i]%2==0){
       tongchan=tongchan+a[i];
 }
 }
       printf("\ntongchan=%d",tongchan);
 int tongle;
 for(int i=0;i<n;i++){
   if(a[i]%2!=0){
     tongle=tongle+a[i];
   }
 }
 printf("\ntongle=%d",tongle);
 int dem_chan=0;
 a[0]=1;
 a[1]=2;
 a[2]=3;
 a[3]=4;
 for(int i=0;i<n;i++){
    if(a[i]%2==0&&a[i]!=0){
      dem_chan=dem_chan+1;
 }
 }
 printf("\ndem cac so chan\t%d",dem_chan);
 int dem_le=0;
 a[0]=1;
 a[1]=2;
 a[2]=3;
 a[3]=4;
 for(int i=0;i<n;i++){
   if(a[i]%2!=0&&a[i]!=0){
     dem_le=dem_le+1;
   }
 }
 printf("\ndem cac so le\t%d",dem_le);
 return 0;
}
