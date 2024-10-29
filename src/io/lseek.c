// SPDX-License-Identifier: BSD-3-Clause

// Understood better what lseek() syscall actually does from here:
// https://man7.org/linux/man-pages/man2/lseek.2.html
// https://fastbitlab.com/linux-device-driver-programming-lecture-45-lseek-method-implementation/

#include <unistd.h>
#include <internal/syscall.h>
#include <errno.h>

off_t lseek(int fd, off_t offset, int whence)
{
	/* TODO: Implement lseek(). */

	long result = syscall(8, fd, offset, whence);

	if(result >= 0)
		return result;

	errno = -result;

	return -1;
}
