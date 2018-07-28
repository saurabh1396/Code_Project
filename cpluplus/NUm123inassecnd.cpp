#include<bits/stdc++.h>
using namespace std;


bool findContainsOneTwoThree(int number)
{
    string str = to_string(number);
    int countOnes = 0, countTwo = 0, countThree = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '1') countOnes++;
        else if(str[i] == '2') countTwo++;
        else if(str[i] == '3') countThree++;
    }
    return (countOnes && countTwo && countThree);
}
string printNumbers(int numbers[], int n)
{
    vector<int> oneTwoThree;
    for (int i = 0; i < n; i++)
    {
        if (findContainsOneTwoThree(numbers[i]))
            oneTwoThree.push_back(numbers[i]);
    }

    sort(oneTwoThree.begin(), oneTwoThree.end());

    string result = "";
    for(auto number: oneTwoThree)
    {
        int value = number;
        if (result.length() > 0)
            result += ", ";

        result += to_string(value);
    }


    return (result.length() > 0) ? result : "-1";
}

int main() {
    int numbers[] = { 123, 1232, 456, 234, 32145 };

    int n = sizeof(numbers)/sizeof(numbers[0]);

    string result = printNumbers(numbers, n);
    cout << result;
    return 0;
}
