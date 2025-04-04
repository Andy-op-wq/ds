// Converting Tail Recursion into Loop 
#include <iostream> 
using namespace std; 

void fun(int y) 
{ 
	while (y > 0) { 
		cout << y << " "; 
		y--; 
	} 
} 

// Driver code 
int main() 
{ 
	int x = 3; 
	fun(x); 
	return 0; 
} 

//This Code is contributed by Shubhamsingh10
