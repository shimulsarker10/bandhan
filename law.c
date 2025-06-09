#include<stdio.h>
int main() {

   int n,gb,cal;

   printf("Select the data package:\n 1.Basic Package\n 2.Standard Package\n 3.Premium Package \n Enter your choice:");
   scanf("%d",&n);

   if(n==1){
    printf("Enter the number of GBs you want to use:");
    scanf("%d",&gb);
    cal=50*gb;
    printf("You selected the Basic Package.\n The total charge for your package is:%d",cal);
   }
   else if(n==2){
    printf("Enter the number of GBs you want to use:");
    scanf("%d",&gb);
    cal=100*gb;
    printf("You selected the Standard Package.\n The total charge for your package is:%d",cal);
   }
   else if(n==3){
    printf("Enter the number of GBs you want to use:");
    scanf("%d",&gb);
    cal=150*gb;
    printf("You selected the Premium Package.\n The total charge for your package is:%d",cal);
   }
   else{
    printf("Invalid package type selected.");
   }

 return 0;
}