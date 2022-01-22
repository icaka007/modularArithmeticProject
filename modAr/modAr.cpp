#include<math.h>
#include <iostream>
using namespace std;
int checkNumFor11(unsigned, unsigned);
int greatestCommonDivisor(int, int);
bool coprime(int, int);
int fillUparrayWithZn(int);
int addingElementsOfZn(int);
int substractionOfElementsFromZn(int);
int multiplicationOfElementsFromZn(int);
void pairsOfReciprocalNumsFromZn(unsigned);
int findTheReciproticNumberOfANumberFromZn(int, int);
int divisionOfNumbersFromZn(int);
int checkNum(unsigned, unsigned);
int bringANumberFromZnToAPower(unsigned);
int bringANumberFromZnToAPowerUsingSecondMethod(unsigned);
bool checkIfANumberFromZnIsAPrimitiveRoot(unsigned, unsigned);
int findAllPrimitiveRootsInZn(unsigned);
int calculatingADiscreteLogarithm(unsigned);
bool isPrime(unsigned);
void checkIfZnIsAResidualField(unsigned);
void menu();
int main()
{
    menu();
    int n;

    do {
        cout << "Press which task you want to solve,the number must be from 1 to 13 : ";
        cin >> n;
    } while (!(n >= 1 && n <= 13));
    cout << endl;

    int znNums;
    cout << "Press Zn: ";
    cin >> znNums;



    switch (n) {
    case 1: fillUparrayWithZn(znNums); break;
    case 2:  addingElementsOfZn(znNums); break;
    case 3: substractionOfElementsFromZn(znNums); break;
    case 4: multiplicationOfElementsFromZn(znNums); break;
    case 5:   pairsOfReciprocalNumsFromZn(znNums); break;
    case 6:int generalChoice;
        cout << "Press to which number you want to find its reciprocal: ";
        cin >> generalChoice;
        cout << "The reciprotic number of " << generalChoice << " is: ";
        cout << findTheReciproticNumberOfANumberFromZn(generalChoice, znNums); break;
    case 7:  divisionOfNumbersFromZn(znNums); break;
    case 8:  bringANumberFromZnToAPower(znNums); break;
    case 9: bringANumberFromZnToAPowerUsingSecondMethod(znNums); break;
    case 10:
        int number;
        cout << "Enter which number you want to ckeck whether it is a primitive num: ";
        cin >> number;

        checkIfANumberFromZnIsAPrimitiveRoot(number, znNums); break;
    case 11: findAllPrimitiveRootsInZn(znNums); break;
    case 12: calculatingADiscreteLogarithm(znNums); break;
    case 13: checkIfZnIsAResidualField(znNums); break;
    }

}

int checkNumFor11(unsigned num, unsigned mod) {
    do {
        std::cout << "Number must be in range from 1 to " << mod - 1 << std::endl;
        std::cin >> num;
    } while ((num < 1) || (num >= mod));

    return num;
}

int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return a;
    return greatestCommonDivisor(b, a % b);
}

bool coprime(int a, int b) {

    if (greatestCommonDivisor(a, b) == 1)
        return true;
    //co-prime
    else
        return false;
    //not co-prime
}

int fillUparrayWithZn(int Zn)
{
    int* array = new int[Zn];
    for (int i = 0; i < Zn; i++)
    {
        array[i] = i;

    }
    for (int i = 0; i < Zn; i++)
    {
        cout << array[i] << " ";

    }

    if (array != NULL)
    {
        delete[]array;
        array = NULL;
    }
    return 0;
}

int addingElementsOfZn(int Zn)
{
    int* array = new int[Zn];
    for (int i = 0; i < Zn; i++)
    {
        array[i] = i;

    }
    for (int i = 1; i < Zn; i++)
    {
        for (int j = 2; j < Zn; j++)
        {
            if (i < j)
                cout << i << '+' << j << '=' << (i + j) % Zn << " ";
        }

    }

    if (array != NULL)
    {
        delete[]array;
        array = NULL;
    }
    return 0;
}

int substractionOfElementsFromZn(int Zn)
{
    int* array = new int[Zn];
    for (int i = 0; i < Zn; i++)
    {
        array[i] = i;

    }
    for (int i = 1; i < Zn; i++)
    {
        for (int j = 2; j < Zn; j++)
        {
            if (i < j)
                cout << i << '-' << j << '=' << (i - j) + Zn << " ";
        }

    }

    if (array != NULL)
    {
        delete[]array;
        array = NULL;
    }
    return 0;
}

int multiplicationOfElementsFromZn(int Zn)
{
    int* array = new int[Zn];
    for (int i = 0; i < Zn; i++)
    {
        array[i] = i;

    }
    for (int i = 1; i < Zn; i++)
    {
        for (int j = 2; j < Zn; j++)
        {
            if (i <= j)
                cout << i << '*' << j << '=' << (i * j) % Zn << " ";
        }

    }

    if (array != NULL)
    {
        delete[]array;
        array = NULL;
    }
    return 0;
}

void pairsOfReciprocalNumsFromZn(unsigned Zn) {

    int** arr = new int* [2];
    for (int i = 0; i < 2; i++)
    {
        arr[i] = new int[Zn];
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < Zn; j++)
        {
            arr[0][j] = j;
        }
    }

    int cnt = 0;
    int z = 0;
    int h = 0;
    for (int i = 0; i < Zn; i++)
    {
        for (int j = 0; j < Zn; j++)
        {
            if ((i * j % Zn) == 1) {
                z = j;
                cnt++;
            }
        }
        if (cnt == 0)
            arr[1][h] = 0;
        else arr[1][h] = z;

        cnt = 0;
        h++;
    }
    cout << "If the number does not have a reciprotic one, 0 will be written below" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < Zn; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int findTheReciproticNumberOfANumberFromZn(int num, int znNums) {
    int cnt = 0;
    int z = 0;
    for (int i = num; i <= num; i++)
    {
        for (int j = 0; j < znNums; j++)
        {
            if ((i * j % znNums) == 1) {
                z = j;
                cnt++;
            }
        }
    }
    if (cnt == 0)
        return -1;
    else return z;

}

int divisionOfNumbersFromZn(int Zn)
{
    int** arr = new int* [2];
    for (int i = 0; i < 2; i++)
    {
        arr[i] = new int[Zn];
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < Zn; j++)
        {
            arr[0][j] = j;
        }
    }

    int cnt = 0;
    int z = 0;
    int h = 0;
    for (int i = 0; i < Zn; i++)
    {
        for (int j = 0; j < Zn; j++)
        {
            if ((i * j % Zn) == 1) {
                z = j;
                cnt++;
            }
        }
        if (cnt == 0)
            arr[1][h] = 0;
        else arr[1][h] = z;

        cnt = 0;
        h++;
    }


    for (int i = 1; i < Zn; i++)
    {
        for (int j = i + 1; j < Zn; j++)
        {

            cout << i << "/" << j << "= : ";
            if (arr[1][j] == 0)
                cout << '-';
            else cout << (i * (arr[1][j])) % Zn;
            cout << endl;

        }
    }
    return 0;

}

int checkNum(unsigned num, unsigned mod) {

    do {
        cout << "Number must be in range from 0 to " << mod - 1 << endl;
        cin >> num;
    } while ((num < 0) || (num >= mod));

    return num;
}

int bringANumberFromZnToAPower(unsigned mod) {




    unsigned choiceN = 0, power, powerCopy, temp, result = 0, cnt = 1, remain;
    std::cout << "Enter a num which you want to bring its power: " << std::endl;
    choiceN = checkNum(choiceN, mod);
    std::cout << "Enter the power: " << std::endl;
    std::cin >> power;

    powerCopy = power;
    for (unsigned i = 1; i <= power; i++) {
        temp = (pow(choiceN, i) + 0.5);
        remain = temp % mod;

        if (remain == 1) {
            cnt = i;
            break;
        }
    }

    if (cnt == 1) {
        temp = (pow(choiceN, power) + 0.5);
        result = temp % mod;
        cout << choiceN << " ^ " << power << " = " << result % mod << " (mod " << mod << ")" << std::endl;
        return 0;
    }

    powerCopy = power % cnt;

    temp = (pow(choiceN, powerCopy) + 0.5);
    result = temp % mod;
    cout << choiceN << " ^ " << power << " = " << result << " (mod " << mod << ")" << endl;

    return 0;
}

int bringANumberFromZnToAPowerUsingSecondMethod(unsigned mod) {
    unsigned choiceN = 0, power, powerCopy, sz = 0;

    cout << "Enter a num which you want to bring its power: " << endl;
    choiceN = checkNum(choiceN, mod);
    cout << "Enter the power: ";
    cin >> power;

    powerCopy = power;

    while (powerCopy != 0) {
        powerCopy /= 2;
        sz++;
    }
    powerCopy = power;

    bool* decToBin = new bool[sz];

    for (int i = sz - 1; i >= 0; i--) {
        decToBin[i] = powerCopy % 2;
        powerCopy /= 2;
    }

    powerCopy = power;
    int remainFromPow = 1;
    long long unsigned result = 1;

    //10(10) = 1100100(2)
    unsigned k = sz - 1;
    for (int i = 0; i < sz; i++) {
        if (decToBin[i] == 1) { //64

            if (i == sz - 1) {
                remainFromPow = (int)(pow(choiceN, 1) + 0.5) % mod;
                result *= remainFromPow;

                k--;
            }
            else {

                powerCopy = (pow(2, k) + 0.5); //2^6
                powerCopy /= 2; //(2^6)/2 = 64/2 = 32
                remainFromPow = (int)(pow(choiceN, powerCopy) + 0.5) % mod;
                result *= (int)(pow(remainFromPow, 2) + 0.5);
                k--;
            }
        }
    }

    cout << choiceN << " ^ " << power << " = " << result % mod << " (mod " << mod << ")" << endl;




    if (decToBin != nullptr) {
        delete[] decToBin;
        decToBin = nullptr;
    }

    return 0;
}

bool checkIfANumberFromZnIsAPrimitiveRoot(unsigned num, unsigned mod) {
    /*
    std::cout<<"Enter num: "<<std::endl;
    num=checkNum(num,mod);
    */
    int* temp = new int[mod];


    for (int i = 1; i < mod; i++) {
        if (coprime(i, mod)) {
            temp[i] = i;
        }
        else {
            temp[i] = 0;
        }
    }

    int cnt = 0;

    for (int i = 1; i < mod; i++) {
        if (temp[i] > 0) {
            cnt++;
        }
    }

    int* arrPrime = new int[cnt];

    int j = 0;

    for (int i = 1; i < mod; i++) {
        if (temp[i] > 0) {
            arrPrime[j] = temp[i];
            j++;
        }
    }

    std::cout << std::endl;

    bool isPositive = false;
    j = 0;

    for (int i = 0; i < cnt; i++) {
        if (num == arrPrime[i]) {
            for (int k = 1; k < mod; k++) {
                unsigned reminder = (int)(pow(num, k) + 0.5) % mod;

                for (int j = 0; j < cnt; j++) {
                    if (reminder == arrPrime[j]) {
                        arrPrime[j] = -1;
                    }
                }
            }



            for (int i = 0; i < cnt; i++) {
                if (arrPrime[i] > 0) {
                    isPositive = true;
                    break;
                }
            }


        }
    }

    if (!(coprime(num, mod))) {
        std::cout << num << " IS NOT coprime with " << mod << std::endl;

        if (arrPrime != nullptr) {
            delete[] arrPrime;
            arrPrime = nullptr;
        }

        if (temp != nullptr) {
            delete[] arrPrime;
            temp = nullptr;
        }

        return false;
    }
    else {

        if (isPositive) {
            std::cout << num << " IS NOT a prime root." << std::endl;

            if (arrPrime != nullptr) {
                delete[] arrPrime;
                arrPrime = nullptr;
            }

            if (temp != nullptr) {
                delete[] arrPrime;
                temp = nullptr;
            }

            return false;

        }
        else {
            std::cout << num << " IS a prime root." << std::endl;

            if (arrPrime != nullptr) {
                delete[] arrPrime;
                arrPrime = nullptr;
            }

            if (temp != nullptr) {
                delete[] arrPrime;
                temp = nullptr;
            }
            return true;
        }
    }

}

int findAllPrimitiveRootsInZn(unsigned mod) {

    bool* allPrimitive = new bool[mod] {0};

    for (unsigned i = 1; i < mod; i++) { //1-6
        allPrimitive[i] = checkIfANumberFromZnIsAPrimitiveRoot(i, mod);
    }

    if (allPrimitive != nullptr) {
        delete[] allPrimitive;
        allPrimitive = nullptr;
    }

    return 0;
}

int calculatingADiscreteLogarithm(unsigned mod) {
    //g^x=b(mod n)
    //g-base
    //x-x
    //b-element
    //n-mod

    unsigned base = 0, element = 0;
    std::cout << "Enter the base of dlog: " << std::endl;
    base = checkNumFor11(base, mod);

    if (checkIfANumberFromZnIsAPrimitiveRoot(base, mod) && coprime(element, mod)) {

        std::cout << "Enter element from Zn: " << std::endl;
        element = checkNumFor11(element, mod);

        if (element == 1) {
            std::cout << "dlog from " << element << " with base " << base << " is: " << 0 << std::endl;
        }

        int* temp = new int[mod];

        for (unsigned i = 1; i < mod; i++) {
            if (coprime(i, mod)) {
                temp[i] = i;
            }
            else {
                temp[i] = 0;
            }
        }

        unsigned cnt = 0;

        for (unsigned i = 1; i < mod; i++) {
            if (temp[i] > 0) {
                cnt++;
            }
        }

        int* arrPrime = new int[cnt];

        unsigned j = 0;

        for (unsigned i = 1; i < mod; i++) {
            if (temp[i] > 0) {
                arrPrime[j] = temp[i];
                j++;
            }
        }

        for (unsigned i = 1; i < cnt; i++) {
            if ((int)(pow(base, i) + 0.5) % mod == element) {
                std::cout << "dlog from " << element << " with base " << base << " is: " << i << std::endl;
            }
        }



        if (arrPrime != nullptr) {
            delete[] arrPrime;
            arrPrime = nullptr;
        }

        if (temp != nullptr) {
            delete[] arrPrime;
            temp = nullptr;
        }

    }
    else {
       cout << "Result: " << -1 <<endl;
    }
return 0;
}

bool isPrime(unsigned mod) {

    if (mod == 1)
        return false;
    if (mod == 2)
        return true;

    for (int i = 2; i <= sqrt(mod); i++)
        if (mod % i == 0)
            return false;

    return true;
}

void checkIfZnIsAResidualField(unsigned mod) {
    if (isPrime(mod)) {
        cout << "Zn IS Fn" << endl;
    }
    else {
        cout << "Zn IS NOT Fn" << endl;
    }

    return;
}

void menu() {

    cout << " ____________________" << endl;
    cout << "| Modular aritmetics |" << endl;
    cout << "| ================== |" << endl;
    cout << "|        MENU        |" << endl;
    cout << "|____________________|" << endl;
cout << "1. All reminders from Zn" << endl;
    cout << "2. Addition of two elements from Zn " << endl;
    cout << "3. Subsraction of two elements from Zn " << endl;
    cout << "4. Multipclication of two elements from Zn " << endl;
    cout << "5. Finding all reciprotical numbers from Zn " << endl;
    cout << "6. Finding a reciprotical number to a number from Zn" << endl;
    cout << "7. Dividing numbers from Zn" << endl;
    cout << "8. Bring a number to a power X using the first algorithm" << endl;
    cout << "9. Bring a number to a power X using the second algorithm" << endl;
    cout << "10. finding if a number is a primitive root" << endl;
    cout << "11. finding all primitive roots of Zn" << endl;
    cout << "12. Calculation of discrete logarithm" << endl;
    cout << "13.checking if Zn is Fn? " << endl;
}