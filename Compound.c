#include<stdio.h>
#include<math.h>
int main(){
    float p,t,r,A;
    printf("Enter amount of principle:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%f",&t);
    A=p*(pow(1+(r/100),t));
    printf("Compound Interest A=%f",A);
    return 0;
}