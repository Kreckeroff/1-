
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#define NOMINMAX
#include <Windows.h>
#define M_PI 3.14159265358979323846

using namespace std;
char alphabet(int num){
    char out[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    return out[num];
}
void other(int num, int fresh) {
    if (num < fresh) {
        std::cout << alphabet(num);
        return;
    }
    other(num / fresh, fresh);
    std::cout << alphabet(num % fresh);
}

/*
int return1(float a) {
return a;
}
*/

//StalinSort
template<class T>
void StalinSort(std::vector<T>& L)
{
    auto it = L.begin();//1,2,3,5,4,6,4,8,9 
    auto aux = it;
    while (it != L.end())
    {
        if (*it < *aux)
        {
            it = L.erase(it);
        }
        else
        {
            aux = it;
            it++;
        }
    }
}
double max_money(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    float tmp2 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j] - m[i][j + 1];
            if (tmp > tmp1) {
                tmp2 = tmp;

            }
            tmp1 = tmp;
            break;
        }
    }
    return tmp2;
}
double max_money_all(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j];
            tmp1 += tmp;
            break;
        }
    }
    return tmp1;
}
double max_clear_money_all(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j] - m[i][j + 1];
            tmp1 += tmp;
            break;
        }
    }
    return tmp1;
}
double max_commission_all(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i][j];
            tmp1 += tmp;
            break;
        }
    }
    return tmp1;
}
double max_commission(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    float tmp2 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i][j];
            if (tmp > tmp1) {
                tmp2 = tmp;

            }
            tmp1 = tmp;
            break;
        }
    }
    return tmp2;
}
double min_commission(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 10000000;
    float tmp2 = 0;
    for (int i = 2; i - 1<= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i-1][j];
            if (tmp < tmp1) {
                tmp2 = tmp;

            }
            tmp1 = tmp;
            break;
        }
    }
    return tmp2;
}
double min_money(double** m, int col2, int row1, float maxmoney) {
    float tmp2 = 0;
    for (int i = 1; i <= row1; row1--) {
        for (int j = 1; j <= col2;) {
            float tmp = m[row1][j] - m[row1][j + 1];
            if (tmp < maxmoney) {
                tmp2 = tmp;
            }
            maxmoney = tmp;
            break;
        }
    }
    return tmp2;
}
double comparisonmoney(double** m, int col2, int row1, float tmp2) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j] - m[i][j + 1];
            if (tmp2 == tmp) {
                tmp1 = i;
                return tmp1;
            }
            break;
        }
    }
}
double comparisoncommission(double** m, int col2, int row1, float tmp2) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i][j];
            if (tmp2 == tmp) {
                tmp1 = i;
                return tmp1;
            }
            break;
        }
    }
}
//Функция заместо strlen. Тк ебанный strlen не работает.
int e_strlen(char* str) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
//Функция для определения площади у прямоугольника
int area1(int x, int y) {

    int result = x * y;
    return result;

}
float area22(int x, int y) {
    float result = x * y * 0.5;
    return result;
}
//Функция для определения площади по формуле Герона у треугольника
float area21(int x, int y, int z) {
    float p = (x + y + z) * 0.5;
    float result = sqrt(p * (p - x) * (p - y) * (p - z));
    return result;

}
//Функция для определения площади у круга
float area3(int x) {
    float result = M_PI * pow(x, 2);
    return result;
}
//Функция для определения знака у введенного числа
int sign_x(int x) {
    if (x > 0) {
        return 1;

    }
    else if (x < 0) {
        return -1;

    }
    else
        return 0;
}
//Функция для сортировки введенной строки
void sort(char* i, int n) {
    int a, b;
    char t;
    for (a = 0; a < n; a++)
        for (b = n - 1; b >= a; b--) {
            if (i[b - 1] > i[b]) {
                t = i[b - 1];
                i[b - 1] = i[b];
                i[b] = t;

            }

        }

}
//Функция ввода интовой переменной с клавиатуры с проверкой на введенные неккоректные символы с заданным диапазоном значений
int Inputint(int m, int M) {
    for (;;) {
        float valuea;
        std::cout << "Введите число. \n";
        if ((std::cin >> valuea).good() && (m <= valuea) && (valuea <= M) && (floor(valuea) == valuea)) {
            return valuea;
            break;
        }
        if (std::cin.fail()) {
            std::cin.clear();
            std::cout << "Неверный ввод, повторите. \n";

        }
        else {
            std::cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";

        }
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
}

//Функция ввода float переменной с клавиатуры с проверкой на введенные неккоректные символы с заданным диапазоном значений
float Inputfloat(int m, int M) {
    for (;;) {
        float valuea;
        cout << "Введите число. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)) {
            return valuea;
            break;
        }
        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите. \n";

        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";

        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
}
//Функции для псевдорандомного числа. 1 и 2 вариант.
int option1() {
    setlocale(LC_ALL, "Russian");
    int n, m, i, c, s;
    m = 37;
    i = 3;
    c = 64;
    std::cout << "Введите количество чисел" << std::endl;
    n = Inputint(0, 2147483647);
        s = (rand() * 13 - 65) % 2;
    for (int k = 1; k <= n; k++)
    {
        s = (m * s + i) % c;
        cout << s << endl;
    }
    return 0;
}
int option2() {
    setlocale(LC_ALL, "Russian");
    int n, m, i, c, s;
    m = 25173;
    i = 13849;
    c = 65537;
    cout << "Введите количество чисел" << endl;
    n = Inputint(0, 2147483647);
    s = (rand() * 13 - 65) % 2;
    for (int k = 1; k <= n; k++)
    {
        s = (m * s + i) % c;
        cout << s << endl;
    }
    return 0;
}
//Вызов функции с заданиями 1 недели
void day1() {
    bool a = true;
    int m = 0;
    int M = 50;
    cin.clear();
    do {
        cout << "Для просмотра заданий введите номер задания (10-50)" << endl;
        cout << endl;
        cout << "№10 - задание \"Имя\"\n";
        cout << "№20 - задание \"Арифметика\" \n";
        cout << "№30 - задание \"Уравнение\" \n";
        cout << "№40 - задание \"Ещё уравнение\" \n";
        cout << "№50 - задание \"Лампа со шторой\" \n\n";
        cout << "№0 - выйти в главное меню \n";
        cout << "№1 - выйти из программы \n";
        int t = Inputint(m, M); // Ввод int переменной с проверкой на число с типом данных int
        switch (t) {
        case 10: {
            cout << "вы выбрали №10 - задание \"Имя\" \n";
            setlocale(LC_ALL, "Russian");//установка русской локализации для вывода в консоли на русском
            string name;//объявление строки
            cout << "What is your name? ";
            cin >> name;
            cout << "Hello, " << name << "!\n";
            break;

        }
        case 20: {
            bool f = true;
            do {
                cout << "вы выбрали №20 - задание \"Арифметика\" \n";
                float  c = 0;
                char sign;
                int m = -2147483648, M = 2147483647;
                cout << "Введите число a \n";
                float a = Inputfloat(m, M);
                cout << "Введите число b \n";
                float b = Inputfloat(m, M);
                cout << " Введите '+', чтобы посчитать a + b = c. \n Введите '-', чтобы посчитать a - b = c. \n Введите '*', чтобы посчитать a * b = c. \n Введите '+/', чтобы посчитать a / b = c. \n Напишите '0' чтобы выйти из программы в меню. \n";
                cin >> sign;
                switch (sign) {
                case'+': {
                    c = a + b;
                    cout << "a + b = " << c << endl;
                    break;

                }
                case'-': {
                    c = a - b;
                    cout << "a - b = " << c << endl;
                    break;

                }
                case'*': {
                    c = a * b;
                    cout << "a * b = " << c << endl;
                    break;

                }
                case'/': {
                    try {
                        if (b == 0)
                            throw 121;

                    }
                    catch (int q) {
                        cout << "Ошибка № " << q << "! Делить на 0 нельзя. \n";
                        break;

                    }
                    c = a / b;
                    cout << "a / b = " << c << endl;
                    break;

                }
                case'0': {
                    std::cout << "Выход из программы... \n";
                    f = false;
                    continue;
                }
                default: {
                    std::cout << "Неверный ввод, попробуйте снова. \n";
                }
                }

            } while (f);
            break;
        }
        case 30: {
            cout << "вы выбрали №30 - задание \"Уравнение\" \n";
            float x = 0;
            int m = -2147483648;
            int M = 2147483647;
            cout << "Введите число 'b' \n";
            float b = Inputfloat(m, M);
            cout << "Введите число 'c' \n";
            float c = Inputfloat(m, M);
            try {
                if (b == 0 && c != 0) {
                    throw 130;

                }

            }
            catch (int q) {
                cout << "результат будет недействителен, " << "Ошибка № " << q << " - на 0 делить нельзя!" << endl;
                break;

            }
            if (b == 0 && c == 0) {
                cout << "x может принимать любые значения" << endl;
                break;

            }
            x = (-c) / b;
            cout << "x = " << x << endl;
            break;

        }
        case 40: {
            cout << "вы выбрали №40 - задание \"Ещё уравнение\" \n";
            float d, x1, x2;
            int m = -2147483648;
            int M = 2147483647;
            cout << "Введите число 'a' \n";
            float a = Inputfloat(m, M);
            cout << "Введите число 'b' \n";
            float b = Inputfloat(m, M);
            cout << "Введите число 'c' \n";
            float c = Inputfloat(m, M);
            if (a == 0) {
                try {
                    if (b == 0 && c != 0) {
                        throw 140;

                    }

                }
                catch (int q) {
                    cout << "результат будет недействителен, " << "Ошибка № " << q << " - на 0 делить нельзя! \n" << endl;
                    break;

                }
                if (b == 0 && c == 0) {
                    cout << "x может принимать любые значения \n" << endl;
                    break;

                }
                x1 = (-c) / b;
                cout << "x1 = " << x1 << endl;
                break;

            }
            d = pow(b, 2) - 4 * a * c;
            if (d > 0) {
                x1 = ((-b) + sqrt(d)) / (2 * a);
                x2 = ((-b) - sqrt(d)) / (2 * a);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;

            }
            if (d == 0) {
                x1 = -(b / (2 * a));
                cout << "x1 = x2 = " << x1 << endl;

            }
            if (d < 0)
                cout << "D < 0, Действительных корней не существует \n";
            break;

        }
        case 50: {
            int lamp;
            int sun;
            int curtain;
            cout << "вы выбрали №50 - задание \"Лампа со шторой\" \n";
            cout << "введите первым действием работает ли лампа, вторым открыты или закрыты шторы,последним светло или темно на улице, 1 вариант ответа принимается под цифрой 1, второй под цифрой 0\n";
            cin >> lamp >> curtain >> sun;
            try {
                if ((lamp != 0 && lamp != 1) || (curtain != 0 && curtain != 1) || (sun != 0 && sun != 1))
                    throw 150;

            }
            catch (int q) {
                cout << "вы ввели неправильное значение переменных " << "Ошибка № " << q << " допустим ввод только цифр 1/0" << endl;
                break;

            }
            if (lamp == 1 || (curtain == 1 && sun == 1))
                cout << "в комнате светло\n";
            else
                cout << "в комнате темно\n";
            break;

        }
        case 0: {
            cout << "Выход в меню... \n";
            a = false;
            continue;

        }
        case 1: {
            std::cout << "Выход из программы...\n";
            exit(0);
        }
        default: {
            std::cout << "Неверный ввод...\n";
              }

        }

    } while (a);

}

void day2() {
    int m = 0;
    int M = 50;
    bool f = true;
    do {
        std::cout << "Для просмотра заданий введите номер задания (10-50)" << endl;
        cout << endl;
        cout << "№10 - задание \"Конус\"\n";
        cout << "№20 - задание \"Разветвление\" \n";
        cout << "№30 - задание \"Функция\" \n";
        cout << "№40 - задание \"Порядок\" \n";
        cout << "№50 - задание \"Табуляция\" \n\n";
        cout << "№0 - выйти в главное меню \n";
        cout << "№1 - выйти из программы \n";   
        int t = Inputint(m, M);
        switch (t) {
        case 10: {
            cout << "вы выбрали №10 - задание \"Конус\" \n";
            int m = 1, M = 2147483647;
            float V, S;
            cout << "Введите число 'h' \n";
            float h = Inputfloat(m, M);
            cout << "Введите число 'l' \n";
            float l = Inputfloat(m, M);
            cout << "Введите число 'R' \n";
            float R = Inputfloat(m, M);
            cout << "Введите число 'r' \n";
            float r = Inputfloat(m, M);
            try {
                if (R == r)
                    throw 210;
                if (l <= h)
                    throw 211;
            }
            catch (int q) {
                if (q == 210) {
                    cout << "ошибка, вы ввели не усеченный конус \n";
                    break;
                }
                if (q == 211)
                {
                    cout << "ошибка, вы ввели не усеченный конус \n";
                    break;
                }

            }
            V = ((1 / (3 * M_PI * h)) * ((pow(R, 2) + R * r + pow(r, 2))));
            S = M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
            cout << "Объем фигуры равен: \n";
            cout << V << endl;
            cout << "полная поверхность фигуры равна: \n";
            cout << S << endl;
            break;
        }
        case 20: {
            cout << "вы выбрали №20 - задание \"Разветвление\" \n";
            int m = -2147483648, M = 2147483647;
            float result;
            cout << "Введите число 'a' \n";
            float a = Inputfloat(m, M);
            cout << "Введите число 'x' \n";
            float x = Inputfloat(m, M);
            if (abs(x) < 1) {
                if (x > 0) {
                    result = a * log(abs(x));
                    cout << "W = " << result << endl;
                    break;

                }
                else {
                    try {
                        if (x <= 0)
                            throw 220;

                    }
                    catch (int q) {
                        cout << "Ошибка № " << q << " логарифм не может быть отрицательным или равен 0 \n";
                        break;

                    }

                }

            }
            else
                try {
                if (a < pow(x, 2)) {
                    throw 221;

                }

            }
            catch (int q) {
                cout << "Ошибка № " << q << " под корнем не может быть отрицательное число \n" << endl;
                break;

            }
            result = sqrt(a - pow(x, 2));
            cout << "W = ";
            cout << result << endl;
            break;

        }
        case 30: {
            cout << "вы выбрали №30 - задание \"Функция\" \n";
            int m = -2147483648, M = 2147483647;
            float result;
            cout << "Введите число 'x' \n";
            float x = Inputfloat(m, M);
            cout << "Введите число 'b' \n";
            float b = Inputfloat(m, M);
            cout << "Введите число 'y' \n";
            float y = Inputfloat(m, M);
            try {
                if (b <= y && b < x) {
                    throw 232;
                }

                if (b < x) {
                    throw 230;

                }
                if (b <= y) {
                    throw 231;

                }

            }
            catch (int q) {
                if (q == 230)
                    cout << "Ошибка № " << q << " под корнем не может быть отрицательное число" << endl;
                else if (q == 231)
                    cout << "Ошибка №" << q << " логарифм не определен" << endl;
                else
                    cout << "Ошибка № " << q << " под корнем не может быть отрицательное число и логарифм не определен" << endl;
                break;

            }
            result = log(b - y) * sqrt(b - x);
            cout << "z = " << result << endl;
            break;

        }
        case 40: {
            cout << "вы выбрали №40 - задание \"Порядок\" \n";
            int m = 0, M = 2147483636;
            int N = Inputint(m, M);
            for (int i = 10; i > 0; i--) {
                N++;
                cout << N << endl;

            }
            break;
        }
        case 50: {
            cout << "вы выбрали №50 - задание \"Табуляция\" \n";
            float x = -4;
            float result;
            for (int i = 0; i < 17; i++) {
                if (x - 1 != 0) {
                    result = (pow(x, 2) - 2 * x + 2) / (x - 1);
                    cout << "результат для x = " << x << endl << "равен: " << result << endl << endl;

                }
                try {
                    if (x - 1 == 0) {
                        throw 250;

                    }

                }
                catch (int q) {
                    cout << "результат для x = 1\n" << "Ошибка №" << q << " - на 0 делить нельзя!!!!" << endl << endl;

                }
                x = x + 0.5;

            }
            break;
        }
        case 0: {
            cout << "Выход в меню... \n";
            f = false;
            continue;

        }
        case 1: {
            std::cout << "Выход из программы...\n";
            exit(0);
        }
        default: {
            std::cout << "Неверный ввод...\n";
        }

        }

    } while (f);

}
void day3() {
    int m = 0;
    int M = 50;
    bool f = true;
    do {
        std::cout << "Для просмотра заданий введите номер задания (10-50)" << endl;
        cout << endl;
        cout << "№10 - задание \"Заем\"\n";
        cout << "№20 - задание \"Ссуда\" \n";
        cout << "№30 - задание \"Копирование файла\" \n";
        cout << "№40 - задание \"Фильтр\" \n";
        cout << "№50 - задание \"Сортировка букв\" \n\n";
        cout << "№0 - выйти в главное меню \n";
        cout << "№1 - выйти из программы \n";
        int t = Inputint(m, M);
        switch (t) {
        case 10: {
            std::cout << "вы выбрали №10 - задание 'Заем' \n";
            float result;
            cout << "Введите S: \n";
            int S = Inputint(1, 2000000);
            cout << "Введите n: \n";
            int n = Inputint(1, 2000000);
            cout << "Введите p: \n";
            float p = Inputfloat(1, 2000000);
            result = (S * (p / 100) * pow(1 + (p / 100), n)) / (12 * (pow(1 + (p / 100), n) - 1));
            cout << "m = " << result << endl;
            break;

        }
        case 20: {
            std::cout << "вы выбрали №20 - задание 'Ccуда' \n";
            std::cout << "Введите S \n";
            float S = Inputint(1, 2000000);
            std::cout << "Введите n \n";
            float n = Inputint(1, 2000000);
            std::cout << "Введите m \n";
            float m = Inputint(1, 2000000);
            float result = ((pow(((12 * m * n) / S), 1 / n) - 1) * 100);
            std::cout << "Процент p = \n" << result << std::endl;
            break;

        }
        case 30: {
            std::cout << "вы выбрали №30 - задание 'Копирование файла' \n";
            char buff[50];
            std::string y;
            std::cout << "Введите с клавиатуры число/слово чтобы его записать в файл \n";
            std::getline(std::cin, y);
            std::cout << y << std::endl;
            std::ofstream in;
            in.open("task3.3.txt");
            in << y;
            in.close();
            std::ifstream out("task3.3.txt");
            out.getline(buff, 50);
            std::cout << buff;
            out.close();
            break;

        }
        case 40: {
            std::cout << "вы выбрали №40 - задание 'Фильтр' \n";
            std::cout << "Введите с клавиатуры число/слово чтобы его записать в файл \n";
            char y[50];
            std::cin >> y;
            char buff[100];
            char result[100];
            std::ofstream test;
            test.open("text.html");
            test << y << std::endl;
            test.close();
            std::ifstream text("text.html");
            text.getline(buff, 100);
            for (int i = 0, j = 0; i < 100; i++)
                if (buff[i] != '\0')
                    result[j++] = buff[i];
            std::cout << buff << std::endl;
            text.close();
            for (int i = 0; i < 100; i++) {
                if ((buff[i] > 47 && buff[i] < 58) || buff[i] == 32)
                    std::cout << buff[i];
                if (buff[i] == '\0') {
                    break;

                }

            }
            std::cout << '\n';
            break;

        }
        case 50: {
            std::cout << "вы выбрали №50 - задание 'Сортировка букв' \n";
            bool q = true;
            while (q) {
                char s[80];
                printf("Введите строку длинной 30 символов: \n");
                cin >> s;
                unsigned long i = strlen(s);
                if (i < 30) {
                    q = false;
                    sort(s, i);
                    printf("Отсортированная строка : %s\n", s);
                    break;

                }
                cout << "вы ввели строку длинной не 30 символов! \n";

            }
            break;

        }
        case 0: {
            cout << "Выход в меню... \n";
            f = false;
            continue;

        }
        case 1: {
            std::cout << "Выход из программы...\n";
            exit(0);
        }
        default: {
            std::cout << "Неверный ввод...\n";
        }

        }

    } while (f);

}
void day4() {
    int m = 0;
    int M = 90;
    bool f = true;
    do {
        std::cout << "Для просмотра заданий введите номер задания (10-90)" << endl;
        cout << endl;
        cout << "№10 - задание \"Файл\"\n";
        cout << "№20 - задание \"Знак числа\" \n";
        cout << "№30 - задание \"Геометрические фигуры\" \n";
        cout << "№40 - задание \"Былая слава\" \n";
        cout << "№50 - задание \"Синусоида\" \n\n";
        cout << "№60 - задание \"Автоматный распознаватель\" \n";
        cout << "№70 - задание \"Генератор случайных чисел\" \n";
        cout << "№80 - задание \"Умножение матриц\" \n";
        cout << "№90 - задание \"Системы счисления\" \n\n";
        cout << "№0 - выйти в главное меню \n";
        cout << "№1 - выйти из программы \n";
        int t = Inputint(m, M);
        switch (t) {
        case 10: {
            std::cout << "вы выбрали №10 - задание \"Файл\" \n";
            char S1[256], S2[256], S3[256], S4[256], S5[256], S6[256], S7[256], S8[256], S9[256], S10[256];
            std::cout << "Введите 10 чисел \n";
            std::cout << "1: ";
            std::cin >> S1;
            std::cout << "2: ";
            std::cin >> S2;
            std::cout << "3: ";
            std::cin >> S3;
            std::cout << "4: ";
            std::cin >> S4;
            std::cout << "5: ";
            std::cin >> S5;
            std::cout << "6: ";
            std::cin >> S6;
            std::cout << "7: ";
            std::cin >> S7;
            std::cout << "8: ";
            std::cin >> S8;
            std::cout << "9: ";
            std::cin >> S9;
            std::cout << "10: ";
            std::cin >> S10;

            std::ofstream out("task4.1.txt");
            out << S1 << '\n';
            out << S2 << '\n';
            out << S3 << '\n';
            out << S4 << '\n';
            out << S5 << '\n';
            out << S6 << '\n';
            out << S7 << '\n';
            out << S8 << '\n';
            out << S9 << '\n';
            out << S10 << '\n';
            out.close();

            std::ifstream in("task4.1.txt");
            int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
            in >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;
            std::cout << s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10 << '\n';
            break;

        }
        case 20: {
            cout << "вы выбрали №20 - задание \"Знак числа\" \n";
            int m = -2147483648, M = 2147483647;
            int x = Inputint(m, M);
            int result = sign_x(x);
            std::cout << result << std::endl;
            break;

        }
        case 30: {
            cout << "вы выбрали №30 - задание \"Геометрические фигуры\" \n";
            bool q = true;
            do {
                int m = 1, M = 2147483647;
                std::cout << "Введите фигуру , у которой хотите посчитать площадь \n 1 = площадь прямоугольника \n 2 = площадь треугольника \n 3 = площадь круга \n 0 = выход из программы \n";
                char add;
                std::cin >> add;

                switch (add) {
                case '1': {
                    std::cout << "Вы выбрали площадь для прямоугольника \n Введите 2 стороны прямоугольника \n";

                    int x = Inputint(m, M);
                    int y = Inputint(m, M);
                    int result = area1(x, y);
                    std::cout << "Площадь прямоугольника = " << result << std::endl;
                    break;

                }
                case '2': {
                    bool qwert = true;
                    do {
                        std::cout << "Вы выбрали площадь для треугольника \n";
                        std::cout << "Выберите способ подсчета площади треугольника : \n 1. Формула Герона, вам нужно знать длины 3-ех сторон \n 2. Формула высоты на основание, вам нужно знать длину основания и высоты падающей на нее \n \n 0. Выйти из подпрограммы \n";
                        char f;
                        std::cin >> f;
                        switch (f) {
                        case '1': {
                            std::cout << "Вы выбрали формулу Герона, введите длины 3-ех сторон \n";
                            int x = Inputint(m, M);
                            int y = Inputint(m, M);
                            int z = Inputint(m, M);
                            float result = area21(x, y, z);
                            std::cout << "Площадь треугольника = " << result << std::endl;
                            break;
                        }
                        case '2': {
                            std::cout << "Вы выбрали формулу высоты на основание, введите длину основания и падающей на нее высоты \n";
                            int x = Inputint(m, M);
                            int y = Inputint(m, M);
                            float result = area22(x, y);
                            std::cout << "Площадь треугольника = " << result << std::endl;
                            break;
                        }
                        case '0': {
                            std::cout << "Выход из подпрограммы... \n";
                            qwert = false;
                            continue;
                        }
                        default: {
                            std::cout << "Неверный ввод, попробуйте снова \n";
                        }

                        }

                    } while (qwert);
                    break;

                }
                case '3': {
                    std::cout << "Вы выбрали площадь для круга \n Введите радиус круга \n";
                    int x = Inputint(m, M);
                    float result = area3(x);
                    std::cout << "Площадь круга = " << result << std::endl;
                    break;

                }
                case '0': {
                    q = false;
                    continue;

                }
                default: {
                    std::cout << "Неверный ввод, попробуйте еще раз. \n";

                }

                }

            } while (q);

            break;

        }
        case 40: {
            cout << "вы выбрали №40 - задание \"Былая слава\" \n";
            int y = 0;
            bool q = true;
            do {
                if (y < 6) {
                    for (int i = 0; i < 8; i++) {
                        std::cout << "*";

                    }
                    if (y == 1 || y == 3 || y == 5) {
                        for (int i = 7; i < 50; i++) {
                            std::cout << " ";

                        }

                    }
                    else
                        for (int i = 7; i < 50; i++) {
                            std::cout << "-";

                        }
                    if (y <= 6) {
                        std::cout << "\n";
                        y++;

                    }

                }
                else if (y >= 6 && y < 13) {
                    if (y == 7 || y == 9 || y == 11 || y == 13) {
                        for (int i = 0; i < 51; i++) {
                            std::cout << " ";

                        }

                    }
                    else
                        for (int i = 0; i < 51; i++) {
                            std::cout << "-";

                        }
                    std::cout << "\n";
                    y++;

                }
                else
                    q = false;

            } while (q);

            break;

        }
        case 50: {
            cout << "вы выбрали №50 - задание \"Синусоида\" \n";
            for (double y = 1.1; y > -1.1; y -= 0.1) {
                for (double x = -4; x < 4; x += 0.1) {
                    if (abs(sin(x) - y) < 0.05)
                        std::cout << "*";
                    else if (x<0.05 && x>-0.05)
                        std::cout << "|";
                    else if (y<0.05 && y>-0.05)
                        std::cout << "-";
                    else
                        std::cout << " ";

                }
                std::cout << '\n';

            }
            break;

        }
        case 60: {
            cout << "вы выбрали №60 - задание \"Автоматный распознаватель\" \n";
            int result = 0, num[30], error1 = 0, error2 = 0, lenght;
            char roman[30];
            bool q = true;
            do {
                std::cout << "Введите римскую числовую строку \n";
                result = 0;
                error1 = 0;
                error2 = 0;
                std::cin >> roman;
                lenght = e_strlen(roman);
                for (int i = 0; i < lenght; i++) {
                    if (!((roman[i] == 'I') || (roman[i] == 'V') || (roman[i] == 'X') || (roman[i] == 'L') || (roman[i] == 'C') || (roman[i] == 'D') || (roman[i] == 'M'))) {
                        error1++;
                    }

                }
                for (int i = 3; i < lenght; i++) {
                    if (roman[i] == roman[i - 1] && roman[i] == roman[i - 2] && roman[i] == roman[i - 3]) {
                        error2++;
                    }

                }
                try {
                    if (error1 != 0) {
                        throw 461;

                    }
                    if (error2 != 0) {
                        throw 462;

                    }
                }
                catch (int q) {
                    if (q == 461) {
                        std::cout << "Вы Ввели неправильно строку! \n";
                        continue;

                    }
                    if (q == 462) {
                        std::cout << "Ошибка, повторений в строке не может быть больше 3! \n";
                        continue;

                    }
                }

                for (int i = 0; i <= lenght; i++) {
                    if (roman[i] == 'I') {
                        num[i] = 1;

                    }
                    else if (roman[i] == 'V') {
                        num[i] = 5;

                    }
                    else if (roman[i] == 'X') {
                        num[i] = 10;

                    }
                    else if (roman[i] == 'L') {
                        num[i] = 50;

                    }
                    else if (roman[i] == 'C') {
                        num[i] = 100;

                    }
                    else if (roman[i] == 'D') {
                        num[i] = 500;

                    }
                    else if (roman[i] == 'M') {
                        num[i] = 1000;

                    }

                }
                for (int i = 0; i < lenght - 1; i++) {
                    if (num[i] < num[i + 1]) {
                        result -= num[i];
                    }
                    else {
                        result += num[i];
                    }
                }
                result += num[lenght - 1];
                cout << "Введённое вами число в арабской записи равно " << result << endl;
                cout << "Введите 1 если хотите продолжить программу, 0 чтобы выйти \n";
                int c = Inputint(0, 1);
                if (c == 0) {
                    q = false;
                    break;
                }
            } while (q);
            break;


        }
        case 70: {
            bool f = true;
            do {
                std::cout << "вы выбрали №70 - задание \"Генератор случайных чисел\" \n";
                std::cout << "Выберите вариант решения\n№1 = 1 вариант\n№2 = 2 вариант\n";
                int i = Inputint(1, 2);
                if (i == 1) {
                    option1();

                }
                else
                    option2();
                std::cout << "если вы хотите продолжить, введите 1. Чтобы закончить эту программу , введите 0.\n";
                int q = Inputint(0, 1);
                if (q == 0) {
                    f = false;
                    continue;
                }
            } while (f);
            break;

        }
        case 80: {
            std::cout << "вы выбрали №80 - задание \"Умножение матриц\" \n";
            int row1,row2,col1,col2;
            double** m, ** m1, ** m2;
                std::cout << "запишите количество разновидностей товаров для продавцов от 1 до 10. \n";
                col1 = Inputint(1, 10);//может быть от 1 до 10 продавцов
                std::cout << "запишите количество продавцов  от 1 до 10. \n";
                row1 = Inputint(1, 10);//может быть от 1 до 10 товаров
                bool mas1 = true;
                bool mas2 = true;
                int check1 = 0;
                col2 = 2;
                row2 = col1;
            do {//Ввод 1 матрицы
                int check = 0;
                m1 = new double* [row1];
                std::cout << "Введите 1 матрицу. \n";
                for (int i = 1; i <= row1; i++) {
                    m1[i] = new double[col1];
                    std::cout << "Введите количество товаров для " << i << " продавца. \n";
                    for (int j = 1; j <= col1;) {
                        std::cout << "m1[" << i << "][" << j << "]= ";
                        std::cout << "Введите количество товара типа (" << j << ") для " << i << " продавца. \n";
                        m1[i][j] = Inputfloat(0, 2147483647);
                        j++;
                    }

                }
                for (int l = 1; l <= row1;) {
                    check1 = 0;
                    for (int r = 1; r <= col1;) {
                        if (m1[l][r] == 0)
                            check1++;
                        r++;
                    }
                    if (check1 == col1) {
                        std::cout << "Вы ввели 0 товаров для " << l << " продавца! Попробуйте еще раз. \n";
                        std::cout << "Хотите продолжить ? \n1 = изменить количество \n0 = продолжить без изменений \n";
                        int n = Inputint(0, 1);
                        if (n == 1) {
                            mas1 = true;
                            check++;
                        }
                        else
                            mas1 = false;

                    }
                    else
                        mas1 = false;
                    l++;
                }
                if (check > 0)
                    mas1 = true;
            } while (mas1);//закончили ввод 1 матрицы
            std::cout << "Матрица продавца-(ов) к товару: \n";
            for(int i = 1;i <= row1;i++) {//вывод на экран 1 матрицы
                std::cout << "|";
                for(int j = 1;j <=col1;j++) {
                    std::cout<<m1[i][j]<<" ";
                }
                std::cout << "|";
                std::cout<<std::endl;
            }
            do {//ввод 2 матрицы в программу
                check1 = 0;
                m2 = new double* [row2];
                std::cout << "Введите 2 матрицу. \n";
                for (int i = 1; i <= row2; i++) {
                    std::cout << "Введите цену/комиссию для " << i << " товара. \n";
                    m2[i] = new double[col2];
                    for (int j = 1; j <= col2;) {
                        std::cout << "m2[" << i << "][" << j << "]= ";
                        m2[i][j] = Inputfloat(0, 2147483647);
                        j++;
                    }

                }
                for (int l = 1; l <= row2;) {
                    if (m2[l][1] == 0) {//проверка на ценник = 0
                        std::cout << "Цена не может быть равна 0 для " << l << " товара! Попробуйте еще раз. \n";
                        check1++;
                    }
                    l++;
                }
                for (int l = 1; l <= row2;) {
                    if (m2[l][1] - m2[l][2] < 0) {//проверка на то что комиссия больше чем цена
                        std::cout << "комиссия не может быть больше цены у "<<l<<" товара! Попробуйте еще раз. \n";
                        check1++;
                    }
                    l++;
                }
                if (check1 == 0)
                    mas2 = false;
            } while (mas2);
            std::cout << "Матрица цены к комиссии: \n";//вывод 2 матрицы
            for(int i = 1;i <= row2;i++) {
                std::cout << "|";
                for(int j = 1;j <=col2;j++) {
                    std::cout<<m2[i][j]<<" ";
                }
                std::cout << "|";
                std::cout<<std::endl;
                    
            }
            m = new double* [row1];//перемножение матрицы
            for (int i = 1; i <= row1; i++)
            {
                m[i] = new double[col2];
                for (int j = 1; j <= col2; j++)
                {
                    m[i][j] = 0;
                    for (int k = 1; k <= col1; k++)
                        m[i][j] += m1[i][k] * m2[k][j];
                }
            }
            std::cout << "Прибыль/комиссия \n";//вывод перемноженной матрицы
            for (int i = 1; i <= row1; i++) {
                std::cout << "|";
                for (int j = 1; j <= col2; j++) {
                    std::cout << m[i][j] << " ";
                }
                std::cout << "|";
                std::cout << std::endl;
            }
            std::cout << "Вывод работы программы: \n";
            for (int r = 1; r <= row1;r++) {
                if (m[r][1] == 0)
                    std::cout << "У " << r << " продавца указано 0 товаров. \n";
            }
            float maxmoney = max_money(m, col2, row1);
            int personal_max_money = comparisonmoney(m, col2, row1, maxmoney);
            double minmoney = min_money(m, col2, row1, maxmoney);
            int personal_min_money = comparisonmoney(m, col2, row1, minmoney);
            float maxcommission = max_commission(m, col2, row1);
            int personal_max_commission = comparisoncommission(m, col2, row1, maxcommission);
            float mincommission = min_commission(m, col2, row1);
            int personal_min_commission = comparisoncommission(m, col2, row1, mincommission);
            float maxmoneyall = max_money_all(m, col2, row1);
            float maxclearmoneyall = max_clear_money_all(m, col2, row1);
            float maxcommissionall = max_commission_all(m, col2, row1);
            std::cout <<"Наибольшая выручка будет у "<<personal_max_money<<" продавца. Выручка = "<<maxmoney<<std::endl;
            std::cout <<"Наименьшая выручка будет у " << personal_min_money << " продавца. Выручка = " << minmoney << std::endl;
            std::cout << "Наибольшая комиссия будет у " << personal_max_commission << " продавца. Комиссия = " << maxcommission << std::endl;
            std::cout << "Наименьшая комиссия будет у " << personal_min_commission << " продавца. Комиссия = " << mincommission << std::endl;
            std::cout << "Общая чистая выручка будет = " << maxclearmoneyall << std::endl;
            std::cout << "Общая комиссия будет = " << maxcommissionall << std::endl;
            std::cout << "Общая выручка будет = " << maxmoneyall << std::endl;
            break;

        }
        case 90: {
            bool flag1 = true;
            int num = 0, old, fresh, in = 0, flag = 0, q = 0;
            string number;
            do {
                num = 0;
                in = 0;
                flag = 0;
                q = 0;
                std::cout << "Введите число\n";
                cin >> number;
                for (int i = 0; i < number.length() - 1; i++) {//не работает для чисел из 1 элемента
                    if (number[i] >= 48 && number[i] <= 57 || number[i] >= 65 && number[i] <= 70)
                        q++;
                }
                if (q != number.length() - 1) {
                    std::cout << "Неверный ввод. Вы использовали запрещенные символы\n";
                    continue;
                }
                else
                    flag1 = false;

                std::cout << "Введите основание системы\n";
                old = Inputint(2,16);
                std::cout << "Введите число новой системы\n";
                fresh = Inputint(2, 16);
                reverse(number.begin(), number.end());
                

            } while (flag1);
            for (int i = number.length() - 1; i >= 0; i--) {
                if (number[i] == '0') in = 0;
                if (number[i] == '1') in = 1;
                if (number[i] == '2') in = 2;
                if (number[i] == '3') in = 3;
                if (number[i] == '4') in = 4;
                if (number[i] == '5') in = 5;
                if (number[i] == '6') in = 6;
                if (number[i] == '7') in = 7;
                if (number[i] == '8') in = 8;
                if (number[i] == '9') in = 9;
                if (number[i] == 'A') in = 10;
                if (number[i] == 'B') in = 11;
                if (number[i] == 'C') in = 12;
                if (number[i] == 'D') in = 13;
                if (number[i] == 'E') in = 14;
                if (number[i] == 'F') in = 15;

                if (in > flag) flag = in;

                num = num + (in * pow(old, i));
            }
            if (flag < old) {
                std::cout << "В десятеричной системе это будет:\n" << num<<std::endl;
                cout << "В "<<fresh<<"СС это будет:\n";
                other(num, fresh);
                std::cout << std::endl;
            }
            
            break;

        }
        case 0: {
            cout << "Выход в меню... \n";
            f = false;
            continue;

        }
        case 1: {
            std::cout << "Выход из программы...\n";
            exit(0);
        }
        default: {
            std::cout << "Неверный ввод... Повторите ввод. \n";
        }

        }

    } while (f);

}

void spinner() {
    bool q = true;
    do {
        cout << "Для просмотра заданий введите номер задания (10-50)" << endl;
        cout << endl;
        cout << "№10 - задание \"Спиннеры\"\n";
        cout << "№20 - задание \"Снова спиннеры\" \n";
        cout << "№30 - задание \"Не про спиннеры\" \n";
        cout << "№40 - задание \"Плацкартный вагон\" \n";
        cout << "№50 - задание \"Кинотеатр\" \n\n";
        cout << "№0 - выйти в главное меню \n";
        cout << "№1 - выйти из программы \n";
        int i = Inputint(0, 50);
        switch (i) {
        case 10: {
            std::cout << "вы выбрали №10 - задание \"Спиннеры\"  \n";
            std::cout << "Введите стоимость основания спиннера. \n";
            int  A = Inputint(1, 2147483647);
            std::cout << "Введите стоимость лопастей. \n";
            int  B = Inputint(1, 2147483647);
            std::cout << "Введите ожидаемую стоимость спиннера. \n";
            int  N = Inputint(1, 2147483647);
            try {
                if (A > N) {
                    throw 101;
                }
                if (A + B > N)
                {
                    throw 102;
                }
            }
            catch (int a) {
                if (a == 101) {
                    std::cout << "Стоимость основания не может быть больше ожидаемой цены.\n";
                }
                else
                    std::cout << "Стоимость основания и лопастей не может быть больше ожидаемой, будет спиннер без лопастей.\n";
                continue;
            }
            cout << "Максимальное количество лопастей = " << (N - A) / B << std::endl;

            break;

        }
        case 20: {
            std::cout << "вы выбрали №20 - задание \"Снова спиннеры\" \n";
            int i = 0, g = 0;
            long long M;
            M = Inputint(0, 2147483647);
            for (int f = 0; f < 3 && f * 4 <= M; f++) {

                if ((M - f * 4) % 3 == 0) {
                    i++;
                    std::cout << "(3) (4)\n";
                    std::cout <<" "<< (M - f * 4) / 3 << "   " << f;
                    std::cout << std::endl;
                }
                if ((M - f * 3) % 4 == 0) {
                    g++;
                    std::cout << "(4) (3)\n";
                    std::cout <<" "<< (M - f * 3) / 4 << "   " << f;
                    std::cout << std::endl;
                }
                

            }
            if (g == 0 && i == 0) {
                cout << "0 0";
            }


            break;

        }
        case 30: {
            std::cout << "вы выбрали №30 - задание \"Не про спиннеры\" \n";
            int M, N;
            int result;
            N = Inputint(1, 75000);
            M = Inputint(1, 75000);
            result = (N + 1) * (M + 1) * N * M / 4;
            std::cout << "Количество квадратов: \n";
            std::cout << result << std::endl;
            break;

        }
        case 40: {
            std::cout << "вы выбрали №40 - задание \"Плацкартный вагон\" \n";
            char carriage[55];
            int x, y;
            for (int i = 0; i <= 54; i++) {
                carriage[i] = '0';

            }
            cout << "Введите количество свободных мест \n";
            x = Inputint(1, 54);
            for (int i = 0; i < x; i++) {
                std::cout <<"Ввeдите номер свободного места \n";
                y = Inputint(0, 54);
                if (carriage[y] == '1') {
                    cout << "Вы уже вводили номер этого места. Введите корректный номер." << endl;
                    i--;

                }
                else
                    carriage[y] = '1';
         
            }
            if ((carriage[1] == '1') & (carriage[2] == '1') & (carriage[3] == '1') & (carriage[4] == '1') & (carriage[53] == '1') & (carriage[54] == '1')) {
                cout << "Свободно 1-е купе" << endl;
            }
            else {
                cout << "1-е купе не свободно" << endl;
            }
            if ((carriage[5] == '1') & (carriage[6] == '1') & (carriage[7] == '1') & (carriage[8] == '1') & (carriage[52] == '1') & (carriage[51] == '1')) {
                cout << "Свободно 2-е купе" << endl;
            }
            else {
                cout << "2-е купе не свободно" << endl;
            }
            if ((carriage[12] == '1') & (carriage[9] == '1') & (carriage[10] == '1') & (carriage[11] == '1') & (carriage[50] == '1') & (carriage[49] == '1')) {
                cout << "Свободно 3-е купе" << endl;
            }
            else {
                cout << "3-е купе не свободно" << endl;
            }
            if ((carriage[16] == '1') & (carriage[13] == '1') & (carriage[14] == '1') & (carriage[15] == '1') & (carriage[47] == '1') & (carriage[48] == '1')) {
                cout << "Свободно 4-е купе" << endl;
            }
            else {
                cout << "4-е купе не свободно" << endl;
            }
            if ((carriage[20] == '1') & (carriage[17] == '1') & (carriage[18] == '1') & (carriage[19] == '1') & (carriage[46] == '1') & (carriage[45] == '1')) {
                cout << "Свободно 5-е купе" << endl;
            }
            else {
                cout << "5-е купе не свободно" << endl;
            }
            if ((carriage[24] == '1') & (carriage[21] == '1') & (carriage[22] == '1') & (carriage[23] == '1') & (carriage[43] == '1') & (carriage[44] == '1')) {
                cout << "Свободно 6-е купе" << endl;
            }
            else {
                cout << "6-е купе не свободно" << endl;
            }
            if ((carriage[25] == '1') & (carriage[26] == '1') & (carriage[27] == '1') & (carriage[28] == '1') & (carriage[42] == '1') & (carriage[41] == '1')) {
                cout << "Свободно 7-е купе" << endl;
            }
            else {
                cout << "7-е купе не свободно" << endl;
            }
            if ((carriage[29] == '1') & (carriage[30] == '1') & (carriage[31] == '1') & (carriage[32] == '1') & (carriage[39] == '1') & (carriage[40] == '1')) {
                cout << "Свободно 8-е купе" << endl;
            }
            else {
                cout << "8-е купе не свободно" << endl;
            }
            if ((carriage[33] == '1') & (carriage[34] == '1') & (carriage[35] == '1') & (carriage[36] == '1') & (carriage[38] == '1') & (carriage[37] == '1')) {
                cout << "Свободно 9-е купе" << endl;
            }
            else {
                cout << "9-е купе не свободно" << endl;
            }
            break;

        }
        case 50: {
            std::cout << "вы выбрали №50 - задание \"Кинотеатр\" \n";
            int N, K, q, Q;
            cout << "Введите количество детей. \n";
            K = Inputint(0, 2147483647);
            cout << "Введите количество мест. \n";
            N = Inputint(K, 2147483647);
            while (K != 1) {
                N = (N - (K % 2)) / 2;
                K = K / 2;
                q = (N - 1) / 2; Q = N / 2;
            }
            cout << q << " " << Q << endl;

            if (K == 1) {
                cout << (N - 1) / 2 << " " << N / 2 << endl;
            }

            break;

        }
        case 0: {
            cout << "Выход в меню... \n";
            q = false;
            continue;

        }
        case 1: {
            std::cout << "Выход из программы...\n";
            exit(0);
        }
        default: {
            std::cout << "Неверный ввод...\n";
        }
        
        }
    } while (q);
}

int Euclidean_algorithm(int n1, int n2)
{
    int div;
    if (n1 == n2)   // если числа равны, НОД найден
        return n1;
    int d = n1 - n2; // Находим разность чисел
    if (d < 0)       // если разность отрицательная,
    {
        d = -d;     // меняем знак
        div = Euclidean_algorithm(n1, d); // вызываем функцию NOD() для двух наименьших чисел
    }
    else      // если разность n1-n2 положительная
    {
        div = Euclidean_algorithm(n2, d); // вызываем функцию NOD() для двух наименьших чисел
    }
    return div;
}

void algorithm() {
    std::cout << "вы выбрали алгоритм Евклида, чтобы найти НОД, введите 2 числа \n";
    int a, b;
    cout << "Введите 1 число:\n";
    a = Inputint(-2147483648, 2147483647);
    cout << "Введите 2 число:\n";
    b = Inputint(-2147483648, 2147483647);
    cout << Euclidean_algorithm(a, b);
    cin.get();
}

void SortStalin() {
    std::cout << "Вы выбрали сортировку Сталина \n";
    std::vector<int> l = { 1,2,3,5,4,6,4,8,9 };
    StalinSort(l);
    for (auto x : l) {
        std::cout << x << std::endl;

    }
}
void Sieve_of_Eratosthenes() {
    std::cout << "Введите число , чтобы узнать какие простые числа до него \n";
    int a = Inputint(2, 2147483647);
    for (int i = 2; i < a; i++) {
                if (i == 2 || i == 3 || i == 5 || i == 7) {
                    std::cout << i << std::endl;
                    continue;
                }
                if (i % 2 == 0)
                    continue;
                if (i % 3 == 0)
                    continue;
                if (i % 5 == 0)
                    continue;
                if (i % 7 == 0)
                    continue;
                std::cout << i << std::endl;
            }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char q;
    while (true) {
        cout << "Для просмотра заданий введите номер задания (1-4) \n \n";
        cout << "№1 - задания 1 недели \n";
        cout << "№2 - задания 2 недели \n";
        cout << "№3 - задания 3 недели \n";
        cout << "№4 - задания 4 недели \n\n";
        cout << "№5 - задания про спиннеры и не только \n";
        cout << "№6 - StalinSort \n";
        cout << "№7 - Euclidean_algorithm \n";
        cout << "№8 - Sieve_of_Eratosthenes \n";
        cout << "№0 - выйти из программы \n";
        cin >> q;
        switch (q) {
        case '1': {
            day1();
            break;

        }
        case '2': {
            day2();
            break;

        }
        case '3': {
            day3();
            break;
        }
        case '4': {
            day4();
            break;

        }
        case '5': {
            spinner();
            break;
        }
        case '6': {
            SortStalin();
            break;
        }
        case '7': {
            algorithm();
            break;
        }
        case'8': {
            Sieve_of_Eratosthenes();
            break;
        }
        case '0': exit(0);
        default: {
            cout << "неверный ввод" << endl;

        }

        }

    }
    return 0;
}
