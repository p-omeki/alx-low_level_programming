#include <stdio.h>
#define UNUSED(x) (void)(x)

int main(void)
{
    UNUSED(__FILE__);
    printf("%s\n", __BASE_FILE__);
    return 0;
}

