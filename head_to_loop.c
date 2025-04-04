// Converting Head Recursion into Loop 
#include <iostream> 
using namespace std; 

// Recursive function 
void fun(int n) 
{ 
	int i = 1; 
	while (i <= n) { 
		cout <<" "<< i; 
		i++; 
	} 
} 

// Driver code 
int main() 
{ 
	int x = 3; 
	fun(x); 
	return 0; 
} 
// this code is contributed by shivanisinghss2110
