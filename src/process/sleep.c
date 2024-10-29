#include <time.h>

unsigned int sleep(unsigned int seconds){
  
    struct timespec req, rem;
    
    req.tv_sec = seconds;
    req.tv_nsec = 0;
    
    while (nanosleep(&req, &rem) == -1) {
        if (rem.tv_sec == 0 && rem.tv_nsec == 0) {
            return 0;
        }
        
        req = rem;
    }
    
    return 0;
}