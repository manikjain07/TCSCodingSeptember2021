#include <iostream>
#include <string>

using namespace std;

int main()
{
    int star_count = 0,hash_count = 0;
    string user_input;
    getline(cin,user_input);
    for (int i = 0 ; i != user_input.length() ; i++)
    {
        if (user_input[i] == '*')
        {
            star_count += 1;
        }
        else
        {
            hash_count += 1;
        }
    }
    if (star_count > hash_count)
    {
        cout << star_count - hash_count << endl;
    }
    else if (star_count < hash_count)
    {
        cout << star_count - hash_count << endl;
    }
    else
    {
        cout << star_count - hash_count << endl;
    }
    return 0;
}
