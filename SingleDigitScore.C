#include <stdio.h>
int main() {
    int n;
    int sum=0,sum1=0,sum2=0;
    int mod;
    int divi;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    while(n!=0){
        mod=n%10;
        n=n/10;
        sum=sum+mod;
        
    }
    while(sum!=0){
        mod=sum%10;
        sum=sum/10;
        sum1=sum1+mod;
        
    }
    printf("The Single Digit Score is : %d",sum1);
    return 0;
}
