#include<stdio.h>
int main()
{
    //int a =30 * 1000 + 2768;
    short a =30 * 1000 + 2768;
    printf("%d", a);
    return 0;
}
// short have a limit from -32768 to +32767
// thats why we dont use short anymore common we rather use int
// long and long long data types can use for larger limit
// short -> 2 bytes = 16 bits
// 8 bits = 1 byte
// n bits -> 2 power n number
 