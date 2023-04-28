#ifndef LISTS_H
#define LISTS_H

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t

#endif
