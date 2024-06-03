#include <cs50.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
    FILE *src = fopen(argv[1], "rb");  // rb means read binary, how we want to access the file.
    FILE *dst = fopen(argv[2], "wb");
    // now let's copy one byte at a time
    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0) {
        // arguments here are (memory address we want to store it at, size of what we're writing in byes, how many bytes do we want to copy at a time, and where do I want read those bytes from? the source file)
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
}
