#include <stdio.h>

int main()
{
	int A=0, C=0, G=0, T=0;
	int c;
	FILE *file;

	file = fopen("rosalind_dna.txt", "r");

	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			switch(c)
			{
				case 'A': A++; break;
				case 'C': C++; break;
				case 'G': G++; break;
				case 'T': T++; break;
			}
		}
		fclose(file);
	}

	printf("%i %i %i %i\n", A, C, G, T);

	return 0;
}