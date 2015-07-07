#include <stdio.h>

void __attribute__((weak)) weakDefault(void)   { printf("redefine"); }
void __attribute__((weak)) weakSemiColon(void) { printf("redefine"); }
void __attribute__((weak)) weakBrace1(void)    { printf("redefine"); }
void weakBrace2(void)                          { printf("redefine"); }
