#include <stdio.h>

/**
  * before_main - exec when program starts
  */
void __attribute__((constructor)) before_main()
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
			);
}
