//Contributors
//Vasu Patel
//Soham Kaje
//Aditiya Saisiva



#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
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

bool isZeroRow(vector<vector<int>> matrix, int rowNumber) {
    int rowLength = matrix.at(rowNumber).size();
    bool isZero = true;
    for (int i = 0; i < rowLength; i++) {
        if (matrix.at(rowNumber).at(i) != 0) {
            isZero = false;
        }
    }
    return isZero;
}

int main(){
    // This is a test of the DisplayRREF function:
    vector< vector<int> > h = {{1,2,3}, {4,5,6}, {7,8,9}};
    DisplayRREF(h);
    // This is the end of the test.
  
  return 0;
}
  




