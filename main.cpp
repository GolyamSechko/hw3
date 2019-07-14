#include <iostream>
using namespace std;

#define LOG(msg)\
cout << "msg: " << msg << ";\n"\
<< "line: " << __LINE__ << ";\n"\
<< "file: " << __FILE__ << ";\n"\
<< "time: " << __TIME__ << ";\n"\
<< "date: " << __DATE__ << endl

int main()
{    
    LOG("c++ hw");
    return 0;
}
