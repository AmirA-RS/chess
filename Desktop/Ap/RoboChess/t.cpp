#include "fstream"
#include "iostream"
using std::ofstream;
using std::ifstream;
using std::cout;
using std::cin;
using std::ios;
using std::string;
#include "cstdlib"
#include "iomanip"
int main()
{
    int* a = new int;
    *a = 5;
    cout<<*a;
    delete a;
    
}