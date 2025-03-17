#include <unistd.h>

int main(void)
{
	write(1, "02468\n", 6);
	return (0);
}
