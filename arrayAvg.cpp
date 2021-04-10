// Third C++ Program
// Calculate Average of Numbers Using Arrays

#include <iostream> 
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should be in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}

/*
what other things can i #include?
why use cin on the for loop?
what other things can i include instead of endl?
why do i put n[100]? is that how many items the array can hold?
can i define decimal places for sum in it's creation?

*/