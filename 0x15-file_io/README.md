# C File I/O README

This README provides a comprehensive overview of File Input/Output (I/O) operations in the C programming language. It covers functions like `open`, `close`, `read`, `write`, and `dprintf` that are commonly used for handling files in C programs.

## Table of Contents

1. **Introduction**
2. **File Handling Basics**
3. **Opening a File**
4. **Closing a File**
5. **Reading from a File**
6. **Writing to a File**
7. **Formatted Output with `dprintf`**
8. **Conclusion**

## 1. Introduction

File I/O is essential for reading and writing data to and from files in C programs. These operations are commonly used to interact with text files, binary files, and devices like serial ports. In this guide, we'll cover the fundamental file I/O operations using the standard C library functions.

## 2. File Handling Basics

Before you can perform file I/O, you need to include the necessary headers:

```c
#include <stdio.h>  // for standard I/O functions
#include <stdlib.h> // for exit() function
#include <fcntl.h>  // for open() function
#include <unistd.h> // for read() and write() functions

## 3. Opening a file
int file_descriptor = open("file.txt", O_RDONLY);
if (file_descriptor == -1) {
    perror("Error opening file");
    exit(1);
}

## 4. Closing a file
int result = close(file_descriptor);
if (result == -1) {
    perror("Error closing file");
    exit(1);
}

## 5. Reading from a file
char buffer[1024];
ssize_t bytes_read = read(file_descriptor, buffer, sizeof(buffer));
if (bytes_read == -1) {
    perror("Error reading from file");
    exit(1);
}

## 6. Writing to a file
char data[] = "Hello, File I/O!";
ssize_t bytes_written = write(file_descriptor, data, sizeof(data));
if (bytes_written == -1) {
    perror("Error writing to file");
    exit(1);
}

## 7. Formatted Output with dprintf
#include <stdio.h>

int main() {
    int file_descriptor = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (file_descriptor == -1) {
        perror("Error opening file");
        exit(1);
    }

    dprintf(file_descriptor, "Formatted Output: %d %s\n", 42, "C Programming");
    close(file_descriptor);

    return 0;
}

