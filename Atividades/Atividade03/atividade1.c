#include <stdio.h>

int main() {

    for(int j = 1 ; j < 100 ; j++) {

        if (j % 3 == 0)
            printf("%d\n", j);
    }
    return 0;
}