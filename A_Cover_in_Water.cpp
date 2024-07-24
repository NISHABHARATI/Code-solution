#include <iostream>
#include <vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int min_actions_to_fill(string cells) {
    int count = 0;
    int n = cells.size();

    for (int i = 2; i < n - 1; ++i) {
        if (cells[i] == 0 && cells[i - 1] == 1 && cells[i + 1] == 1) {
            count++;
        }
    }

    return count;
}

int main() {
    // Example usage:
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
    int result = min_actions_to_fill(str);
    cout << result << endl;
    }

    return 0;
}
