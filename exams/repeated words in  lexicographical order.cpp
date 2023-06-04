#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> getRepeatedWords(const string& text) {
    map<string, int> wordCount;
    vector<string> repeatedWords;

    string word;
    for (int i = 0; i <= text.size(); i++) {
        if (i == text.size() || text[i] == ' ') {
            if (!word.empty()) {
                wordCount[word]++;
                word.clear();
            }
        } else {
            word += text[i];
        }
    }

    for (const auto& pair : wordCount) {
        if (pair.second > 1) {
            repeatedWords.push_back(pair.first);
        }
    }

    return repeatedWords;
}

int main() {
    string text;
    cout << "Enter the input text: ";
    getline(cin, text);

    vector<string> repeatedWords = getRepeatedWords(text);

    if (repeatedWords.empty()) {
        cout << "na" << endl;
    } else {
        sort(repeatedWords.begin(), repeatedWords.end());
        for (const string& word : repeatedWords) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
