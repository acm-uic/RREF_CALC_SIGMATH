//Contributors
//Vasu Patel
//Soham Kaje
//Aditiya Saisiva



#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool ValdiateNumericInput(string input){
    for(int i = 0; i < input.size(); i++){//loops through the string input
        if(!isalpha(input.at(i))){//checks to see if the char is a number or letter
            return false;//returns false if not number
        }
    }

    return true;
} 

// Display a matrix that is already in RREF form.
// Expects the matrix to be in RREF form.
void DisplayRREF(const vector< vector<int> >& rrefMatrix) {
    cout << "The Reduced Row Echelon Form is:" << endl;
    for (const vector<int>& row : rrefMatrix) {
        for (const int& value : row) {
            cout << " " << value;
        }
        cout << endl;
    }

}

int main(){
    // This is a test of the DisplayRREF function:
    vector< vector<int> > h = {{1,2,3}, {4,5,6}, {7,8,9}};
    DisplayRREF(h);
    // This is the end of the test.
    return 0;
}
