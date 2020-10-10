#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;



string reverse_words(string s);



int main() {
    cout << reverse_words("Hello World!") << endl;
    cout << reverse_words("Let's take LeetCode contest") << endl;

    return 0;
}


string reverse_words(string s) {
    int len = s.length();
    string reversed (len, '0');
    for (int i {}; i < len; i++) {
        reversed[i] = s[len - 1 - i];
    }
    int r_start = len - 1;
    int position = reversed.find_last_of(' ', r_start);
    int s_start = 0;

    while (position != string::npos) {
        s.replace(s_start, r_start - position, reversed.substr(position + 1, r_start - position));
        s_start += (r_start - position) + 1;
        r_start = position - 1;
        position = reversed.find_last_of(' ', r_start);
    }
    s.replace(s_start, r_start + 1, reversed.substr(position + 1, r_start - position));
    cout << s << endl;
    return s;
}