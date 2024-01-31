#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

vector<string> split(string str, char delimiter);

int main() {
    string str;
    vector<string> strs;

    float sxgTotal =0;
    float sTotal =0;

    float result;
    for (int i = 0; i < 20; i++) {
        getline(cin, str);
        strs = split(str, ' ');
        float score = stof(strs[1]);

        float s = 69 - (int)strs[2][0];
        if (s == -1) {
            s = 0;
        }
        else if (s >= 0) {
            if (strs[2][1] == '+')  s += 0.5f;
        }
        else
            continue;
      //  cout << s << " " << score << "\n";
        sTotal += score;
        sxgTotal += (s * score);
    }
    result =  sxgTotal / sTotal;
    cout << result;
    return 0;
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}