// reading a text file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num, age[20];
    string name[20], blood[20], gender[20], medicine[20];
    ifstream myfile("Patients records.txt");
    if (myfile.is_open())
    {
        for (num = 1; num < 21; num++)
        {
            myfile >> name[num] >> blood[num] >> gender[num] >> age[num];
        }
        cout << "Enter Patient number : ";
        cin >> num;
        if (num > 0 && num < 21)
            cout << "Name: " << name[num] << "\nBlood Type: " << blood[num] << "\nGender: " << gender[num] << "\nAge: " << age[num];
        else
            cout << "Invalid Patient number!";
        myfile.close();
    }

    else cout << "Unable to open file";

    return 0;
}

