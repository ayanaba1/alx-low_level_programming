<<<<<<< HEAD
#include "main.h"

/**
 * _puts_recursion - function
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


=======
#include "main.h"                                                                                            
                                                                                                             
/**                                                                                                          
 * _puts_recursion - function                                                                                
 * @s: input                                                                                                 
 * Return: Always 0                                                                                          
 */                                                                                                          
void _puts_recursion(char *s)                                                                                
{                                                                                                            
        if (*s == '\0')                                                                                      
                _putchar('\n');                                                                              
        else                                                                                                 
        {                                                                                                    
                _putchar(*s);                                                                                
                _puts_recursion(s + 1);                                                                      
        }                                                                                                    
}                                                                                                           
>>>>>>> a103e1bea001509da03eb0936cc00dd417e81ebe
