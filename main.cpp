#include <iostream>
using namespace std;

#define PRINT(msg)\
cout << "msg: " << msg << ";\n"\
<< "line: " << __LINE__ << ";\n"\
<< "file: " << __FILE__ << ";\n"\
<< "time: " << __TIME__ << ";\n"\
<< "date: " << __DATE__ << endl

int main()
{    
    PRINT("c++ hw");
    return 0;
}
