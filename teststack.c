#include <stdio.h>
#include "stack.h"

int main()
{
	struct stack_handle s1;
	init(&s1);
	int i;
        for (i=0;i<10;i++)
	push(&s1,i);
	for (i=0;i<10;i++)
	printf("%d\n",pop(&s1));
        finalize(&s1);
	return 0;
}
