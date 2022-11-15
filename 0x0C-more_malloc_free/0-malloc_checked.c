<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *P;

	p == malloc(b);
	if (p == NULL)
		exit(98);
=======
#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocates memory
* @b: size of allocated memory
* Return: Pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p  == NULL)
		exit(98);

>>>>>>> 006fbe392dd72874f063b8feeb8c50777b51fc8b
	return (p);
}
