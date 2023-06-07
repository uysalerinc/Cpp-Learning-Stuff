#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> contents {};
    string lines {};
    int wordCount(0);
    if (argc != 2) {
        cout << "Please enter just files name";
        return 0;
    }
    ifstream file (argv[1]);
    if (!file) {
        cerr << "File didn't found";
    }
    while(getline(file, lines)){
        contents.push_back(lines);
    }
    for (string lines : contents) {
        wordCount ++;
        for (char c : lines) {
            if (c == ' ' || c == '\n' || c == '\t'){
                wordCount ++;
            }
        }
    }
    file.close();
    cout << "in " << argv[1] << " there is " << wordCount << " words and " << contents.size() << " lines."; 

    return 0;
}
