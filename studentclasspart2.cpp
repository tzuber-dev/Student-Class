#include <iostream>
#include <string>
#include <random>

using namespace std;

class MyClass {


public:
    std::string firstname;
    std::string lastname;
   
    int idnumber; 
    

  
    

    MyClass(std::string x, std::string y) {

        firstname = x;

        lastname = y;

     


        srand(time(0));

        
    }


public: 
  
    void add_credits(int number) {
        
        int numberofcredits = 0;
        numberofcredits += 1; 
    }

    void reset_credits() {
        
    }
};



int main() {
    

    for (int i = 0; i < 1; i++)
        cout << 100000 + (rand()% 900000) << " ";
    return 0;

    MyClass carObj1("Tomasz", "Zuber");
    carObj1.add_credits(5);


    // Print values
    std::cout << carObj1.firstname << " " << carObj1.lastname << " " << "\n";

   

   
    return 0;

}