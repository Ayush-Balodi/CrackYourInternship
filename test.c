#include<stdio.h>

void truncate( float x ){
    int n=4;
    while( n -- ){
        x = x*10;
    }
    int res = (int)x;
    x = (float)res/10000;
    printf("%.4f\n",x);
    return;
}

void roundoff( float x ){

    int n=4+1;
    while( n -- ){
        x = x*10;//12764889
    }
    int res = (int)x;
    if( res%10 >=5 ){
        res = res/10;
        res++;
    }
    x = (float)res/10000;
    printf("%.4f\n",x);
}

int main (){
    float x = 12.76489235; 

    printf("%f\n",x);
    truncate( x );
    roundoff( x );
    return 0;
}