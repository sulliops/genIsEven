// Program to check if number is even :) (in C++ because I'm bored)

// Include header files
#include <iostream> // For cout and cin
#include <fstream> // For ofstream

// Use the std namespace for everything
using namespace std;

int main() { // Start main function

    // Start variables
    unsigned long long maxPossibleNumber = 18446744073709551615; // Variable to hold maximum unsigned long long value, so I don't have to keep copying and pasting the number
    unsigned long long maxNumber; // Variable to hold the future chosen value of how many if/else statements to generate in resulting program

    string outputFileName = "isEven.cpp"; // Variable to hold the default file name for the resulting program
    ofstream outputFile; // Variable to hold references to the resulting program file

    // Create new file for resulting program
    outputFile.open(outputFileName);

    // Error check the creation/opening of resulting program file
    if (!(outputFile.is_open())) {
        cout << "ERROR: Could not create \"" << outputFileName << "\"." << endl;
        cout << "Aborting program." << endl;
        exit(-1); // Exit returning error code
    }

    // Prompt user for number of if/else statements to generate in resulting program
    cout << "What number would you like to check up to in the resulting program?" << endl;
    cout << "This number determines how many if/else statements will be generated." << endl;
    cout << "Maximum: " << maxPossibleNumber << endl;
    cout << "Enter: ";
    cin >> maxNumber;

    // Error check the range of user input
    while (maxNumber < 2 || maxNumber > maxPossibleNumber) {
        cout << "ERROR: Input must be greater than 1 and less than or equal to " << maxPossibleNumber << "." << endl;
        cout << "Please try again: ";
        cin >> maxNumber;
    }

    // Print starting status of program generation
    cout << "Generating \"" << outputFileName << "\"..." << endl;

    // Start generating program
    outputFile << "#include <iostream>" << endl;
    outputFile << endl;

    outputFile << "using namespace std;" << endl;
    outputFile << endl;

    outputFile << "int main() {" << endl;
    outputFile << "\tint num;" << endl;
    outputFile << endl;

    outputFile << "\tcout << \"Enter a number to check if even: \";" << endl;
    outputFile << "\tcin >> num;" << endl;
    outputFile << endl;

    outputFile << "\tif (num == 0) { cout << \"Number is even!\" << endl; }" << endl;
    
    // Loop to whatever specified value to add if/else statements
    for (int i = 2; i <= maxNumber; i += 2) {
        outputFile << "\telse if (num == " << i << ") { cout << \"Number is even!\" << endl; }" << endl;
    }

    outputFile << "\telse { cout << \"Number is odd!\" << endl; }" << endl;
    outputFile << endl;

    outputFile << "\treturn 0;" << endl;

    outputFile << "}";

    // Print ending status of program generation
    cout << "Program generated!" << endl;

    // Close file
    outputFile.close();

    // Return end code
    return 0;

}