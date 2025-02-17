#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("samplefile.txt","r");
fputs("hello",fp);
return 0;
}
