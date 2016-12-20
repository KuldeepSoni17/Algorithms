#include<iostream>
using namespace std;


    int why() throw(int a)
    {
        //cout << "Maa" << endl;
    }
int main()
{
    try
    {
            throw Myexcep();
    }
    catch(Myexcep &C1)
    {
        cout << "HERE";
        cout << C1.why();
    }
}







/*
#include <iostream>
#include <exception>
using namespace std;
class MyException : public exception {
public:
const char * what () const throw ()
{     return "C++ Exception";   } };
int main()
{   try
{     throw MyException();   }
catch(MyException& e)
 {     std::cout << "MyException caught" << std::endl;
 std::cout << e.what() << std::endl;   }
   catch(std::exception& e)   {     //Other errors
}
 }
*/
