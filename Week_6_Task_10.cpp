#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Car {
public:
    string brand;
    int year;

};
int main()
{
    ifstream file("data.txt");
    if (!file) {
        cout << "Error! " << endl;
        return;

    }
    Car cars[100];  
    int count = 0;
    while (file >> cars[count].brand >> cars[count].year) {
        count++;
    }
    file.close();
    for (int i(0); i < count;
        i++) {
        cout << "Brand: " << cars[i].brand << "Year: " << cars[i].year << endl;
    }
    return 1;
}
