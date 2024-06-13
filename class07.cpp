#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std ;
int sum ( int x ,int y )
{
	int z ;
	z = x + y ;
	return (z);
}
int main () 
{
	int e , f , g , h ;
	int c ;
	cin >> e >> f >> g >> h ;
	c = sum ( sum ( e , f ) , sum ( g , h )); 
	cout << " Enter integer 1 : " << e << endl ;
	cout << " Enter integer 2 : " << f << endl ;
	cout << " Enter integer 3 : " << g << endl ;
	cout << " Enter integer 4 : " << h << endl ;
	cout << " The sum is " << setw (5) << setfill ('*') << c << endl ;
	return (0) ;
}