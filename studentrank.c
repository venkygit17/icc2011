#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s;
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
