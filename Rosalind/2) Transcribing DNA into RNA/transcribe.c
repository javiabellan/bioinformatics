/*
Given a DNA string, its transcribed RNA string
is formed by replacing all occurrences of 'T' with 'U'
*/

#include <stdio.h>

int main()
{
	int c;
	FILE *file;

	file = fopen("rosalind_rna.txt", "r");

	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			if (c=='T')
				putc('U', stdout);
			else
				putc(c, stdout);
		}
		fclose(file);
	}

	return 0;
}