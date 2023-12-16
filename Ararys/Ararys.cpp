#include <iostream>
#include <Windows.h>

using namespace std;

int count_digits(int num) {
    int digits_count = 0;
    while (num > 0) {
        digits_count++;
        num /= 10;
    }
    return digits_count;
}

int count_even_digit_numbers(int nums[], int nums_length) {
    int count = 0;
    for (int i = 0; i < nums_length; i++) {
        int digits_count = count_digits(nums[i]);
        if (digits_count % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nums[] = { 12, 345, 2, 6, 7896 };
    int nums_length = sizeof(nums) / sizeof(nums[0]);

    int count = count_even_digit_numbers(nums, nums_length);

    cout << "Кількість чисел з парною кількістю цифр: " << count << endl;

    return 0;
}
