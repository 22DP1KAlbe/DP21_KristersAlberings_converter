#include <iostream>

using namespace std;
int main() {
    char startValue;
    char selectAgain;
    float converter(void);
    start:
    cout<< "********* Welcome to the Currency Calculator *********\n"<< endl;
    cout<< "You can choose from these currencies: USD,EUR,GBP,CAD,INR,RUB"<< endl;
    cout<< "USD EUR GBP CAD INR RUB\n(a) (b) (c) (d) (e) (f)"<< endl;
    cout<< "Type in the letter of the currency you want to convert"<< endl;
    cout<< "Press s to start"<< endl;
    selectChoice:
    cin>>startValue;
    if (startValue=='s' || startValue=='S'){
        float finalValue = converter();
        cout<<"Result is "<<finalValue<< endl;
        cout<<"Do you want to use the converter again?y or n"<< endl;
        typeAgain:
        cin>>selectAgain;
        if (selectAgain== 'y' || selectAgain=='Y'){
            goto start;
        }
        else if (selectAgain== 'n' || selectAgain=='N') {
            cout<<"Thank you for using the converter!"<<endl;
        }
        else{
            cout<<"You have entered the wrong value, please type again"<<endl;
            goto typeAgain;
        }

    }

    else{
        cout<<"You have entered the wrong value, please type s"<<endl;
        goto selectChoice;
    }
}

float converter() {
    char currName1;
    char currName2;
    float currency1;
    float currency2;
    currLevel:
    cout << "Enter the currency you want to convert:" << endl;
    cin >> currName1;
    cout << "Enter the value for this currency:" << endl;
    cin >> currency1;

    switch (currName1) {
        case 'a':
        currLevel1:
            cout << "Enter the currency you want to convert in" << endl;
            cin >> currName2;
            if (currName2 == 'a' || currName2 == 'A') {
                currency2 = currency1 * 1;
            } else if (currName2 == 'b' || currName2 == 'B') {
                currency2 = currency1 * 1.01;
            } else if (currName2 == 'c' || currName2 == 'C') {
                currency2 = currency1 * 0.87;
            } else if (currName2 == 'd' || currName2 == 'D') {
                currency2 = currency1 * 1.36;
            } else if (currName2 == 'e' || currName2 == 'E') {
                currency2 = currency1 * 82.73;
            } else if (currName2 == 'f' || currName2 == 'F') {
                currency2 = currency1 * 62.21;
            } else {
                cout << "You have entered the wrong value! Please type again" << endl;
                goto currLevel1;
            }
            break;

        case 'b':
        currLevel2:
            cout << "Enter the currency you want to convert in" << endl;
            cin >> currName2;
            if (currName2 == 'a' || currName2 == 'A') {
                currency2 = currency1 * 0.98;
            } else if (currName2 == 'b' || currName2 == 'B') {
                currency2 = currency1 * 1;
            } else if (currName2 == 'c' || currName2 == 'C') {
                currency2 = currency1 * 0.86;
            } else if (currName2 == 'd' || currName2 == 'D') {
                currency2 = currency1 * 1.34;
            } else if (currName2 == 'e' || currName2 == 'E') {
                currency2 = currency1 * 81.70;
            } else if (currName2 == 'f' || currName2 == 'F') {
                currency2 = currency1 * 61.51;
            } else {
                cout << "You have entered the wrong value! Please type again" << endl;
                goto currLevel2;
            }
            break;

        case 'c':
        currLevel3:
            cout << "Enter the currency you want to convert in" << endl;
            cin >> currName2;
            if (currName2 == 'a' || currName2 == 'A') {
                currency2 = currency1 * 1.14;
            } else if (currName2 == 'b' || currName2 == 'B') {
                currency2 = currency1 * 1.16;
            } else if (currName2 == 'c' || currName2 == 'C') {
                currency2 = currency1 * 1;
            } else if (currName2 == 'd' || currName2 == 'D') {
                currency2 = currency1 * 1.56;
            } else if (currName2 == 'e' || currName2 == 'E') {
                currency2 = currency1 * 94.82;
            } else if (currName2 == 'f' || currName2 == 'F') {
                currency2 = currency1 * 71.31;
            } else {
                cout << "You have entered the wrong value! Please type again" << endl;
                goto currLevel3;
            }
            break;

        case 'd':
        currLevel4:
            cout << "Enter the currency you want to convert in" << endl;
            cin >> currName2;
            if (currName2 == 'a' || currName2 == 'A') {
                currency2 = currency1 * 0.73;
            } else if (currName2 == 'b' || currName2 == 'B') {
                currency2 = currency1 * 0.74;
            } else if (currName2 == 'c' || currName2 == 'C') {
                currency2 = currency1 * 0.63;
            } else if (currName2 == 'd' || currName2 == 'D') {
                currency2 = currency1 * 1;
            } else if (currName2 == 'e' || currName2 == 'E') {
                currency2 = currency1 * 60.68;
            } else if (currName2 == 'f' || currName2 == 'F') {
                currency2 = currency1 * 45.64;
            } else {
                cout << "You have entered the wrong value! Please type again" << endl;
                goto currLevel4;
            }
            break;

        case 'e':
        currLevel5:
            cout << "Enter the currency you want to convert in" << endl;
            cin >> currName2;
            if (currName2 == 'a' || currName2 == 'A') {
                currency2 = currency1 * 0.012;
            } else if (currName2 == 'b' || currName2 == 'B') {
                currency2 = currency1 * 0.0122;
            } else if (currName2 == 'c' || currName2 == 'C') {
                currency2 = currency1 * 0.01;
            } else if (currName2 == 'd' || currName2 == 'D') {
                currency2 = currency1 * 0.016;
            } else if (currName2 == 'e' || currName2 == 'E') {
                currency2 = currency1 * 1;
            } else if (currName2 == 'f' || currName2 == 'F') {
                currency2 = currency1 * 0.75;
            } else {
                cout << "You have entered the wrong value! Please type again" << endl;
                goto currLevel5;
            }
            break;

        case 'f':
        currLevel6:
            cout << "Enter the currency you want to convert in" << endl;
            cin >> currName2;
            if (currName2 == 'a' || currName2 == 'A') {
                currency2 = currency1 * 0.016;
            } else if (currName2 == 'b' || currName2 == 'B') {
                currency2 = currency1 * 0.0162;
            } else if (currName2 == 'c' || currName2 == 'C') {
                currency2 = currency1 * 0.014;
            } else if (currName2 == 'd' || currName2 == 'D') {
                currency2 = currency1 * 0.021;
            } else if (currName2 == 'e' || currName2 == 'E') {
                currency2 = currency1 * 1.32;
            } else if (currName2 == 'f' || currName2 == 'F') {
                currency2 = currency1 * 1;
            } else {
                cout << "You have entered the wrong value! Please type again" << endl;
                goto currLevel6;
            }
            break;

        default:{
            cout << "You have entered the wrong value! Please type again" << endl;
            goto currLevel;
            break;
        }

    }
    return currency2;
}



