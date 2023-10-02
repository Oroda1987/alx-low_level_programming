#include "main.h"

/**
 *create_file - create a file
 *@filename: filename for a file to be created
 *@text_content: terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int n, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(n, text_content, len);

	if (n == -1 || w == -1)
		return (-1);

	close(n);

	return (1);


}
