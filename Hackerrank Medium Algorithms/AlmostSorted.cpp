#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<string> split_string(string);

void almostSorted(vector<int> arr) {
    if(is_sorted(arr.begin(), arr.end())) 
    { 
        cout << "yes"; 
        return;
    }
    int first, last;
    for(int i = 0; i < arr.size() - 1; i++) 
    {
        if (arr[i] > arr[i + 1]) 
        { 
            first = i;
             break; 
        }
    } 
    for(int i = arr.size() - 1; i > 0; i--)
    {
        if(arr[i - 1] > arr[i]) 
        { 
            last = i; 
            break; 
        }
    } 
    swap(arr[first], arr[last]);
    if(is_sorted(arr.begin(), arr.end())) 
    { 
        cout << "yes" << endl << "swap " << first + 1 << " " << last + 1; 
        return; 
    }
    swap(arr[first], arr[last]);
    reverse(arr.begin() + first, arr.begin() + last + 1);
    if(is_sorted(arr.begin(), arr.end())) 
    { 
        cout << "yes" << endl << "reverse " << first + 1 << " " << last + 1; 
        return; 
    }
    cout << "no";
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    almostSorted(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

