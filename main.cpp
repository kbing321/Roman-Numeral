//I took the full four hours to complete this code.  I was planning on adding code to make sure a number between 1 and 3,999 was input into both parts of the code.
//Not having that condition allows the user to input an incorrect number and roman numeral which causes the wrong output.
//I would have also tried to fix up the functions in order to shorten the overall code.
#include <iostream>
#include <string>
using namespace std;

//declare variables needed for each function and main
string decNum;
int i;

//function to perform conversion for the ones place of decimal number
void OnesPlace () {
    for (i = 0; i < decNum.size(); i++) {
        if (decNum.at(decNum.size() - 1) == '1') {
            decNum.replace(decNum.size() - 1,1, "I");
        }
        if (decNum.at(decNum.size() - 1) == '2') {
            decNum.replace(decNum.size() - 1,1, "II");
        }
        if (decNum.at(decNum.size() - 1) == '3') {
            decNum.replace(decNum.size() - 1,1, "III");
        }
        if (decNum.at(decNum.size() - 1) == '4') {
            decNum.replace(decNum.size() - 1,1, "IV");
        }
        if (decNum.at(decNum.size() - 1) == '5') {
            decNum.replace(decNum.size() - 1,1, "V");
        }
        if (decNum.at(decNum.size() - 1) == '6') {
            decNum.replace(decNum.size() - 1,1, "VI");
        }
        if (decNum.at(decNum.size() - 1) == '7') {
            decNum.replace(decNum.size() - 1,1, "VII");
        }
        if (decNum.at(decNum.size() - 1) == '8') {
            decNum.replace(decNum.size() - 1,1, "VIII");
        }
        if (decNum.at(decNum.size() - 1) == '9') {
            decNum.replace(decNum.size() - 1,1, "IX");
        }
    }
}

//function to perform conversion for the tens place decimal number
void TensPlace() {
    for (i = 0; i < decNum.size(); i++) {
        if (decNum.at(decNum.size() - 2) == '1') {
            decNum.replace(decNum.size() - 2, 1, "X");
        }
        if (decNum.at(decNum.size() - 2) == '2') {
            decNum.replace(decNum.size() - 2, 1, "XX");
        }
        if (decNum.at(decNum.size() - 2) == '3') {
            decNum.replace(decNum.size() - 2, 1, "XXX");
        }
        if (decNum.at(decNum.size() - 2) == '4') {
            decNum.replace(decNum.size() - 2, 1, "XL");
        }
        if (decNum.at(decNum.size() - 2) == '5') {
            decNum.replace(decNum.size() - 2, 1, "L");
        }
        if (decNum.at(decNum.size() - 2) == '6') {
            decNum.replace(decNum.size() - 2, 1, "LX");
        }
        if (decNum.at(decNum.size() - 2) == '7') {
            decNum.replace(decNum.size() - 2, 1, "LXX");
        }
        if (decNum.at(decNum.size() - 2) == '8') {
            decNum.replace(decNum.size() - 2, 1, "LXXX");
        }
        if (decNum.at(decNum.size() - 2) == '9') {
            decNum.replace(decNum.size() - 2, 1, "XC");
        }
        if (decNum.at(decNum.size() - 1) == '0') {
            decNum.erase(decNum.size() - 1, 1);
        }
        if (decNum.at(decNum.size() - 1) > 0) {
            OnesPlace();
        }
    }
}

//function to perform conversion for the hundreds place of decimal number
void HundredsPlace() {
    for (i = 0; i < decNum.size(); i++) {
        if (decNum.at(decNum.size() - 3) == '1') {
            decNum.replace(decNum.size() - 3, 1, "C");
        }
        if (decNum.at(decNum.size() - 3) == '2') {
            decNum.replace(decNum.size() - 3, 1, "CC");
        }
        if (decNum.at(decNum.size() - 3) == '3') {
            decNum.replace(decNum.size() - 3, 1, "CCC");
        }
        if (decNum.at(decNum.size() - 3) == '4') {
            decNum.replace(decNum.size() - 3, 1, "CD");
        }
        if (decNum.at(decNum.size() - 3) == '5') {
            decNum.replace(decNum.size() - 3, 1, "D");
        }
        if (decNum.at(decNum.size() - 3) == '6') {
            decNum.replace(decNum.size() - 3, 1, "DC");
        }
        if (decNum.at(decNum.size() - 3) == '7') {
            decNum.replace(decNum.size() - 3, 1, "DCC");
        }
        if (decNum.at(decNum.size() - 3) == '8') {
            decNum.replace(decNum.size() - 3, 1, "DCCC");
        }
        if (decNum.at(decNum.size() - 3) == '9') {
            decNum.replace(decNum.size() - 3, 1, "CM");
        }
        if (decNum.at(decNum.size() - 2) == '0') {
            decNum.erase(decNum.size() - 2, 1);
        }
        if (decNum.at(decNum.size() - 2) > 0) {
            TensPlace();
        }
    }
}

//function to perform conversion for the thousands place of decimal number
void ThousandsPlace() {
    for (i = 0; i < decNum.size(); i++) {
        if (decNum.at(decNum.size() - 4) == '1') {
            decNum.replace(decNum.size() - 4, 1, "M");
        }
        if (decNum.at(decNum.size() - 4) == '2') {
            decNum.replace(decNum.size() - 4, 1, "MM");
        }
        if (decNum.at(decNum.size() - 4) == '3') {
            decNum.replace(decNum.size() - 4, 1, "MMM");
        }
        if (decNum.at(decNum.size() - 3) == '0') {
            decNum.erase(decNum.size() - 3, 1);
        }
        if (decNum.at(decNum.size() - 2) > 0) {
            HundredsPlace();
        }
    }
}

int main() {
    //declare variables
    string romNum;
    string strIV = "IV";
    string strIX = "IX";
    string strXL = "XL";
    string strXC = "XC";
    string strCD = "CD";
    string strCM = "CM";
    int numeral = 0;
    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    //ask for and receive roman numeral from user
    cout << "What is the Roman numeral?";
    cin >> romNum;
    cout << endl;

    //make user roman numeral uppercase in case they put lowercase letters to allow code to still work
    for (i = 0; i < romNum.size(); i++) {
        romNum.at(i) = toupper(romNum.at(i));
    }

    //find potential subtractive pairs and remove from string so individual numerals are not repeated in the total
    //add the value of the pairs to the total if found
    for (i = 0; i < romNum.size(); i++) {
        if (romNum.find(strIV) != string::npos) {
            romNum.erase(romNum.find(strIV), strIV.length());
            numeral = numeral + (V - I);
        }
        if (romNum.find(strIX) != string::npos) {
            romNum.erase(romNum.find(strIX), strIX.length());
            numeral = numeral + (X - I);
        }
        if (romNum.find(strXL) != string::npos) {
            romNum.erase(romNum.find(strXL), strXL.length());
            numeral = numeral + (X - L);
        }
        if (romNum.find(strXC) != string::npos) {
            romNum.erase(romNum.find(strXC), strXC.length());
            numeral = numeral + (C - X);
        }
        if (romNum.find(strCD) != string::npos) {
            romNum.erase(romNum.find(strCD), strCD.length());
            numeral = numeral + (D - C);
        }
        if (romNum.find(strCM) != string::npos) {
            romNum.erase(romNum.find(strCM), strCM.length());
            numeral = numeral + (M - C);
        }
    }

    //add value of individual numerals to the total
    for (i = 0; i < romNum.size(); i++) {
        if (romNum.at(i) == 'I') {
            numeral = numeral + I;
        }
        if (romNum.at(i) == 'V') {
            numeral = numeral + V;
        }
        if (romNum.at(i) == 'X') {
            numeral = numeral + X;
        }
        if (romNum.at(i) == 'L') {
            numeral = numeral + L;
        }
        if (romNum.at(i) == 'C') {
            numeral = numeral + C;
        }
        if (romNum.at(i) == 'D') {
            numeral = numeral + D;
        }
        if (romNum.at(i) == 'M') {
            numeral = numeral + M;
        }
    }
    
    //Print the decimal form total of the roman numeral
    cout << "The Roman numeral as a decimal number is " << numeral << "." << endl << endl;

    //check the conversion by asking user for decimal number
    cout << "Let's check the conversion." << endl;
    cout << "What is the decimal number?";
    cin >> decNum;
    cout << endl;

    //convert one digit decimal numbers to roman numeral by calling function
    if (decNum.size() == 1) {
        OnesPlace();
    }

    //convert two digit decimal numbers to roman numeral by calling function
    if (decNum.size() == 2) {
        TensPlace();
    }

    //convert three digit decimal numbers to roman numeral by calling function
    if (decNum.size() == 3) {
        HundredsPlace();
    }

    //convert four digit decimal numbers to roman numeral by calling function
    if (decNum.size() == 4) {
        ThousandsPlace();
    }

    //output the converted decimal to roman numeral
    cout << "The decimal number " << numeral << " as a Roman Numeral is " << decNum << "." << endl;

    return 0;
}
