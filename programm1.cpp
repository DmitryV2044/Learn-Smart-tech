#include <iostream>
#include <cstdlib>
using namespace std;

void Solution1(){
    int numAmount;
    cout<<"До скольки считаем? ";
    cin>>numAmount;

    for (int i = 0; i < numAmount; i++)
    {
        if(i%4 == 3){
            cout<<"число с остатком 3 при делении на 4: "<<i<<endl;
        }
    }
}

void Fibonacci(){
    int numAmount;
    cout<<"До скольки считаем? ";
    cin>>numAmount;

    long currentNumber = 1;
    long previousNumber = 0;

    long res;

    cout<<"числа фибоначи: ";
    for (long i = 0; i < numAmount; i++)
    {
        res = currentNumber + previousNumber;

        previousNumber = currentNumber;

        currentNumber = res;

        cout<<res<<", ";
    }

    cout<<"end"<<endl;
}

int main(){
    int whichTask;
    cout<<"какую задачу решаем? ";
    cin>>whichTask;
    switch (whichTask)
    {
    case 1:
        Solution1();
        break;
    case 2:
        Fibonacci();
        break;
    default:
        break;
    }
    return 0;
}