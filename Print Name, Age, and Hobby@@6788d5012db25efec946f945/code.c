#include <stdio.h>

int main(void){
    int age; char name[50], hobby[50];
    scanf("%49s %d\n%49s", name, &age, hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby);
}