#include<stdio.h>
int main()
{int b,a[10],i;
printf("enter the no.of elements:");
scanf("%d",&b);
printf("enter the array elements:");
for(i=0;i<=b;i++){
scanf("%d",&a[i]);
printf("%d\t\n%d\t",i,a[i]);}
return 0;
}
