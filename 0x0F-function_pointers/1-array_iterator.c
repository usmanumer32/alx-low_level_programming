#include "function_pointers.h"
/**
* array_iterator - executes a function given as parameter on each element of an array
* @array: int
* @size: size_t
* @action: function
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
