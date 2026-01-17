#include <stdio.h>
#include <cs50.h>
int main()
 {
    string name = get_string("what's your name?\n");
    printf("Hello, %s\n", name);
 }
