//Contributors
//Vasu Patel
//Soham Kaje
//Aditiya Saisiva



#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool ValdiateNumericInput(string input){
    for(int i = 0; i < input.size(); i++){//loops through the string input
        if(!isalpha(input.at(i))){//checks to see if the char is a number or letter
            return false;//returns false if not number
        }
    }

    return true;
} 


int main(){
    
    return 0;
}
