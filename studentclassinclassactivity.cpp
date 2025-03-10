#include <iostream>
#include <string>

class MyClass {       
public:             
    std::string firstname;
    std::string lastname;
    
    MyClass(std::string x, std::string y) {

        firstname = x;

        lastname = y;

    }
};



int main() {

    MyClass carObj1  ("Tomasz", "Zuber");
  

    // Print values
    std::cout << carObj1.firstname << " " << carObj1.lastname << " " << "\n";
   
    return 0;

}

