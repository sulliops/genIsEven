// Program to check if number is even :)

#include <stdio.h>
#include <string.h>

int main(void) {

    unsigned long long maxEvenNumber = [CHANGE_THIS];

    // FILE* struct vars for file
    FILE* outFile = NULL;

    // Create and open "isEven.c"
    outFile = fopen("isEven.c", "w");

    // Error check fopen()
    if (outFile == NULL) {
        printf("fopen() failed to open the file \"isEven.c\".\n");
        return -1;
    }

    // Print resulting program structure
    fprintf(outFile, "#include <stdio.h>\n");
    fprintf(outFile, "#include <string.h>\n");
    fprintf(outFile, "\n");

    fprintf(outFile, "int main() {\n");

    fprintf(outFile, "int num;\n");
    fprintf(outFile, "\n");

    fprintf(outFile, "printf(\"Enter a number to check if even: \");\n");
    fprintf(outFile, "scanf(\"%%d\", &num);\n");
    fprintf(outFile, "\n");

    fprintf(outFile, "if (num == 0) { printf(\"Number is even!\\n\"); }\n");

    // Loop to whatever specified value to add conditionals
    for (int i = 2; i <= maxEvenNumber; i += 2) {
        fprintf(outFile, "else if (num == %d) { printf(\"Number is even!\\n\"); }\n", i);
    }

    fprintf(outFile, "else { printf(\"Number is odd!\\n\"); }\n");

    fprintf(outFile, "}");

    // Close file
    fclose(outFile);
    
    return 0;

}