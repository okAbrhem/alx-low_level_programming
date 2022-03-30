#ifndef MAIN_iH
#define MAIN_H
/**
 * file: main.h
 *
 * Author: Fikadu Abdisa
 *
 * Desc: Header file containing prototype for all fucnctions to be used in
 * 0x07 even more pointers, arrays and strings project
 *
 */

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif
