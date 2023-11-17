//Contributors
//Vasu Patel
//Soham Kaje
//Aditiya Saisiva
//Sam Stuckey



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

void addRows(vector<vector<int>>& matrix, int targetRow, int rowToAdd, int scalar) {
    int rowLength = matrix.at(targetRow).size();
    for (int i = 0; i < rowLength; i++) {
        matrix.at(targetRow).at(i) += (matrix.at(rowToAdd).at(i) * scalar);
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

// Takes the 2d vector matrix as a reference
void multiplyRow(vector<vector<int>>& matrix, int rowNumber, int scalar) {
    int rowLength = matrix.at(rowNumber).size();
    for (int i = 0; i < rowLength; i++) {
        matrix.at(rowNumber).at(i) *= scalar;
    }
}


void normalizeRow(vector< vector<int> > matrix, int rowNumber) {
    int rowLength = matrix.at(rowNumber).size();
    int counter = 0;
    while (counter < 1) {
        for (int m = 0; i < rowLength; i++) {
            if ((matrix.at(rowNumber).at(i) != 0) && (i != rowLength)) {
                float pivot = matrix.at(rowNumber).at(i);
                counter += 1;
            }
        }
    }
    for (int m = 0; i < rowLength; i++) {
        matrix.at(rowNumber).at(i) /= pivot;
    }
}

int findPivot(vector< vector<int> > matrix, int collumNumber) {
    int counter = 0;
    int rowCount = 0;
    while (counter < 1) {
        if ((matrix.at(rowCount).at(collumNumber) != 0) || (rowCount > 600)) {
            return matrix.at(rowCount).at(collumNumber);
        }
        rowCount += 1;
    }
}


int main(){
    // This is a test of the DisplayRREF function:
    vector< vector<int> > h = {{0,1,0,3}, {5,0,0,6}, {0,0,4,8}};
    DisplayRREF(h);
    // This is the end of the test.
  
  return 0;
}