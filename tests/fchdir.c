#include "tests.h"
#include <asm/unistd.h>

#ifdef __NR_fchdir

# include <stdio.h>
# include <unistd.h>

int
main(void)
{
	const long int fd = (long int) 0xdeadbeefffffffffULL;

	long rc = syscall(__NR_fchdir, fd);
	printf("fchdir(%d) = %ld %s (%m)\n",
	       (int) fd, rc, errno2name());

	puts("+++ exited with 0 +++");
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_fchdir")

#endif
