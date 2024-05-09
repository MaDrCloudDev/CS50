#include <cs50.h>
#include <stdio.h>

// int main(void) {
// 	string answer = get_string("What's your name? ");
// 	printf("Hello, %s\n", answer);
// }

// how about using a command-line argument?
// int main(int argc, string argv[]) {
// 	printf("Hello, %s\n", argv[1]);
// }

// but how do we enforce that an index that doesn't exist in argv isn't printed?
// int main(int argc, string argv[]) {
// 	if (argc == 2) {
// 		printf("Hello, %s\n", argv[1]);
// 	} else {
// 		printf("Hello, World\n");
// 	}
// }

// what if there's no fixed length of the user's input?
int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
