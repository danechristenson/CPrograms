#include <stdio.h>
#include <errno.h>

#define BUFFERSIZE 256

int main(int argc, char *argv[])
{
	FILE *fileIn, *fileOut;
	char copyBuff[BUFFERSIZE];
	size_t in, out;

	if (argc != 3)
	{
		printf("Need more arguments");
		return 1;
	}

	fopen_s(&fileIn, argv[1], "rb");
	fopen_s(&fileOut, argv[2], "wb");

	while ((in = fread(copyBuff, 1, BUFFERSIZE, fileIn)) > 0)
	{
		out = fwrite(copyBuff, 1, in, fileOut);
		if (out != in)
		{
			perror("Something didn't match up. Fatal write error: ");
			return 2;
		}
	}

	fclose(fileIn);
	fclose(fileOut);
	return 0;
}