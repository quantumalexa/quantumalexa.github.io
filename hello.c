#include <stdio.h>
int main() {
    printf("hello lunch and learn!\n");
    char input;
    printf("type a string: ");
    scanf("%c ", &input);

    printf("%c\n", input);
    FILE *file = fopen("some_input.txt", "rb");
    if (!file) {
        printf("cannot open file\n");
        return 1;
    }
    while (!feof(file)) {
        char c = fgetc(file);
        if (c != EOF) { putchar(c); }
    }
    fclose(file);
    return 0;
}