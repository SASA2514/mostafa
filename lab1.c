#include <stdio.h>

void print_name(char name[]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%s\n", name);
    }
}

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    print_name(name);
    return 0;
}
