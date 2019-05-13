#include <iostream>
#include <list> 
#include <vector>
#include <iterator> 
#include <sstream>
#include <thread>

using namespace std;

void accumulator_function2(const std::vector<int> &v, unsigned long long &acm, 
                            unsigned int beginIndex, unsigned int endIndex)
{
    acm = 0;
    for (unsigned int i = beginIndex; i < endIndex; ++i)
    {
        acm += v[i];
    }
}





int main (int argc, char** argv) 
{ 
	std::vector<int> tempv = {1,2,3,4,5,6,7,8,9,10};
	const std::vector<int>& v = tempv;
	unsigned long long acm1 = 0;
	unsigned long long acm2 = 0;
	std::thread t1(accumulator_function2, std::ref(v), 
	                std::ref(acm1), 0, v.size() / 2);
	std::thread t2(accumulator_function2, std::ref(v), 
	                std::ref(acm2), v.size() / 2, v.size());
	t1.join();
	t2.join();

	std::cout << "acm1: " << acm1 << endl;
	std::cout << "acm2: " << acm2 << endl;
	std::cout << "acm1 + acm2: " << acm1 + acm2 << endl;

}