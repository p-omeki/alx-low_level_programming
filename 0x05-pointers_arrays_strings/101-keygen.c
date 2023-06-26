#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for 101-crackme
 * @password: Pointer to the password buffer
 * @length: Length of the password
 */
void generate_password(char *password, int length)
{
  int i;

  for (i = 0; i < length; i++)
  {
    // Generate a random ASCII character between '!' and '~'
    password[i] = '!' + (rand() % 94);
  }

  password[length] = '\0'; // Add the null terminator at the end
}

/**
 * main - Entry point of the program
 * Return: 0 on success
 */
int main(void)
{
  char password[11]; // Password length for 101-crackme is 10 characters

  srand(time(0)); // Seed the random number generator with current time

  generate_password(password, 10);

  printf("%s\n", password);

  return 0;
}

