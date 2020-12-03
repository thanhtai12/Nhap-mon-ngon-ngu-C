#include <stdio.h>

int main() {
  double CV, DT, R;
  //khai bao bien CT DT va R kieu double//
  R = 1.5;
  double PI = 3.14;
  //khai bao hang ten PI kieu double//
  //tinh chu vi dien tich hinh tron//
  CV = 2 * R * PI;
  DT = R * R * PI;
  printf("R: %0.1f\n",R);
  //R la chu vi hinh tron//
  printf("CV: %0.1f\n",CV);
  //CV la chu vi hinh tron//
  printf("DT: %0.1f",DT);
  //DT la dien tich hinh tron//
  return 0;
}
