#include<stdio.h>
void main(){
    char c;
    printf("Enter the alphabate:");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("%c is vowel",c);
    } else
    {
      printf("%c is consonant",c);
    }
    
}