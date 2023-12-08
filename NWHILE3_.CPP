#include<stdio.h>
int main(){

int n,first=0,second=1,next,i;

printf(" enter the number of terms:");
scanf("%d",&n);

printf(" fibonacci series up to %d terms:\n",n);


i=1;
printf("%d,%d,",first,second);

while(i<=n-2){
next=first+second;
printf("%d",next);


 first=second;
 second=next;

 i++;
 }
 return 0;
 }