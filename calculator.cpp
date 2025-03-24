#include<iostream>
using namespace std;

int add(int x,int y){

    // cout<<"sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
    return x+y;
}
int sub(int x,int y){

    // cout<<"sub of "<<x<<" and "<<y<<" is "<<x-y<<endl;
    return x-y;
}
int mul(int x,int y){

    // cout<<"mul of "<<x<<" and "<<y<<" is "<<x*y<<endl;
    return x*y;
}
int divid(int x,int y){

    // cout<<"divid of "<<x<<" and "<<y<<" is "<<x/y<<endl;
    return x/y;
}
    int par(int x,int y){

        // cout<<"parcentage of "<<x<<" and "<<y<<" is "<<x%y<<endl;
        return x%y;
    }




int main ()
{ int Choice;
    do
    {
        cout << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the Exit" << endl;
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            int a, b;
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter the second number : ";
            cin >> b;
            cout << "sum of " << a << " and " << b << " is " << add(a, b) << endl;
            break;

        case 2:
            int c, d;
            cout << "Enter the first number : ";
            cin >> c;
            cout << "Enter the second number : ";
            cin >> d;
            cout << "Subtractin of " << c << " and " << d << " is " << sub(c, d) << endl;
            break;

        case 3:
            int e, f;
            cout << "Enter the first number : ";
            cin >> e;
            cout << "Enter the second number : ";
            cin >> f;
            cout << "Multiplication of " << e << " and " << f << " is " << mul(e, f) << endl;
            break;

        case 4:
            float g, h;
            cout << "Enter the first number : ";
            cin >> g;
            cout << "Enter the second number : ";
            cin >> h;
            cout << "Division of " << g << " and " << h << " is " << divid(g, h) << endl;
            break;

        case 5:
            int i, j;
            cout << "Enter the first number : ";
            cin >> i;
            cout << "Enter the second number : ";
            cin >> j;
            cout << "Par of " << i << " and " << j << " is " << par(i, j) << endl;
            break;

        case 0:
            cout << "Exiting the program... ";
        default:
            break;
        }
    } while (Choice != 0);

    return 0;
}
