#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int week = 7;
    int sum = 0;

    int sales[7];

    for (int i = 0; i < week; i++)
    {
        cout << "Enter Sale: $";
        int saleInput;
        cin >> saleInput;

        sales[i] = saleInput;
        sum += sales[i];
    }
    
    
    int totalSum = sum;
    cout << "Total sales of the month." << endl;
    cout <<"$ " << totalSum << endl;


    return 0;
}

