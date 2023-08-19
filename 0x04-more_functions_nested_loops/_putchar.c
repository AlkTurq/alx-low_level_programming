#include <unistd.h>
#include "main.h"

/**
 * _putchar - Entry point
 *
 * Description - writing 'word' to stdo
ut
 *
 * @word : printing out
 *
 * Return: On success 1
 */

int _putchar(char word)

{
        return (write(1, &word, 1));
}
