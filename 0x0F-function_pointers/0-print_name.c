/**
 * print_name - prints a name using a function pointer
 * @name: name to be printed
 * @f: pointer to function to be used to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

