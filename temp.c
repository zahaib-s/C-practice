#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int secondMaximum(int a,int b, int c){
    if(a==b&&b==c) return -1;
    if (a>b){
        a = a^b;
        b = a^b;
        a = a^b;
    }
    if(b>c){
        b = b^c;
        c = b^c;
        b = b^c;
    }
    if(a>b){
        a = a^b;
        b = a^b;
        a = a^b;
    }
return b; 
}
int main() {

    int a=5,b=5,c=3;
   printf("%d", secondMaximum(a,b,c));
    return 0;
}
