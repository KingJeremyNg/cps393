#include "assign2funcs.h"
#include "assign2funcs.c"

int main(void) {

    START:
        count = 0;

        printf("Enter shit\n");
        scanf("%s", &input);

        if (isdigit(*input)) {
            num = atoi(input);
            if (num == 0) {
                goto END;
            }
        }
        else {
            printf("\nInvalid input\n");
            fflush(stdin);
            goto CONTINUE;
        }

        goto INPUT;
    
    INPUT:
        count = 0;
        while (count < num) {
            scanf("%s", &input);
            if (isdigit(*input)) {
                // printf("%f\n", atof(input));
                // printf("\n\n%s\n\n", input);
                array[count] = atof(input);
                printf("%f\n", array[count]);
            }
            else {
                printf("\nInvalid input\n");
                goto CONTINUE;
            }
            count++;
        };
        // for (int i = 0; i < num; i++) {
        //     printf("%f", array[i]);
        // }
        fflush(stdin);
        goto NORMALIZE;

    NORMALIZE:
        n = 0;
        for (int i = 0; i < num; i++) {
            n += array[i] * array[i];
        }
        n = sqrt(n);

        printf("\n[ ");
        for (int i = 0; i < num; i++) {
            array[i] = array[i] / n;
            printf("%.3f, ", array[i]);
        }
        printf("\b ]\n\n", n);
        goto CONTINUE;

    CONTINUE:
        printf("Enter any key to continue. Enter 0 to exit.\n");
        scanf("%s", &input);
        if (isdigit(*input)) {
            num = atoi(input);
            if (input == 0) {
                goto END;
            }
            else {
                fflush(stdin);
                goto START;
            }
        }
        else {
            fflush(stdin);
            goto START;
        }

    END:
        printf("\nClosing program...\n");
        exit(0);
}