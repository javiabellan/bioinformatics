int main()
{
	FILE *file;

	file = fopen("seq.bin","wb");  // w for write, b for binary


	// repeat for all the sequence
	{
		// read 4 bases


		// generate btye
		char byte = 0b11010101;
		
		// write byte
		fwrite(&byte, 1, 1, file); //fwrite([pointer], [n bytes], [n elements], [into stream]);

	}

}