#ifndef MAIN_
#define MAIN_

int _isupper(int c);
/**                                                                                                                                     
 * isupper - checks for uppercase                                                                                                       
 *                                                                                                                                      
 * @c: integer to check                                                                                                                 
 *                                                                                                                                      
 * Return: 1 if true, 0 if false                                                                                                        
 */
int _isdigit(int c);
/**                                                                                                                                     
 * _isdigit - checks through 0 to 9                                                                                                     
 *                                                                                                                                      
 * @c: integers to be compared                                                                                                          
 *                                                                                                                                      
 * Return: 1 if true and 0 if false                                                                                                     
 */
int mul(int a, int b);
/**                                                                                                                                     
 *                                                                                                                                      
 * mul - multiplies two integer                                                                                                         
 *                                                                                                                                      
 * @a: integer                                                                                                                          
 * @b: integer                                                                                                                          
 *                                                                                                                                      
 * Return: always return 0                                                                                                              
 */
int _putchar();
void print_numbers(void);
/**                                                                                                                                     
 * print_numbers - prints numbers                                                                                                       
 *                                                                                                                                      
 * Return: alwyas 1                                                                                                                    
 */
void print_most_numbers(void);
/**                                                                                                                                     
 * print_most_numbers - prints numbers except 2 and 4                                                                                   
 *                                                                                                                                      
 */
void more_numbers(void);
/**                                                                                                                                     
 * more_numbers - prints numbers 10times                                                                                                
 *                                                                                                                                      
 */
void print_line(int n);
/**                                                                                                                                     
 * print_line - prints line                                                                                                             
 *                                                                                                                                      
 * @n: number of line                                                                                                                   
 *                                                                                                                                      
 */
void print_diagonal(int n);
 /**
 * print_diagonal - prints / diagonally
 *
 * @n: number of times
 *
 */
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
 
 #endif
