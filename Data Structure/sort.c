#include<stdio.h>
#include<stdlib.h>
int n, i, j;
int temp;
int main(){

   printf("Enter your size");
   scanf("%d",&n);
   int a[n];
   for (i=0;i<n;i++){
     scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++){
       int flag = 0;
      for(j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
           temp = a[j];
           a[j] = a[j+1];
           a[j+1] = temp;
           flag = 1;
        }
      }
      if (flag==0){
        break;
      }
   }

   for(i=0; i<n; i++){
     printf("%d\t",a[i]);
   }
   return 0;
}