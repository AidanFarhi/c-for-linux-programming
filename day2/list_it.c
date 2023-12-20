#include <stdio.h>
#include <stdlib.h>

/*
This program displays a listing with line numbers.
Author: th3_h3br3w_hack3r
Version: 0.1
*/

void display_usage(void);
int line;

int main(int argc, char *argv[])
{
    char buffer[256];
    FILE *fp;

    if (argc < 2)
    {
        display_usage();
        return 1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Error opening file, %s\n", argv[1]);
        return 1;
    }

    line = 1;

    while (fgets(buffer, 256, fp) != NULL)
        fprintf(stdout, "%4d:\t%s", line++, buffer);

    fclose(fp);
    return 0;
}

void display_usage(void)
{
    fprintf(stderr, "usage: list_it <filename>\n");
}

