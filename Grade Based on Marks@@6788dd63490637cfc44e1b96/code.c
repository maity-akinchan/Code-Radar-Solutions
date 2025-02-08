#include <stdio.h>

int main(void){
    int marks; scanf("%d", &marks);
    if (marks >= 95) printf("A");
    else if (marks >= 80) printf("B");
    else if (marks >= 70) printf("C");
    else if (marks >= 60) printf("D");
    else printf("F");
}