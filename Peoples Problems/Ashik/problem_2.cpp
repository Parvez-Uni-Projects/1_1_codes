#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// turn the vowels into capital

int main()
{

    string word;

    //cin >> word;

    getline(cin , word);

    // cout << word ;

    // cout << word;
    //  for (int i = 0 ; i< word.size() ; i++)
    //  {
    //      cout << word[i];
    //  }

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o'|| word[i] == 'u')
        {
            word[i] = word[i]- 32;
        }

        cout << word[i];
    }

    return 0;
}