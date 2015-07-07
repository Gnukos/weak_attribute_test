
#ifndef __WEAK_DEF_h
#define __WEAK_DEF_H

void __attribute__((weak)) weakBrace1(void) {}
void __attribute__((weak)) weakBrace2(void) {}
void __attribute__((weak)) weakDefault(void);
void __attribute__((weak)) weakSemiColon(void);

/* syntaxe error */
/* void weakError(void) __attribute__((weak)) {} */
/* but this is ok */
/* void weakOk(void) __attribute__((weak)); */


#endif
