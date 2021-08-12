/* Second program from Jon Erickson's Hacking - The Art of Exploitation.
Note that when you compile this program it gives a format-security warning.
You can fix this by adding in the format parameter or by using puts instead. 
To match the book's output, remove the newline on line 24. */

#include <stdio.h>

int main()
{
    char str_a[20];
    str_a[0] = 'H';
    str_a[1] = 'e';
    str_a[2] = 'l';
    str_a[3] = 'l';
    str_a[4] = 'o';
    str_a[5] = ',';
    str_a[6] = ' ';
    str_a[7] = 'w';
    str_a[8] = 'o';
    str_a[9] = 'r';
    str_a[10] = 'l';
    str_a[11] = 'd';
    str_a[12] = '!';
    // str_a[13] = '\n'; no longer necessary
    str_a[13] = 0;
    puts(str_a);    // can also use printf("%s\n", str_a);
}