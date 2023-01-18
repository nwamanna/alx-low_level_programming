/**
*print_name - prints the name
*@name: name to be printed
*@f: pointer to function
*
*Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
