#ifndef  NUTILITY_INCLUDED
#define  NUTILITY_INCLUDED

#include <stddef.h>

#define  asize(x)    (sizeof(x) / sizeof(x[0]))
  
inline int isleap(int y)
{
	return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

int		isprime(int x);
void	sl(void);
void	sleep(double sec);
int		ndigit(int x);
void	randomize(void);
void	sgets(char *p);
void	set_random_array(int *p, size_t size);
void	display_array(const int *p, size_t size);
void	sort(int *p, size_t size);
void	sleep(double sec);


#endif
