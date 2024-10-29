// SPDX-License-Identifier: BSD-3-Clause

#include <unistd.h>
#include <internal/syscall.h>
#include <stdarg.h>
#include <errno.h>

int close(int fd)
{
	/* TODO: Implement close(). */

	long result = syscall(3, fd);

	if(result >= 0)
		return result;

	errno = -result;
	
	return -1;
}
