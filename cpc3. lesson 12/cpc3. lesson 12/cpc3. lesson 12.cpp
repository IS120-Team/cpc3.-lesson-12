//cpc3. lesson 12
#include <iostream>
using namespace std;

int depend(int a, int sum1)
{
    if (a % 5 == 0)
    {
        sum1 += a;
    }
    return sum1;
}

int main()
{
    setlocale(LC_ALL, "rus");

    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;
    int sum = 0;

    cout << "¬ведите первое число: ";
    cin >> firstNumber;
    cout << "¬ведите второе число: ";
    cin >> secondNumber;
    cout << "¬ведите третье число: ";
    cin >> thirdNumber;

    sum = depend(firstNumber, sum);
    sum = depend(secondNumber, sum);
    sum = depend(thirdNumber, sum);

    cout << "—умма чисел, которые дел€тс€ на 5, равна " << sum << endl;
}