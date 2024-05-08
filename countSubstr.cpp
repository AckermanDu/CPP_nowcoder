#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[100] = { 0 };
    char substr[100] = { 0 };

    cin.getline(str, sizeof(str));
    cin.getline(substr, sizeof(substr));

    int count = 0;

    // write your code here......
    string _str=str;
    string _substr=substr;
    int sublen=_substr.size();

    for(int i=0;i<_str.size();i++)
    {
        if(_str[i]==_substr[0])
        {
            if((_str.substr(i,sublen).compare(_substr))==0)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}