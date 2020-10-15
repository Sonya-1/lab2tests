#include "./lab2tests.h"
#include <stdio.h>

int main() {
    char str[256], sub[256];
    int len_str, len_sub, pos, counter = 0;
    char* cursor;

    printf("Input string: ");
    gets_s(str, 256);
    len_str = strlen(str, 256);

    if (len_str == 0) {
        printf("Empty string\n");
        return 0;
    }

    printf("Input model: ");
    gets_s(sub, 256);
    len_sub = strlen(sub, 256);

    if (len_sub == 0) {
        printf("No data\n");
        return 0;
    }

    cursor = str;

    for (;;) {

        pos = strstr(cursor, sub, len_str, len_sub);
        if (pos == -1) {
            if (counter == 0) {
                printf("Model not found\n");
            }
            break;
        }
        counter += 1;

        printf("Position: %d\n", cursor - str + pos);
        cursor += pos + len_sub;
    }
    return 0;
}
