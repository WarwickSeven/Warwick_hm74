#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Employеe
{
    int id;
    unsigned short age;
    double salary;
};
#pragma pack(pop)

int main()
{
    Employеe *pEmployee = new Employеe;
    pEmployee->id = 12345;
    pEmployee->age = 33;
    pEmployee->salary = 15'000;
    
    cout << "id: " << pEmployee->id << endl;
    cout << "age: " << pEmployee->age << endl;
    cout << "salary: "<< pEmployee->salary << endl;
    cout << "structure size: " << sizeof(pEmployee) << endl;
    
    ofstream fout;
    fout.open("Employee.txt");
    if(fout.is_open())
    {
        fout << "id: " << pEmployee->id << endl;
        fout << "age: " << pEmployee->age << endl;
        fout << "salary: "<< pEmployee->salary << endl;
        fout.close();
        cout << "file saved" << endl;
    }
    
    delete pEmployee;
    pEmployee = nullptr;
    
    return 0;
}
