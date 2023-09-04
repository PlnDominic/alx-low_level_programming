#include "main.h"
#include <stdlib.h>
#include <unistd.h> // Include for open, read, write, and close functions
#include <fcntl.h>  // Include for file control options

/**
 * read_and_print_textfile - Read text from a file and print it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read and printed.
 * Return: The actual number of bytes read and printed, or 0 on failure or if filename is NULL.
 */
ssize_t read_and_print_textfile(const char *filename, size_t letters)
{
    char *buffer;
    int file_descriptor;
    ssize_t bytes_read;
    ssize_t bytes_written;

    // Open the file for reading
    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return (0);

    // Allocate memory for a buffer to store the read data
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(file_descriptor);
        return (0);
    }

    // Read data from the file into the buffer
    bytes_read = read(file_descriptor, buffer, letters);

    // Write the read data to STDOUT
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    // Free the allocated memory and close the file
    free(buffer);
    close(file_descriptor);

    return (bytes_written);
}
