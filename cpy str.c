#include<stdio.h>
#include<string.h>
int main(){
    int i;
char a[45];
char b[45];
printf("enter the name:");
scanf("%s",&a);
int n=strlen(a);
printf("length:%d\n",n);
for(i=0;i<n;i++){
b[i]=a[i];
printf("%c",b[i]);}
return 0;
}
