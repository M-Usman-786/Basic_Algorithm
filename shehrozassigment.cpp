#include <iostream>
using namespace std;
int main()
{
    int choice, quantity, bill, discount;
    cout << "--------Wellcome To TeleMart--------\n";
    cout << "Press 1111 for Keyboard\n";
    cout << "Press 1112 for Mouse\n";
    cout << "Press 1113 for Monitor\n";
    cout << "Press 1114 for Speaker\n";
    cout << "Enter your choice\n";
    cin >> choice;
    cout << "Please enter quantity you want to buy\n";
    cin >> quantity;
    if (choice == 1111)
    {
        cout << "Product code : " << choice << endl;
        cout << "Product name : Keyboard\n";
        cout << "Product price per unit : 3000/unit\n";
        cout << "Product quantity : " << quantity << endl;
        bill = 3000 * quantity;
        cout << "Total bill : " << bill << endl;
        if (bill >= 5000)
        {
            discount = float(0.1 * bill);
            cout << "Discount : " << float(0.1 * bill) << endl;
        }
        else
            cout << "Discout is applicable more than 5000\n";
        cout << "Total payable : " << bill - discount << endl;
        cout << "---------Thank you for shopping __ Please visit again---------\n";
    }
    else if (choice == 1112)
    {
        cout << "Product code : " << choice << endl;
        cout << "Product name : Mouse\n";
        cout << "Product price per unit : 2000/unit\n";
        cout << "Product quantity : " << quantity << endl;
        bill = 2000 * quantity;
        cout << "Total bill : " << bill << endl;
        if (bill >= 5000)
        {
            discount = float(0.1 * bill);
            cout << "Discount : " << float(0.1 * bill) << endl;
        }
        else
            cout << "Discout is applicable more than 5000\n";
        cout << "Total payable : " << bill - discount << endl;
        cout << "---------Thank you for shopping __ Please visit again---------\n";
    }
    else if (choice == 1113)
    {
        cout << "Product code : " << choice << endl;
        cout << "Product name : Monitor\n";
        cout << "Product price per unit : 30,000/unit\n";
        cout << "Product quantity : " << quantity << endl;
        bill = 30000 * quantity;
        cout << "Total bill : " << bill << endl;
        if (bill >= 5000)
        {
            discount = float(0.1 * bill);
            cout << "Discount : " << float(0.1 * bill) << endl;
        }
        else
            cout << "Discout is applicable more than 5000\n";
        cout << "Total payable : " << bill - discount << endl;
        cout << "---------Thank you for shopping __ Please visit again---------\n";
    }
    else if (choice == 1114)
    {
        cout << "Product code : " << choice << endl;
        cout << "Product name : Speaker\n";
        cout << "Product price per unit : 10,000/unit\n";
        cout << "Product quantity : " << quantity << endl;
        bill = 10000 * quantity;
        cout << "Total bill : " << bill << endl;
        if (bill >= 5000)
        {
            discount = float(0.1 * bill);
            cout << "Discount : " << float(0.1 * bill) << endl;
        }
        else
            cout << "Discout is applicable more than 5000\n";
        cout << "Total payable : " << bill - discount << endl;
        cout << "---------Thank you for shopping __ Please visit again---------\n";
    }
    else
        cout << "You enterd the weong choice\n";
    return 0;
}