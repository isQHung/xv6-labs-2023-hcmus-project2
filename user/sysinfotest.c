#include "kernel/sysinfo.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    struct sysinfo info;
    if (sysinfo(&info) < 0) {
        printf("sysinfo failed\n");
        exit(1);
    }

    printf("Free memory: %d bytes\n", info.freemem);
    printf("Number of processes: %d\n", info.nproc);

    printf("sysinfotest: OK\n");
    exit(0);
}
