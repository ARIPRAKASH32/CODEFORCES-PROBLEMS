#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        vector<char> digits, letters;
        bool foundLetter = false;
        bool digitAfterLetter = false;
        
        for (char c : s) {
            if (isdigit(c)) {
                if (foundLetter) {
                    digitAfterLetter = true;
                }
                digits.push_back(c);
            } else {
                foundLetter = true;
                letters.push_back(c);
            }
        }
        
        bool digitSorted = true;
        for (int i = 1; i < digits.size(); i++) {
            if (digits[i] < digits[i - 1]) {
                digitSorted = false;
                break;
            }
        }
        
        bool letterSorted = true;
        for (int i = 1; i < letters.size(); i++) {
            if (letters[i] < letters[i - 1]) {
                letterSorted = false;
                break;
            }
        }
        
        if (!digitAfterLetter && digitSorted && letterSorted)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
