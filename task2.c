
#include <stdio.h>
 
    using namespace std;
 
int main() {
    char c;
    string s, s0, res = "";
    cout << "Enter a string \'s\':\n";
    getline(cin, s);
    cout << "Enter a string \'s0\':\n";
    getline(cin, s0);
    cout << "Enter a symbol \'c\':\n";
    cin >> c;
    for (int i = -1; s[++i] != '\0';) {
        if (s[i] == c) res += s0;
        res += s[i];
    }
    cout << "Target info:\n" << res << "\n";
    system("pause");
    return 0;
}