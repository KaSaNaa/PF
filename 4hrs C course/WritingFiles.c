#include <stdio.h>

int main()
{
    FILE *fpointer /*stands for file pointer*/ = fopen("employee.txt", "w"); // fopen needs two parameters. a File name and mode. Mode means what we want to do with the file.
    // basic file mode types - w=write  r=read  a=append
    fprintf(fpointer, "\nKelly, Customer Service");
    fclose(fpointer);
    fopen("employee.txt", "a");
    fprintf(fpointer, "\nPasindu, Software Engineer");
    fclose(fpointer);
    return 0;
}