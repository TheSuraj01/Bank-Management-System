#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class Account
{
protected:
    string Name;
    string FatherName;
    string MotherName;
    string Occupation;
    string Username;
    string Password;
    string Confirm;
    int Balance;
    int Credit;
    int Debit;
    int date;
    int month;
    int year;
    string country;
    string state;
    string city;
    string landmark;
    string Gender;
    int pincode;
    long int AadharNo;
    long int contact1;
    long int contact2;
    int debit;
    int credit;
    string Email;

public:
    void details();
    void username();
    void password();
    void confirm();
    void balance();
    void transection();
    void dob();
    void address();
    void gender();
    void aadharNo();
    void email();
    void contact();
    void profile();
    void Deposite();
    void Withdrawl();
};

class CreateAccount : protected Account
{
public:
    CreateAccount()
    {
        details();
        username();
        do
        {
            password();
            confirm();
        } while (Password != Confirm);
        int x;

        x = Password.compare(Confirm);
        if (x == 0)
        {
            dob();
            address();
            gender();
            aadharNo();
            email();
            contact();
            cout << "Account Created Successfully.\n";
            int select;
            do
            {
                cout << "Choose:" << endl;
                cout << "1) Transaction." << endl
                     << "2) profile." << endl
                     << "3) Exit." << endl;
                cin >> select;

                switch (select)
                {
                case 1:
                    transection();
                    break;
                case 2:
                    profile();
                case 3:
                    break;
                default:
                    cout << "Enter a valid input.\n";
                    break;
                }
            } while (select != 3);
        }
    }
};

class Accountlogin : protected Account
{
public:
    Accountlogin()
    {
        username();

        int x;
        int select;
        password();
        confirm();
        x = Password.compare(Confirm);
        if (x == 0)
        {
            do
            {
                cout << "Choose:" << endl;
                cout << "1) Transaction." << endl
                     << "2) profile." << endl
                     << "3) Exit." << endl;
                cin >> select;
                switch (select)
                {
                case 1:
                    transection();
                    break;
                case 2:
                    profile();
                    break;
                case 3:
                    break;
                default:
                    cout << "Enter a valid input." << endl;
                }
            } while (select != 3);
        }
    }
};

void Account::details()
{
    cout << "Enter your name: " << endl;
    getline(cin, Name);
    getline(cin, Name);
    fflush(stdin);
    cout << "Enter your Father Name: " << endl;
    getline(cin, FatherName);
    fflush(stdin);
    cout << "Enter your Mother Name: " << endl;
    getline(cin, MotherName);
    fflush(stdin);
    cout << "Enter your Occupation: " << endl;
    getline(cin, Occupation);
    fflush(stdin);
}

void Account::username()
{
    cout << "Enter your Username: " << endl;
    getline(cin, Username);
    fflush(stdin);
}

void Account::password()
{
    cout << "Enter your Password: " << endl;
    getline(cin, Password);
    fflush(stdin);
}

void Account::confirm()
{
    cout << "Confirm your Password: " << endl;
    getline(cin, Confirm);
    fflush(stdin);
}

void Account::dob()
{
    cout << "Enter your Date Of Birth:" << endl;
    cin >> date;
    cout << "Enter your Month Of Birth:" << endl;
    cin >> month;
    cout << "Enter your Year Of Birth:" << endl;
    cin >> year;
}

void Account::address()
{
    cout << "Enter your Country: " << endl;
    getline(cin, country);
    getline(cin, country);
    fflush(stdin);
    cout << "Enter your State: " << endl;
    getline(cin, state);
    fflush(stdin);
    cout << "Enter your City: " << endl;
    getline(cin, city);
    fflush(stdin);
    cout << "Enter your Landmark: " << endl;
    getline(cin, landmark);
    fflush(stdin);
    cout << "Enter your pincode: " << endl;
    cin >> pincode;
}

void Account::gender()
{
    // int select;
    // do
    // {
    cout << "Type your Gender: " << endl;
    // cout << "choose your Gender: " << endl;
    cout << "1) Male" << endl
         << "2) Female" << endl
         << "3) LGBT" << endl;
    // cin >> select;
    getline(cin, Gender);
    getline(cin, Gender);
    //     switch (select)
    //     {
    //     case 1:
    //         Gender = "Male";
    //         break;
    //     case 2:
    //         Gender = "Female";
    //         break;
    //     case 3:
    //         Gender = "LGBT";
    //         break;
    //     default:
    //         cout << "Enter a valid option." << endl;
    //         break;
    //     }
    // } while (select != 1||select !=2||select != 3);
}

void Account::aadharNo()
{
    cout << "Enter your Aadhar Number: " << endl;
    cin >> AadharNo;
    fflush(stdin);
}

void Account::email()
{
    cout << "Enter your Email: " << endl;
    getline(cin, Email);
    fflush(stdin);
}

void Account::contact()
{
    cout << "Enter your Contact Number 1: " << endl;
    cin >> contact1;
    cout << "Enter your Contact Number 2: " << endl;
    cin >> contact2;
}

void Account ::profile()
{
    cout << "Name:" << Name << endl;
    cout << "Father Name:" << FatherName << endl;
    cout << "Mother Name:" << MotherName << endl;
    cout << "Date Of Birth:" << date << " / " << month << " / " << year << " " << endl;
    cout << "Gender:" << Gender << endl;
    cout << "Occupation:" << Occupation << endl;
    cout << "Username:" << Username << endl;
    cout << "Address:" << endl;
    cout << "Country:" << country << endl;
    cout << "State:" << state << endl;
    cout << "City:" << city << endl;
    cout << "LandMark:" << landmark << endl;
    cout << "Pincode:" << pincode << endl;
    cout << "Aadhar number:" << AadharNo << endl;
    cout << "Contact Details:" << endl;
    cout << "Contact 1:" << contact1 << endl;
    cout << "Contact 2:" << contact2 << endl;
    cout << "E-Mail:" << Email << endl;
    cout << "Balance:" << Balance << endl;
}
void Account ::transection()
{
    Balance = 0;
    int select;
    do
    {
        cout << "Select:" << endl;
        cout << "1) Debit." << endl
             << "2) Credit." << endl
             << "3) Balance." << endl
             << "4) Exit." << endl;
        cin >> select;
        fflush(stdin);
        switch (select)
        {
        case 1:
            Deposite();
            break;
        case 2:
            Withdrawl();
            break;
        case 3:
            balance();
            break;
        case 4:
            break;
        default:
            cout << "Entered option is not correct so entered again." << endl;
            break;
        }
    } while (select != 4);
}
void Account ::Deposite()
{
    cout << "Enter amount to be deposited:" << endl;
    cin >> debit;
    Balance = Balance + debit;
}
void Account ::Withdrawl()
{
    cout << "Enter amount to be withdrawl:" << endl;
    cin >> credit;
    Balance = Balance - credit;
}
void Account ::balance()
{
    cout << "Balance:" << Balance << endl;
}
int main()
{
    int option;
    do
    {
        cout << "Enter option:" << endl;
        cout << "1) Create Account." << endl
             << "2) Account Login." << endl
             << "3) Exit." << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            CreateAccount();
            break;
        case 2:
            Accountlogin();
            break;
        default:
            cout << "Enter correct option." << endl;
            break;
        }
    } while (option != 3);

    return 0;
}