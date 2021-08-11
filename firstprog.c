/* First program from Jon Erickson's Hacking - The Art of Exploitation (2nd Ed.).
Note that the program originally contained a newline (\n) on line 13 (puts("Hello, world!\n")).
This caused an output that had a line between each iteration of Hello, world! in the console.
I have removed this newline so that the output matches the book's output.
This would seem to be an error in the book as puts automatically adds a newline while 
printf does not. */

#include <stdio.h>

int main()
{
    int i;
    for(i=0; i < 10; i++)           // Loop 10 times.
    {
        puts("Hello, world!");    // Put the string to the output.
    }
    return 0;                       // Tell OS the program exited without errors.
}