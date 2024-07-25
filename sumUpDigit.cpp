//Preprocessor directives
#include <iostream>
using namespace std;

int main() {

        int numbers;
        char answer;
        int sum = 0;
        double max = INT_MAX;

        do {

                //Get numbers to be added
                cout << "Enter the numebrs to be calculated: ";
                cin >> numbers;

                //Loop through and show error message when input data is too big or negative
                while (numbers > max || numbers < 0) {
                        cout << "Error! Input number is not valid! Please try again: ";
                        cin >> numbers;
                }

                //Loop to seprate digits and then sum up
                while (numbers != 0) {
                        sum += numbers % 10;
                        numbers /= 10;
                }

                //Display results
                cout << "The total sum is: " << sum << endl;
                cout << endl;

                cout << "Do you wish to make another calculation? (Y/N) ";
                sum = 0; //Reset sum incase user wants to calculate again
                cin >> answer;
                cout << endl;

        } while (answer == 'Y' || answer == 'y');

        return 0;
}


