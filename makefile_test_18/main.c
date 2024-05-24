#include "input.h"
#include "output.h"
#include "data.h"
#include "func.h"

int main (int argc, char** argv) {
    
    key = 0;
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-' && argv[i][1] == 'n') {
            if (atoi(argv[i + 1]) >= 0) 
                n = atoi(argv[i + 1]);
            else {
                printf("\nerror size\n");
                exit(1);
            }
            i++;
        }
        else if (argv[i][0] == '-' && argv[i][1] == 'm') {
            if (atoi(argv[i + 1]) >= 0) 
                m = atoi(argv[i + 1]);
            else {
                printf("\nerror size\n");
                exit(1);
            }
            i++;
        }
        else if (argv[i][0] == '-' && argv[i][1] == 'd')
            key = 1;
    }
    
    if (key == 1) {
        printf("\n\t\t\tdebug version\n");
        create();
        random_input();
        printf("\nrandom matrix debug\n");
        output();
        debug();
        sorted_input();
        printf("\nsorted matrix debug\n");
        output();
        debug();
        user_input();
        printf("\nuser matrix debug\n");
        output();
        debug();
        delete();
        printf("\n\t\t    debug version finished\n");
    }
    else {
        printf("\n\t\t\trelease version\n");
        create();
        random_input();
        printf("\nrandom matrix release\n");
        output();
        debug();
        sorted_input();
        printf("\nsorted matrix release\n");
        output();
        debug();
        user_input();
        printf("\nuser matrix release\n");
        output();
        debug();
        delete();
        printf("\n\t\t   release version finished\n");
    }
    
    return 0;
}