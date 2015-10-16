/**** Objective : 1. Explaining How template class  
		  2. Default Template class 
		  # While using the code if found issue please write to : gautamsingh2100@gmail.com
****/
#include<iostream>
using namespace std;

class Compare1
{
    int val ;
    public :
    void display() {cout << "Hi Compare1" << endl ;}
};


class Compare2
{
    int  val ;
    public :
    void display() {cout << "Hi Compare2" << endl ;}
};

class Compare3
{
    int val ;
    public :
    void display() {cout << "Hi Compare3" << endl ;}
};

template < class A ,class B = Compare1>
class list
{
    B   obj1 ;
    public :
    void display(A val)
    {
       obj1.display() ; 
    }
};

int main()
{
    list<int,Compare1> obj ;
    list<int,Compare2> obj1 ;
    list<int,Compare3> obj2 ;
    obj.display(10) ;
    obj1.display(10) ;
    obj2.display(10) ;
   cout << "Hello World" << endl; 
   
   return 0;
}
