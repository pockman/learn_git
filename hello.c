#include <stdio.h>
int  mul(int a, int b) {
    return a * b;
}


int  add(int a, int b) {
    return a + b;
}

int main(int argc, char* argv[]) {
    printf("hello.\n");
    printf("%d\n", add(5,4));
    printf("%d\n", mul(5,4));

    return 0;
}
