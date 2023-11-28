#include <iostream>
#include <fstream>
#include<string>

using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    ifstream fin;
    string filename = "Input.txt";
    fin.open(filename);
    if (!fin.is_open()) { throw "Исключение: файл " + filename + " не найден"; }
    string str[100];
    string c;
    char ch;
    int count = 0;
    while (!fin.eof()) {
        fin.get(ch);
        c = ch;
        if (!(c == "." || c == "?" || c == "!" || c == "\"" || c == "\t" || c == "\n" || c == " "))
            while (!fin.eof()) {
                str[count] += c;
                fin.get(ch);
                c = ch;
                if ((c == "." || c == "?" || c == "!" || c == "\"")) {
                    if (!(str[count].find('<<') != string::npos)) // проверка на запятую
                    {
                        cout << "" << endl;
                    }
                    else { cout << str[count] << endl; }
                    count++;
                    break;
                }
            }
    }
    fin.close();
}