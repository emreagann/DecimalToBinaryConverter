#include <stdio.h>
long toBin(int);

int main() {
  long bno;
  int dno;
  printf("\n\n Function: convert decimal to binary: \n");
  printf("------------------------------\n");
  printf(" Input any decimal number : ");
  scanf("%d",&dno);
  bno = toBin(dno);
  printf("\n The binary value is: %ld\n\n",bno);
  return 0;
}
long toBin(int dno){
  long bno=0,remainder,f=1;
  do{
    remainder = dno % 2;
    bno += remainder * f;
    f *= 10;
    dno /= 2;
  }
  while(dno != 0);
  return bno;
}