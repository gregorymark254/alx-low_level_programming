 #include "main.h"

/**
 * count_char - check main
 * @s: input
 * Description: function
 * Return: 0
 */
int count_char(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + count_char(s + 1));
}
/**
  * palindrome_helper - check main
  * @s: input
  * @start: input
  * @end: input
  * Description: function
  * Return: 0 or 1
  */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - check main
 * @s: input
 * Description: function
 * Return: 0
 */

int is_palindrome(char *s)
{
	int len = count_char(s);
	int start = 0;

	return (palindrome_helper(s, start, len - 1));
}
