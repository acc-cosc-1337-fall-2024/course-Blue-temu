//write include statements

#include <iostream>
#include <string>
#include <decisions.h>


int main() {
    // Test Cases
    std::cout << "Using if-else-if:" << std::endl;
    std::cout << "95: " << get_letter_grade_using_if(95) << std::endl;
    std::cout << "85: " << get_letter_grade_using_if(85) << std::endl;
    std::cout << "75: " << get_letter_grade_using_if(75) << std::endl;
    std::cout << "65: " << get_letter_grade_using_if(65) << std::endl;
    std::cout << "50: " << get_letter_grade_using_if(50) << std::endl;

    std::cout << "Using switch:" << std::endl;
    std::cout << "95: " << get_letter_grade_using_switch(95) << std::endl;
    std::cout << "85: " << get_letter_grade_using_switch(85) << std::endl;
    std::cout << "75: " << get_letter_grade_using_switch(75) << std::endl;
    std::cout << "65: " << get_letter_grade_using_switch(65) << std::endl;
    std::cout << "50: " << get_letter_grade_using_switch(50) << std::endl;

    return 0;
}
