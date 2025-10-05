#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "ChatGPT";
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s;
}
