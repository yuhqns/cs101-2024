/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void change(int n) {
    if (n >= 10 && n <= 15)
        printf("%c", 'A' + n - 10);
    else
        printf("%d", n);
}

int binaryToDecimal(char binary[]) {
    int num = 0;
    for (int i = 0; i < 8; i++) {
        num = num * 2 + (binary[i] - '0');
    }
    return num;
}

int main() {
    char a[] = "10001111";
    
    int num_a = binaryToDecimal(a);

    change(num_a >> 4);
    change(num_a & 0xF);

    printf("\n");
    
    return 0;
}
