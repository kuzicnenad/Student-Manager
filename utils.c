// Currently empty, but here's a template for future utility functions.
// You can add input validation, trimming, string formatting, etc.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Example utility function to trim newline characters
void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {

        str[len - 1] = '\0';
        
    }
}

// Add more utilities here as needed