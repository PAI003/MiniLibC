#include <time.h>
#include <internal/syscall.h>
#include <errno.h>

int nanosleep( struct timespec *req, struct timespec *rem) {
    int ret;
    
    do {
        ret = syscall(35, req, rem);
    } while (ret == -1 && errno == EINTR);
    
    return ret;
}