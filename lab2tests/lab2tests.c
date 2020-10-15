#include <stdio.h>

int strlen(char* str, int max_len) {
    int i;
    for (i = 0; i < max_len; i++) {
        if (str[i] == '\0') {
            break;
        }
    }
    return i;
}

int strcomp(char* a, char* b, int len) {
    int i;
    for (i = 0; i < len; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int strstr(char* str, char* sub, int strlen, int sublen) {
    int i;
    for (i = 0; i <= strlen - sublen; i++) {
        if (1 == strcomp(str + i, sub, sublen)) {
            return i;
        }
    }
    return -1;
}