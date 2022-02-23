#include<stdio.h>
int strln(char *st){
    char *ptr=st;
    int len=0;
    while(*ptr!='\0'){
     len++;
     ptr++;
    }
    return len;
}
void main(){
    char st[]="Shivam";
   int l=strln(st);
   printf("The length of the string is:%d",l);
}