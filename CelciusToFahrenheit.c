#include<stdio.h>
float Celcius(int c);
int main(){
    int c;
    printf("Enter the temperature in celcius:");
    scanf("%d",&c);
    printf("temperatur%f",Celcius(c));
    return 0;
}



float Celcius(int c){
    float f; 
    f=(float)(c*9/5)+32;
    return f;
}