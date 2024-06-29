#include <unistd.h>
/**
 * _putchar - bir simvolu stdout-a çap edir
 * @c: çap olunacaq simvol
 *
 * Return: Uğurlu olarsa 1, səhv olarsa -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
