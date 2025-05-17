#include <iostream>
#include <string>

using namespace std;

vector<string> splitUpHexValues(const string& str) {
    /*Splits up hex string into a vector 
    for hex values */
    vector<string> result;
    for (size_t i = 0; i < str.length(); i += 2) {
        result.push_back(str.substr(i, 2));
    }
    return result;
}

int main()
{
    string input = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    vector<string> parts = splitUpHexValues(input);

    for (const string& part : parts) {
        
    }

    // for (const string& part : parts) {
    //     cout << part << endl;
    // }

    return 0;
}