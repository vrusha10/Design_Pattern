#include <iostream>
using namespace std;
class Singleton
{
    static Singleton *s1;
    int data;
    public:
    static Singleton *s2()
    {
        if(!s1)
        s1=new Singleton;
        return s1;
    }
    int get()
    {
        return this->data;
    }
    void set(int data)
    {
        this->data=data;
    }
};
Singleton *Singleton::s1=0;
int main()
{
    Singleton *s=s->s2();
    cout<<s->get()<<endl;
    s->set(100);
    cout<<s->get()<<endl;
}
