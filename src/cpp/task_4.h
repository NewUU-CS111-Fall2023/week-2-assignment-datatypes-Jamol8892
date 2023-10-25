#include <iostream>
#include <string>

using namespace std;

int findMatch(const string& sentence, const string& word) {
    size_t found = sentence.find(word);

    if (found != string::npos) {
        return static_cast<int>(found);
    } else {
        return -1;
    }
}

int MatchStr() {
    string sentence, word;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter a word to search for: ";
    cin >> word;

    int index = findMatch(sentence, word);

    if (index != -1) {
        cout << "Match found at index: " << index << endl;
    } else {
        cout << "No match" << endl;
    }

    return 0;
}
