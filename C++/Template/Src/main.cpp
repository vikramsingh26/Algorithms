#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <Solution.h>
using namespace std;

int main(int argc, const char * argv[]) {
    Temp obj;
    int n = 3;
    obj.inc(n);
    float f = 3.3;
    obj.inc(f);
    cout << "calling inc with int= " << n << endl;
    cout << "calling inc with float = " << f << endl;
    float f2 = 2.4;
    string st1 = "Vikram ";
    string st2 = "Singh";
    cout << "calling add with float = " << obj.add(f, f2) << endl;
    cout << "calling add with string = " << obj.add(st1, st2) << endl;

    return 0;
}
