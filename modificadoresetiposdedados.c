#include <stdio.h>
 int main (){
   int king= 3000000000;
    printf("king; %d\n", king);
    king= (long) 3000000000;
    printf("king; %ld\n", king);
   king=(long long) 3000000000;
    printf("king; %lld\n", king);
 }