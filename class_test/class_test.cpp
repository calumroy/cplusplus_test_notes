
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum Sex { male, female, dragon, cub, wolf, poet };

class boy {
    private:
        // Randomise init values
        Sex _sexuality = static_cast<Sex>(rand() % poet);
        // inches
        float _penis_length;  

    public:  
        // Default Constructor 
        boy()
        { 
            // Initialise the random seed
            srand(time(NULL));
            _penis_length = rand() % 10;
        } 

        float getPenis()
        { 
            return _penis_length;
        } 
};


template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

int main () {
    boy newb;

    cout << newb.getPenis() << endl;
    cout << "\n" << endl;
    return 0;
}