#include "main.h"

/**
 * free_grid-function that checks the number sign
 *
 * @grid: the number if byte
 * @height: the number if byte
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *
 */
char *argstostr(int ac, char **av) {
  if (ac == 0 || av == NULL) {
    return NULL;
  }

  // Calculate the total length of the new string.
  int total_len = 0;
  for (int i = 0; i < ac; i++) {
    total_len += strlen(av[i]) + 1;
  }

  // Allocate memory for the new string.
  char *new_str = malloc(total_len);
  if (new_str == NULL) {
    return NULL;
  }

  // Concatenate the arguments into the new string.
  int current_pos = 0;
  for (int i = 0; i < ac; i++) {
    strcat(new_str, av[i]);
    strcat(new_str, "\n");
    current_pos += strlen(av[i]) + 1;
  }

  // Return a pointer to the new string.
  return new_str;
}
