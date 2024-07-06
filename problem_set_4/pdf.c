#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[]) {
    string  filename = argv[1];
    FILE   *f = fopen(filename, "rb");
    uint8_t buffer[4];  // uint8_t is only a single byte big
    int     blocks_read = fread(buffer, 1, 4, f);

    for (int i = 0; i < 4; i++) {
        printf("%i\n", buffer[i]);  // prints 37, 80, 68, 70
    }
    printf("Blocks read: %i\n", blocks_read);
    fclose(f);
}