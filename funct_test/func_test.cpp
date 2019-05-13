#include <iostream>
#include <list> 
#include <vector>
#include <iterator> 
using namespace std;

// Add to poitner together
int add_p(int* a, int* b) {
	int c;
	c = *a + *b;
	return c;
}

// add 2 references together
int add_r(int& a, int& b) {
	int c;
	c = a + b;
	return c;

}





int main (int argc, char** argv) 
{ 
	int a,b,c,d,e;
	a = 2;
	b = 3;
    d = add_p(&a, &b); // Give the function the pointers of variables a and b as parameters.
    std::cout << "\nd =" << d;

    e = add_r(a, b); // This passes the referneces of variables and b to the funciton as parameters.
    std::cout << "\ne =" << e;
	std::cout << "\nFunctions finished" << endl;

}