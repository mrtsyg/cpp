#include <stdio.h>

int main(){
    unsigned long n1 = 0;
    unsigned long n2 = 1;
    unsigned long n3 = 0;

    for(size_t i = 0; i<50; i++){
        n3 = n1 + n2;
        printf("sum is %lu\n", n3);
        n1 = n2;
        n2 = n3;
    }
}