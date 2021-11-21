#include <stdio.h>
#include <stdlib.h>

#define TUESDAY "tuesday.txt"
#define WEDENSEDAY "wednesday.txt"
#define THURSDAY "thursday.txt"

int searchArray(char *key, char postalcodes[]) {
    char strArray[150][150];
    FILE *fp;
    char *file_name;
    char cur_char;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int counter = 0;

    fp = fopen(postalcodes, "r");

    if (fp != NULL) {

        while ((read = getline(&line, &len, fp)) != -1)
        {
            int i = 0;
            while (line[i] != '\n') {
                strArray[counter][i] = line[i];
                i++;
            }
            counter++;

            int found = 0;
            int size = sizeof(strArray) / sizeof(strArray[0]);
            for (int i = 0; i < size; ++i) {
                if (strArray[i] == key) {
                    found = 1;
                    return found;
                }
            }
            return found;

        }
    }
}
        int main() {
            char postalCode[20];
            printf("Please enter your postal code\n");
            scanf("%s", postalCode);
            if (searchArray(postalCode, TUESDAY[])) {
                printf("Your garbage pickup day is on Tuesday");
            } else if (searchArray(postalCode, WEDENSEDAY)) {
                printf("Your garbage pickup day is on Wednesday");
            } else if (searchArray(postalCode, THURSDAY)) {
                printf("Your garbage pickup day is on Wednesday");
            } else {
                printf("Your postal code is outside of the Kingston region");
            }
            return 0;
        }
