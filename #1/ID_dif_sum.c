// Libraries
    #include <stdio.h>

// Variables
    char tmp[15] = "";
    char tmp_val_1[6], tmp_val_2[6] = "\0";
    int sum = 0;

// Prototypes
    int file_read (char *file);
    int main (int argc, char *argv[]);

// Functions
    int file_read (char *file) {
        FILE *f = fopen(file, "r");

        while (!feof(f)) {
            fgets(tmp, 15, f);

            for (int i = 0; i < 5; i++)
            {
                tmp_val_1[i] = tmp[i];
                tmp_val_2[i] = tmp[i+8];
            }
        }

        fclose(f);
        return 0;
    }

    int main (int argc, char *argv[]) {
        //return --argc ? ({ for (int i=1; i<=argc; i++) file_read(argv[i]); 1; }) : 0;

        // Debug
            file_read(argv[1]);

            while (1 ==1)
            {
            }
            
            return 0;
    }