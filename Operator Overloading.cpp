#include<iostream>
using namespace std;

class Test
{
    private:
        int x,y,z;
    public:
        void getdata(int a, int b,int c);
        void display();
        void operator-();
};
    void Test::getdata(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void Test::display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
     void Test::operator-()
     {
         x=-x;
         y=-y;
         z=-z;
     }
        int main()
        {
            Test obj;
            obj.getdata(10,-20,30);
            obj.display();
            -obj;
            obj.display();
            return 0;
            
        }