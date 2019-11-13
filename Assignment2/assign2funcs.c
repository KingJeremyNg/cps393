#include "assign2funcs.h"

// bool doubleChecker(char string[]) {
//     char *end;
//     double result = 0;

//     result = strtod(string, &end);

//     if (result == 0 && end == string) {
//         printf("%s is not a valid input", string);
//         return false;
//     }
//     else {
//         return true;
//     }
// }

// bool intChecker(char *string) {
//     if (isdigit(string)) {
//         if (&string[1] == "\0") {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
//     else {
//         return false;
//     }
// }

// float floatParser(char string[]) {
//     return atof(string);
// }

// //Find N=sqrt(v1**2 + v2**2 + ... + vn**2)
// float length(int array[], int num) {
//     float n = 0;
//     for (int i = 0; i < num; i++) {
//         n += array[i] * array[i];
//     }
//     return sqrt(n);
// }

// float normalize() {
//     //Normalize by [v1/N, v2/N, ... vn/N]
// }