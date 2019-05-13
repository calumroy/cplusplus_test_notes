#include <iostream>
#include <list> 
#include <vector>
#include <iterator> 
using namespace std;

// Given an input string return all permutations of this string.

vector<string> perm(string g) {

	// Take the first char from the string and return 
	// the two possible permutations
	string first_el;
	first_el = g.front();
	

	vector<string> res;
	if (g.length()>1) {
		string sec_el = g.substr(1);
		
		// Remove the first char and recall the function
		vector<string> res2;
		res2 = perm(sec_el);

		// Now combine res2 to with res to get the total permutations
		// Go through vector and for each location add back on the first char
		for(std::vector<string>::iterator it = res2.begin(); it != res2.end(); ++it) {
			string new_str1 = first_el + string(*it);
			//std::cout << new_str1 << " ";
			res.push_back(new_str1);
			string new_str2 = string(*it) + first_el;
			//std::cout << new_str2;
			res.push_back(new_str2);
		}

	} else {
		// Only one element in the string so just return this.
		res.push_back(g);
	}

	return(res);
}





int main (int argc, char** argv) 
{ 
    cout << "You have entered " << (argc - 1) 
         << " arguments:" << "\n"; 

    for(int i = 1; i < argc; i++) {

		string test_str = argv[i];
		vector<string> res_perm;
		std::cout << "\nInput " + test_str + "\n" << endl;

		res_perm = perm(test_str);

		// Print the vector
		std::cout << "TOTAL PERMUTATIONS \n" << endl;
		for(std::vector<string>::iterator it = res_perm.begin(); it != res_perm.end(); ++it) {
	    	std::cout << *it << " ";
		}
		std::cout << "\n" << endl;
	}

}