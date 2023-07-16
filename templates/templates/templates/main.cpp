//
//  main.cpp
//  templates
//
//  Created by Максим Мержев on 16.01.2023.
//  Xcode on MacOS Ventura



//СТАРАЛСЯ ВСЕ ОПИСАТЬ МАКСИМАЛЬНО ПРОСТО, БЕЗ УКАЗАТЕЛЕЙ И ПРОЧЕГО

#include <iostream>
#include <time.h>
#include <cmath>


#pragma region Математические операции

//Основные математические операции, описанные в cmath
pow(значение, степень);
sqrt(значение)
exp(значение)
tan
cos

#pragma endregion



#pragma region готовые структуры

struct func
{
    float y = 0;
    int step = 0;
    int diapason = 0;
};

struct human
{
    float weight;
    float height;
    short age;
    bool gender;  //К ПРИМЕРУ True - мужчина False - женщина
};

struct Time_
{
    short hours;
    short minutes;
    short seconds;
};

struct progression
{
    int step;
    int start;
    int end;
};

#pragma endregion


#pragma region функции
//ФУНКЦИЯ РАНДОМАЙЗЕРА - ПЕРЕД ЭТИМ УСТАНАВЛИВАЕМ srand(time(NULL)) в main
int get_random_number(int min, int max)
{
    int result = min + rand() % (max-min);
    return result;
}

//ФУНКЦИЯ ПОДСЧЕТА РАЗНИЦЫ МЕЖДУ ДВУМЯ ЗНАЧЕНИЯМИ ВРЕМЕНИ
void difference_between_time(Time_ first_moment_time, Time_ second_moment_time)
{
    std::cout << "difference between hours:";
    if(first_moment_time.hours>second_moment_time.hours)
    {
        std::cout << first_moment_time.hours-second_moment_time.hours << "\n";
    }
    else
    {
        std::cout << second_moment_time.hours-second_moment_time.hours << "\n";
    }
    std::cout << "difference between minutes:";
    if(first_moment_time.minutes>second_moment_time.minutes)
    {
        std::cout << first_moment_time.minutes-second_moment_time.minutes << "\n";
    }
    else
    {
        std::cout << second_moment_time.minutes-second_moment_time.minutes << "\n";
    }
    std::cout << "difference between seconds:";
    if(first_moment_time.seconds>second_moment_time.seconds)
    {
        std::cout << first_moment_time.seconds-second_moment_time.seconds << "\n";
    }
    else
    {
        std::cout << second_moment_time.seconds-second_moment_time.seconds << "\n";
    }
}

//ФУНКЦИЯ ЗАПОЛНЕНИЯ ВРЕМЕНИ ОТНОСИТСЯ К СТРУКТРЕ Time_
void fill_time(Time_ first_moment_time, Time_ second_moment_time)
{
    std::cout << "Enter time of the first moment (h/m/s):";
    std::cin >> first_moment_time.hours;
    std::cout << "\n";
    std::cin >> first_moment_time.minutes;
    std::cout << "\n";
    std::cin >> first_moment_time.seconds;
    std::cout << "\n";
    std::cout << "Enter time of the second moment (h/m/s):";
    std::cin >> second_moment_time.hours;
    std::cout << "\n";
    std::cin >> second_moment_time.minutes;
    std::cout << "\n";
    std::cin >> second_moment_time.seconds;
    std::cout << "\n";
}


//Задачка про нахождение самого маленького робота
void smallest_robot(Robot robot, const short count)
{
    Min_index min_index;
    short min_robot_weight = robot[0].weight;
    Gabarits min_robot_gabarites = robot[0].gabarits;
    short min_robot_speed = robot[0].speed;
    for(short i = 0; i<count; i++)
    {
        if(robot[i].weight<min_robot_weight)
        {
            min_robot_weight = robot[i].weight;
            min_index.min_robot_weight_index = i;
        }
        if(robot[i].speed<min_robot_speed)
        {
            min_robot_speed = robot[i].speed;
            min_index.min_robot_speed_index = i;
        }
        if( (robot[i].gabarits.x<min_robot_gabarites.x) && (robot[i].gabarits.y<min_robot_gabarites.y) )
        {
            min_robot_gabarites.x = robot[i].gabarits.x;
            min_robot_gabarites.y = robot[i].gabarits.y;
            min_index.min_robot_gabarits_index_x = i;
            min_index.min_robot_gabarist_index_y = i;
        }
    }
    data_out(min_index);
}

short get_all_month_days(short count)
{
    while (count < 28 || count > 31)
    {
        std::cout << "enter count of days:";
        std::cin >> count;
        std::cout << "\n";
        system("cls");
    }
    return count;
}

short get_month_day(short month_day)
{
    std::cout << "enter date:";
    std::cin >> month_day;
    std::cout << "\n";
    return month_day;
}


void smallest_month(std::string* days, short month_day)
{
    if (month_day >= 1 && month_day <= 7)
    {
        std::cout << "it's week 1\n";
        std::cout << days[month_day - 1];
    }
    else if (month_day > 7 && month_day <= 14)
    {
        std::cout << "it's week 2\n";
        std::cout << days[month_day - 8];
    }
    else if (month_day > 14 && month_day <= 21)
    {
        std::cout << "it's week 3\n";
        std::cout << days[month_day - 15];

    }
    else if (month_day > 21 && month_day <= 28)
    {
        std::cout << "it's week 4\n";
        std::cout << days[month_day - 22];
    }
}

void arithmetic_progression(progression some_prog)
{
    for (some_prog.start; some_prog.start < some_prog.end; some_prog.start+=some_prog.step)
    {
        std::cout << some_prog.start << "\n";
    }
}

void array_out(int array[], const int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        std::cout << array[i] << "\n";
    }
}

int fill_array_element(int min, int max)
{
    return min + rand() % (max-min);
}

#pragma endregion


int main() {
    
}
