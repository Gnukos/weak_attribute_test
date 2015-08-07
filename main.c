#include <stdio.h>
#include "weakDef.h"

/* cast function pointer to void* is not a legal operation */
#define CAST(x) ((void*)(size_t) (x))

int main(void) {
	printf("weakBrace1:\t %p\n"   , CAST(weakBrace1));
	printf("weakBrace2:\t %p\n"   , CAST(weakBrace2));
	printf("weakSemiColon:\t %p\n", CAST(weakSemiColon));
	printf("weakDefault:\t %p\n"  , CAST(weakDefault));

	printf("---*---");

	printf("\ncall to weakBrace1: ");
	weakBrace1();
	printf("\ncall to weakBrace2: ");
	weakBrace2();
	printf("\ncall to weakDefault: ");
	weakDefault();

	if (weakSemiColon) {
		printf("\ncall to weakSemicolon: ");
		weakSemiColon();
	}

	printf("\n");
	return 0;
}
