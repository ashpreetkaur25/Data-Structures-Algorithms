//        1
//      1   1
//    1   2   1
//  1   3   3   1



#include<iostream>
using namespace std;
 
int main()
{
    int rows;
    cin >> rows;
    cout << endl;
 
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}
