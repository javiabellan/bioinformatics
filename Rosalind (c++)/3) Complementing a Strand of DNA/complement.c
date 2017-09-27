/*
In DNA strings, symbols 'A' and 'T' are complements of each other,
as are 'C' and 'G'.
*/

#include <stdio.h>

long count_characters(FILE *);

int main()
{
	int c;
	FILE *file;

	file = fopen("rosalind_revc.txt", "r");

	if (file)
	{
		long cnt = count_characters(file);
		while(cnt)
		{
			c = fgetc(file);

			switch(c)
			{
				case 'A': putc('T', stdout); break;
				case 'C': putc('G', stdout); break;
				case 'G': putc('C', stdout); break;
				case 'T': putc('A', stdout); break;
			}
			fseek(file, -2L, 1);     // shifts the pointer to the previous character
			cnt--;
		}
		putc('\n', stdout);
		fclose(file);
	}
	
	return 0;
}


// count the total number of characters in the file that *f points to
long count_characters(FILE *f) 
{
	fseek(f, -1L, 2);  // makes the pointer to point at the last character of the file
	long last_pos = ftell(f); // returns the position of the last element of the file
	last_pos++;
	return last_pos;
}