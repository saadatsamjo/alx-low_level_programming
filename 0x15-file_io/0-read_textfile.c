#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char *buffer = (char *)malloc(letters + 1);  // +1 for the null terminator
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    size_t bytes_read = fread(buffer, 1, letters, file);
    if (bytes_read <= 0) {
        free(buffer);
        fclose(file);
        return 0;
    }

    buffer[bytes_read] = '\0';  // Null-terminate the string

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    free(buffer);
    fclose(file);

    if (bytes_written == (ssize_t)bytes_read) {
        return bytes_written;
    } else {
        return 0;
    }
}

int main() {
    const char *filename = "example.txt";
    size_t letters_to_read = 100;
    ssize_t bytes_read = read_textfile(filename, letters_to_read);

    if (bytes_read <= 0) {
        fprintf(stderr, "Error reading or printing the file.\n");
        return 1;
    }

    printf("\nTotal letters read and printed: %zd\n", bytes_read);
    return 0;
}
