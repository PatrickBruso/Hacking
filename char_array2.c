/* like program char_array.c, added a format parameter for the string variable.
Can also use puts instead of printf. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str_a[20];

    strcpy(str_a, "Hello, world!\n");
    printf("%s", str_a);          // Added format argument for string literal
}