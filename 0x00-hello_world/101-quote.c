#include <stdio.h>

int main(void)
{
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const unsigned int message_length = sizeof(message) - 1;

    if (fprintf(stderr, "%s", message) < message_length) {
        return 1;
    }

    return 0;
}

