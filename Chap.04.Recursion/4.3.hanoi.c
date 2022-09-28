#include <stdio.h>

void hanoi(int n, char from, char by, char to)
{
    if (n > 0) {
        hanoi(n - 1, from, to, by);
        printf("%c -> %c\n", from, to);
        hanoi(n - 1, by, from, to);
    }
}

int main()
{
    hanoi(3, 'A', 'B', 'C');
}