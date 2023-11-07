//Contributors
//Vasu Patel
//Soham Kaje
//Aditiya Saisiva



#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool ValdiateNumericInput(string input) {
    // loops through the string input
    for (int i = 0; i < input.size(); i++) { 
        // checks to see if the char is a number or not
        if (isalpha(input.at(i))) { 
            // returns false if its not a number
            return false; 
        }
    }

    // returns true if all chars are numbers
    return true;
} 


int main(){
    return 0;
}
