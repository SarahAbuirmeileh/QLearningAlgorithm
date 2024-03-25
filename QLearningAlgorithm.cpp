#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Constants for the array dimensions
const int rows = 6;
const int columns = 6;

// The headers for all functions
void printArray(int array[rows][columns]);
void initializeRewardArray(int Reward[rows][columns]);

int main (){

    // The rows represents the states and the columns represents the actions
    int Reward[rows][columns];

    // We want to reach F. Hence, F-> is the goal
    // We can add 'A' to each row & column to make the result more familiar to the table in the Readme file

    // Assigning the values to the Reward array
    initializeRewardArray(Reward);

    cout << "The Reward array is : " << endl << endl;
    printArray(Reward); 
    cout << endl << endl;

    // Initialize the Q-table array and initially all it's values are -1
    int QTable[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            QTable[i][j] = -1;
        }
    }

    return 0;
}

void printArray(int array[rows][columns]){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout <<  array[i][j] << " ";
        }
        cout << endl;
    }
}

void initializeRewardArray(int Reward[rows][columns]){

    // Assigning the values to the Reward array as the picture in the ReadMe file
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (j == 5 && (i == 1 || i == 4 || i == 5)){ 

                // If the column is F (If we reach the goal) give it big value
                // In other words if there is a direct action from current state to the gaol state 
                Reward[i][j] = 100;

            }else if ((i == 0 && j == 4) || ((i == 1 || i == 2) && ( j == 3)) || (i == 5 && ( j == 1 || j == 4)) ){

                // If there is a possible action give it value 0
                Reward[i][j] = 0;

            }else if (((i == 3) && (j == 1 || j == 2 || j == 4)) || ( i == 4 && ( j == 0 || j == 3))){

                // If there is a possible action give it value 0
                Reward[i][j] = 0;
            }else{

                // If there is no possible action (movement) give it -1
                Reward[i][j] = -1;
            }
        }
    }
}
