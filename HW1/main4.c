/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a[] = "Hello";
    char change[6] = {};
    int b = 4;
    
    for (int i = 0; i < 5; i++) {
        change[i] = a[b - i];
    }

    printf("%s\n", change);
    return 0;
}
