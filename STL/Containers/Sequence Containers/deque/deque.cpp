#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<string> kisiler;
    kisiler.push_front("Yusuf ");
    kisiler.push_back("Ramazan ");
    kisiler.push_front("Sinan ");
    kisiler.push_back("Mehmet ");

    //cout << kisiler.max_size() << endl;
    cout << kisiler.size() << endl;
    kisiler.resize(10);
    //kisiler.erase(kisiler.begin(), kisiler.end());
    cout << kisiler.size() << endl;

    return 0;
}


/*

        4
        10

*/ 