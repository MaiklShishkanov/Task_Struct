#include <iostream>
#include <string>


using namespace std;

int arr_15()
{
    string str1 = 0;
    string str2 = 0;
    bool ans = false;

    cout << "vvedite stroky 1" << endl;
    cin >> str1;
    cout << "vvedite stroky 2" << endl;
    cin >> str2;

    if (str1.size() == str2.size()) {

        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] == str2[i]) {
                ans = true;
            }
            else {
                ans = false;
                break;
            }
        }
    }

    if (ans) cout << "Stroki rovnie" << endl;
    else cout << "Stroki ne rovnie" << endl;

    return 0;
}