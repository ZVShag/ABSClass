#include<string>
#include <iostream>
using namespace std;

class Device
{
public:
    virtual double ves() = 0;
    virtual double razmer() = 0;
    virtual string name() = 0;
    virtual void price() = 0;
};
class Note :public Device
{
private:
    double note_ves;
    double note_razmer;
    string note_name;
    int note_price;

public:
    Note() {}
    double ves() override
    {
        cout << "Enter ves" << endl;
        
        return 0;
    }
    virtual void price() override
    {

    }
    double razmer()override { return 0; };
    string name()override { return 0; };
    
};
class Mobile :public Note
{
    /*Поля и методы*/

};
class Powerbank :public Note
{

};


int main() 
{
    Mobile dell;
    dell.ves();
}

