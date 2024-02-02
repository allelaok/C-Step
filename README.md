[Markdown 가이드](http://sergeswin.com/1013)
[정리된 버전](https://github.com/snacky101/markdown_tutorial/blob/master/README.md)

# C-Step
This is an auto push repository for Baekjoon Online Judge created with [BaekjoonHub](https://github.com/BaekjoonHub/BaekjoonHub).

# getline()

# Split
```c++

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}

```

# Vector <string>
