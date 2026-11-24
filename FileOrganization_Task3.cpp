#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string text;

    // Create and write in the file
    ofstream outputFile("welcome.txt");

    outputFile << "Hello Everybody";

    outputFile.close();

    // Read from the file
    ifstream inputFile("welcome.txt");

    getline(inputFile, text);

    inputFile.close();

    // Replace body with one
    int pos = text.find("body");

    if (pos != string::npos)
    {
        text.replace(pos, 4, "one");
    }

    // Write the final result in the same file
    ofstream finalFile("welcome.txt");

    finalFile << text;

    finalFile.close();

    cout << "Final Result: " << text << endl;

    return 0;
}