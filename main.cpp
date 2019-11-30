#include <iostream>

using namespace std;

double result;
double add(double x, double y)
{

    result=x+y;
    return result;
}

double sub(double x, double y)
{
    result=x-y;
    return result;
}

double multi(double x, double y)
{
    result=x*y;
    return result;
}

double divide(double x, double y)
{
    result=x/y;
    return result;
}

int main()
{

    double a,b;
    char operation;
    int exit;

    cout<<"**Welcome to Calculator!**"<<endl<<endl;
    cout<<"Your choice: "<<endl;
    cout<<"1-Use calculator"<<endl;
    cout<<"0-Exit calculator"<<endl;
    cin>>exit;

    while(exit!=0)
    {

        cout<<"Enter your first number: "<<endl;
        cin>>a;
        cout<<"Enter your second number: "<<endl;
        cin>>b;
        cout<<"Enter your operation(+,-,*,/):"<<endl;
        cin>>operation;


        switch(operation)
        {
            case '+':
                add(a,b);
                break;
            case '-':
                sub(a,b);
                break;
            case '*':
                multi(a,b);
                break;
            case '/':
                divide(a,b);
                break;
            default:
                cout<<"Unknown operation!"<<endl;
                break;
        }

        cout<<"Result: "<<result<<endl<<endl;

        cout<<"------------------------------------------"<<endl;
        cout<<"Continue using calculator?: "<<endl;
        cout<<"1-Use calculator"<<endl;
        cout<<"0-Exit calculator"<<endl;
        cin>>exit;
    }

    cout<<"------------------------------------------"<<endl;
    cout<<"**End of the program!**"<<endl;
    cout<<"Thank you for using our calculator!"<<endl;
    return 0;
}
