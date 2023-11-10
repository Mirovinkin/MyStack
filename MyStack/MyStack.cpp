// MyStack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>
#include <fstream>
#include<Stack>

using namespace std;


template<typename T>
class PrivateStacker
{
private:
    stack<T> _values;
public:
    PrivateStacker() {};
    PrivateStacker(const T& value) {
        _values.push(value);
    }
    void push(const T& value) {
        try {
            if (Overflowed()) {
                throw overflow_error("The Stack is full");
            }
        }
        catch (const overflow_error& err) {
            cerr<< err.what();
        }
        _values.push(value);
    }

    bool Overflowed() {
        return _values.size() == 10 ? true : false;
    }
};
int main()
{
    setlocale(LC_ALL, "RUS");

    PrivateStacker<int> stack1;

    for (int i = 0; i < 11; i++)
    {
        stack1.push(i + 1);
    }
}
