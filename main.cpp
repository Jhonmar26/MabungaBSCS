#include <iostream>
#include <stdlib.h>
using namespace std;

int inputArraySize();
void inputArray(string[],string[],int[],int[],string[],string[]);
void DisplayArray(string[],string[],int[],int[],string[],string[]);

int arrSize;

int main()
{
    string lastname[10];
    string firstname[10];
    string Email[10];
    string Address[10];
    int age [10];
    int contacts [10];
    inputArray(firstname,lastname,age,contacts,Email,Address);
    DisplayArray(firstname,lastname,age,contacts,Email,Address);

    return 0;
}

int inputArraySize ()
{
    int age [arrSize];

    cout << "Enter Array Size : ";
    cin >> arrSize;

    return arrSize;
}

void inputArray (string firstname[], string lastname[], int age[], int contacts[], string Email[], string Address[])
{
    inputArraySize();

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter First Name: ";
        cin >> firstname[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Last Name: ";
        cin >> lastname[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Age: ";
        cin >> age[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Contact No.: ";
        cin >> contacts[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Your Email: ";
        cin >> Email[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Your Address: ";
        cin >> Address[i];
    }
}

void DisplayArray (string firstname[], string lastname[], int age[], int contacts[], string Email[], string Address[])

{

system("CLS");
    cout << "Firstname" << "|" << "Lastname" << "|" << "Age" << "|" << "Contacts" << "|" << "Email" << "|" << "Address" << endl;
    for (int i=0; i<=arrSize-1;i++){

        cout << " \n "<< firstname[i]<< "|" << lastname[i] << "|" << age[i] << "|" << contacts[i] << "|" << Email[i] << "|" << Address[i] << endl;
    }
}
