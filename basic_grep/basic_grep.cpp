#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> contents {};
    string lines {};
    string word{};
    int wordNumber{0};
    int lineNumber(0);
    if (argc != 3) {
        cout << "Please enter file name and just a word to search";
        return 0;
    }
    string querry = argv[2];
    ifstream file (argv[1]);
    if (!file) {
        cerr << "File didn't found";
    }
    while(getline(file, lines)){
        contents.push_back(lines);
    }
    for (string line : contents){
        line.push_back('.');
        wordNumber =0;
        lineNumber ++;
        for (char c : line){
            if (isalpha(c)){
                word.push_back(c);
            } else {
                if (word.length() == 0) continue;
                wordNumber ++;
                if (word == querry){
                    cout << querry << " can be found on line : " << lineNumber << ", word: " << wordNumber << " on " << argv[1]; 
                    file.close();
                    return 0;
                } else {
                    word.clear();
                }
            }
        }
    }
    file.close();
    cout << argv[1] << " does not contain " << querry;

    return 0;
}
