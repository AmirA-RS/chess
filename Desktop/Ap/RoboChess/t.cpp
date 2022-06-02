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
    ofstream snake;
    snake.open("first.txt", ios::out);
    int a;
    int b;
    int m = 0;
    while (cin>>a>>b && m<4)
    {
        snake<<a<<' '<<b<<'\n';
        m++;
    }
    snake.close();
    ifstream show;
    show.open("fist.txt", ios::in);
    while (show>>a>>b)
    {
        cout<<a<<' '<<b<<'\n';
    }
    
}