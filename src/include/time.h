// Used this link to create the structure and the time.h library:

// https://man7.org/linux/man-pages/man0/time.h.0p.html

#ifndef __TIME_H__
#define __TIME_H__ 1

#ifdef __cplusplus
extern "C" {

#endif

#include <internal/types.h>

struct timespec {
    long tv_sec;
    long tv_nsec;
};

int nanosleep(struct timespec *req, struct timespec *rem);
unsigned int sleep(unsigned int seconds);

#ifdef __cplusplus
}
#endif

#endif
