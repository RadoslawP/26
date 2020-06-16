#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis="Ala ma kota";
    string nowy_napis=napis.substr(4,7);

    cout <<nowy_napis<< endl;
    return 0;
}
