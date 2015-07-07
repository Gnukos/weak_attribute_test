
#include <stdio.h>
#include "weakDef.h"

void __attribute__((weak)) weakDefault(void) {
	printf("default implementation");
}
