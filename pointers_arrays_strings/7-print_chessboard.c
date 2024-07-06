#include "main.h"
/**
 * print_chessboard - şahmat taxtasını çap edir
 * @a: 8x8 ölçüsündə olan iki ölçülü array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
