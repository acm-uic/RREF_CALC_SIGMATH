//Contributors
//Vasu Patel
//Soham Kaje
//Aditiya Saisiva
//Markus Perez

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

void swapRows(vector<vector<int>>& matrix, int numRow, int numRow2){
    vector<int> temp = matrix.at(numRow);
    matrix.at(numRow) = matrix.at(numRow2);
    matrix.at(numRow2) = temp;
}

bool PromptForRetry(){ //Asks user if they'd like to retry in case of failed input or operation, returns bool
    string retry;
    cout << "\nOperation or input failed, would you like to retry? (Y/N) ";
    cin >> retry;

    if(retry == "Y" || retry == "y")
        return true;
    else if(retry == "N" || retry == "n")
        return false;
    else //Calls function again if they input invalid response
        return PromptForRetry();
}

int PromptForInteger(string prompt){
    string userInput;
    bool allNumbers = true;
    cout << prompt;
    cin >> userInput;

    for(int i = 0; i < userInput.length(); i++){ //Checks for any non integer characters in userInput
        if(!isdigit(userInput[i]))
            allNumbers = false;
    }

    if(allNumbers) //Returns an integer conversion if userInput is all numbers
        return stoi(userInput);
    else //Prompts for a new input otherwise
        return PromptForInteger("Invalid input, please enter a number: ");    
}

vector<int> PromptForMatrixRow(int numRow, int numColumns){ //Returns a matrix row
    vector<int> row;
    for(int i = 1; i <= numColumns; i++){
        string prompt = "Enter the number for column " + to_string(i) + " in row " + to_string(numRow) + ": ";
        row.push_back(PromptForInteger(prompt));
    }
    return row;
}

vector<vector<int>> AssembleMatrix(int numRows, int numColumns){ //Returns completed matrix
    vector<vector<int>> matrix;
    for(int i = 1; i <= numRows; i++)
        matrix.push_back(PromptForMatrixRow(i, numColumns));
    return matrix;
}

vector<vector<int>> PromptForMatrix(){ //Returns matrix after assembling it with user
    int numRows, numColumns;
    cout << "Hello\nThis program will calculate the reduced row echelon form of a given matrix\nLet's begin by getting your matrix dimensions\n";
    numRows = PromptForInteger("Enter the number of rows: ");
    numColumns = PromptForInteger("Great! Now enter the number of columns: ");
    cout << "\nYou have chosen to use a " << numRows << "x" << numColumns << " matrix\nYou will now be prompted to insert the matrix values, pay attention to the row and column numbers";
    return AssembleMatrix(numRows, numColumns);
}

int main(){

    /* This is a test of the DisplayRREF function:
    vector< vector<int> > h = {{1,2,3}, {4,5,6}, {7,8,9}};
    DisplayRREF(h);
    This is the end of the test */

    vector<vector<int>> test = PromptForMatrix();
    for(int i = 0; i < test.size(); i++){
        for(int j = 0; j < test.at(i).size(); j ++)
            cout << test.at(i).at(j) << " ";
        cout << endl;
    }
    
    return 0;
}
  




