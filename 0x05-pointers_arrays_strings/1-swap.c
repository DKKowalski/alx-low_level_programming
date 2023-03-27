/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to an integer
 * @b: Pointer to an integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int ptr1;
int ptr2;
ptr2 = *a;
ptr1 = *b;

*a = ptr1;
*b = ptr2;
}
