#include <stdio.h>

int main(void){
    int x,y; scanf("%d %d" &x, &y);
    (x > 0 && y > 0 || y < 0 && x < 0 || x == y) printf("Same Sign") : printf("Different Sign"); 
}