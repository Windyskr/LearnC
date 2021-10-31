#include <stdio.h>
int main() {
    char c;
    c = getchar();
    if (c != '\n') {
        c = c + 4;
        printf("%c", c);
        }
     else {
        printf("%c", c);
    }
}