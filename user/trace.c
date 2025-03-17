#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    int mask = atoi(argv[1]);  // Convert string argument to integer mask

    if (argc < 3) {
        trace(mask);
        exit(1);
    }


    if (trace(mask) < 0) {
        fprintf(2, "trace: failed to set trace mask\n");
        exit(1);
    }

    // Run the given command with arguments
    exec(argv[2], &argv[2]);

    fprintf(2, "trace: exec failed\n");

    exit(1);
}
