/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
    char a[] ="A4B1C3f3";
    int len = sizeof(a)-1;
    char word;
    int num;
    for (int i=0;i<len;i++) {
        if (i%2) {
            num = a[i]-48;
            for (int j=0;j<num;j++)
            printf ("%c",word);
        }else {
            word = a[i];
        }
    }
    return 0;
}
