#include <iostream>

using namespace std;

int main() 
{
    float base, altura, area;

    cout<< "Base: "<< endl;   
    cin>>base;
    cout<< "Altura: "<< endl;   
    cin>>altura;

    area = (base*altura)/2;
    cout<< "Area: "<<area<<endl;
    return 0;
}