#ifndef _SYSINFO_H_
#define _SYSINFO_H_

#include "types.h"

struct sysinfo {
    uint64 freemem;  // Free memory in bytes
    uint64 nproc;    // Number of running processes
};

#endif // _SYSINFO_H_
