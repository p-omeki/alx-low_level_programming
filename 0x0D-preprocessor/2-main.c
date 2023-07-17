#include <stdio.h>
#define UNUSED(x) (void)(x)

int main(void)
{
    UNUSED(__BASE_FILE__);
    printf("%s\n", __FILE__);
    return 0;
}

