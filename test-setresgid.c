#define _GNU_SOURCE /* linux */
#include <sys/types.h>
#include <unistd.h>

int
main(void)
{
	return setresgid(-1, -1, -1) == -1;
}
