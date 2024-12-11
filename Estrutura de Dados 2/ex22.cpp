#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

/*
22. Dado um vetor de strings, encontre as strings no vetor que podem ser formadas concatenando exata-
mente duas outras strings do mesmo vetor. Por exemplo, se arr = {"cat", "dog", "catdog", "fish",
"dogfish", "fishdog"}, então a saída deve ser {"catdog", "dogfish", "fishdog"}.
*/

vector<string> findConcatenatedStrings(const vector<string>& arr) {
    unordered_set<string> stringSet(arr.begin(), arr.end());
    vector<string> result;

    for (const string& str : arr) {
        for (int i = 1; i < str.size(); i++) {
            string part1 = str.substr(0, i);
            string part2 = str.substr(i);
            
            if (stringSet.count(part1) && stringSet.count(part2)) {
                result.push_back(str);
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<string> arr = {"cat", "dog", "catdog", "fish", "dogfish", "fishdog"};
    vector<string> result = findConcatenatedStrings(arr);

    cout << "Strings formadas pela concatenação de outras duas strings: " << endl;
    for (const string& str : result) {
        cout << str << endl;
    }

    return 0;
}