#include <unistd.h>

int main(void)
{
    int *i = (int*)sbrk(0);
    return *i;
}
