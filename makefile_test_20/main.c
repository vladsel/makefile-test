#include "input.h"
#include "out.h"
#include "data.h"
#include "task.h"

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

unsigned n = -1;

int main (int argc, char **argv) {
    unsigned j = 0, key = 0, flag = 1;
    for (unsigned i = 1; i < argc; i++) {
        flag = 1;
        if (argv[i][0] == '-' && argv[i][1] == 'n') {
            j = 0;
            while (argv[i + 1][j] != '\0') {
                if (!isdigit(argv[i + 1][j])) {
                    flag = 0;
                    break;
                }
                j++;
            }
            if (atoi(argv[i + 1]) >= 0 && flag == 1) {
                n = atoi(argv[i + 1]);
            }
            else {
                printf("\nerror size\n");
                exit(1);
            }
            i++;
        }
        else if (argv[i][0] == '-' && argv[i][1] == 'd')
            key = 1;
        else {
            printf("\nwrong key\n");
            exit(1);
        }
    }
    if (n == -1) {
        printf("\nwrong arguments\n");
        exit(1);
    }
    
    if (key == 1) {
        printf("\n\t\tdebug program version\n");
        create();
        sort_input();
        printf("\nsort matrix debug version before task\n");
        out();
        debug_version();
        rand_input();
        printf("\nrand matrix debug version before task\n");
        out();
        debug_version();
        user_input();
        printf("\nuser matrix debug version before task\n");
        out();
        debug_version();
        delete();
        printf("\n\tdebug program version finished\n");
    }
    else {
        printf("\n\t\trelease program version\n");
        create();
        sort_input();
        printf("\nsort matrix release version before task\n");
        out();
        release_version();
        rand_input();
        printf("\nrand matrix release version before task\n");
        out();
        release_version();
        user_input();
        printf("\nuser matrix release version before task\n");
        out();
        release_version();
        delete();
        printf("\n\trelease program version finished\n");
    }
    
    return 0;
}