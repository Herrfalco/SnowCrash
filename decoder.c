#include <stdio.h>
#include <unistd.h>

int main(void) {
	int	i = 0;
	char c = 0;

	for (i = 0; read(0, &c, 1) > 0; ++i) {
		printf("%c", c - i);
	}
	printf("\n");
	return (0);
}
