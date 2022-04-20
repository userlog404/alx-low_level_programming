#include "main.h"
/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */
void rev_string(char *s)
{
char *start_c, *end_c, c;
int i;
int len = 0;
for (i = 0; s[len]; i++)
{
len++;
}
start_c = s;
end_c = s;
for (i = 0; i < len - 1; i++)
{
end_c++;
}
for (i = 0; i < len / 2; i++)
{
c = *end_c;
*end_c = *start_c;
*start_c = c;
start_c++;
end_c--;
}
}
