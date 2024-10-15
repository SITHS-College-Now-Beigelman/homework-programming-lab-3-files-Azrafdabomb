// Azraf Hossain
// Homework 3
// 10.15.24

#include <iostream>
#include <string> 
#include <iomanip>
#include <cstdlib> 
#include <fstream> // New library, used to read and write in files outside of this program

using namespace std; // required
 
int main () // fuction where the code can run
{
    // defining of our variables
    int initalMoney;
    int transac, transac2, transac3, transac4, transac5, transac6, transac7;

    ifstream inFile; 
    ofstream outFile;

    // Step 3: Open the files
    inFile.open("transactions.txt");
    outFile.open("outData.txt");

    inFile >> initalMoney;
    cout << initalMoney;

    
    return 0;
}