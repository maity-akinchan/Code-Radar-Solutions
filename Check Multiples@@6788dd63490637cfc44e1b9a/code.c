#include <stdio.h>
#include <unistd.h>

int main(void){
    int x,y; scanf("%d %d", &x, &y);
    if (x % y == 0)
        write(1, "Yes\n", 4);
    else
        write(1, "No\n", 3);
}