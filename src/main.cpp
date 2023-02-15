#include <iostream>
#include <string>
using namespace std;

int main()
{
    label_again:

    double num1;
    double num2;
    string op;
    double result;
    int todo;

    system("clear");

    cout << "variable 1 = ";
    cin >> num1;
    cout << "variable 2 = ";
    cin >> num2;
    cout << "[+|-|x|:]  = ";
    cin >> op;

    if (op == "+") {result = num1 + num2;}
    else if (op == "-") {result = num1 - num2;}
    else if (op == "x") {result = num1 * num2;}
    else if (op == ":") {result = num1 / num2;}
    else {cout << "Wrong Operator" << "\n";}

    cout << num1 << " " << op << " " << num2 << " " << "=" << " " << result << "\n";

    label_todo:

    cout << "Again? [1(exit) | 2(again)] : ";
    cin >> todo;

    if (todo == 1) {exit(0);}
    else if (todo == 2) {goto label_again;}
    else {cout << "wrong option!" << "\n"; goto label_todo;}

    return 0;
}