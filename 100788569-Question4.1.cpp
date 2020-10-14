#include <iostream>
using namespace std;

int evenOddCalc(int num1) { //function to check if it is even or not by seeing if there is a remainder when dividing by 2
   bool evenOdd1 = num1 % 2;
   return evenOdd1;
}
float primeCalc(int num1) { // fubctiob ti see if it is prime or not by dividing it by every number up to half the value and seeing if any give a whole number
    bool primeStatus = true;
    int primeCheck;
    for (primeCheck = 2; primeCheck <= num1 / 2; primeCheck++) {
    if (num1 % primeCheck == 1) {
        primeStatus = false;
        break;
    }
    }
    return primeStatus;
}
int factorialCalc(int num1) { //multiplies by every number up until the number
    int j = 1;
    int i = 1;
    while (i <= num1) {
        j = i * j;
        i++;
    }
    return j;
}

int main()
{
    int num1;
    bool prime;
    bool evenodd;
    int factorial;
    int loop = 1;
    while (loop != 0) {
        cout << "Please enter your number: "; //use inputs number
        cin >> num1;

        if (num1 == 0) { // special case for 0
            cout << "You entered 0" << endl << "It is neither prime nor composite" << endl << "It is neither even nor odd";
            cout << endl << "Its factorial is 1";
        }

        if (num1 == 1) { //special case for one
            cout << "You entered 1" << endl << "It is neither prime nor composite" << endl << "It is an odd number";
            cout << endl << "Its factorial is 1";
        }
    
        if (num1 != 0 && num1 != 1) { //for nonspecial cases
            cout << "You entered " << num1 << endl;
            prime = primeCalc(num1);
            evenodd = evenOddCalc(num1);
            factorial = factorialCalc(num1);
            if (prime == false) { //says if it is prime or not
                cout << "It is a composite number" << endl;
            }
            else {
                cout << "It is a prime number" << endl;
            }
            if (evenodd == 1) { //says if it is even or not
                cout << "It is an odd number" << endl;
            }
            else {
                cout << "It is an even number" << endl;
            }
            cout << "Its factorial is " << factorial; //states the factorial

            cout << "If you wish to use this calculator again input 1 if you would like to end your session input 0:   ";
            cin >> loop; //loop to see if they want to go again

        }
    }
}   