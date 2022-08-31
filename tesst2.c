#include<stdio.h>
#include<math.h>

int main(){

    int x;
    printf("Enter the number : ");
    scanf("%d",&x);

    int fx;
    for( int i=-5 ; i<=5 ; i++ ){
        fx = pow(i,4)-4*i-9;
    }
    return 0;
}