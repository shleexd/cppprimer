#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main( )
{
    tuple<size_t, size_t, size_t> threeD;
    tuple<string,vector<double>, int, list<int>>
            someVal("constants",{3.14, 2.718}, 42, {0, 1, 2, 3, 4, 5});
    auto item = make_tuple("0-9999-78345-x", 3, 20.0);
    auto book = get<0>(item);

    cout << book << endl;
    return 0;
}
