#include <iostream>
#include <time.h>
using namespace std ;

int main()
{
	freopen("rand.txt", "w", stdout) ;
	srand(time(NULL)) ;
	cout << rand() % 100 ;
	return 0 ;
}
