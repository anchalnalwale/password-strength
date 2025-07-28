#include <iostream>
#include <string>
#include <cctype> 

std::string checkPasswordStrength(const std::string& password) {
    int score = 0;
    if (password.length() > 6) 
    {
        score += (password.length() - 6) * 2;
    }

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (char c : password) 
    {
        if (std::isupper(c)) 
        {
            hasUpper = true;
        } 
        else if (std::islower(c)) 
        {
            hasLower = true;
        } 
        else if (std::isdigit(c)) 
        {
            hasDigit = true;
        } 
        else if (std::ispunct(c)) 
        { 
            hasSpecial = true;
        }
    }

    int charTypeCount = 0;
    if (hasUpper) {
        score += 10;
        charTypeCount++;
    }
    if (hasLower) {
        score += 10;
        charTypeCount++;
    }
    if (hasDigit) {
        score += 10;
        charTypeCount++;
    }
    if (hasSpecial) {
        score += 15; 
        charTypeCount++;
    }

    if (charTypeCount >= 3) {
        score += 15;
    }
    if (charTypeCount >= 4) {
        score += 10; 
    }

    if (score < 30) {
        return "Very Weak";
    } else if (score < 50) {
        return "Weak";
    } else if (score < 70) {
        return "Moderate";
    } else if (score < 90) {
        return "Strong";
    } else {
        return "Very Strong";
    }
}

int main() {
    std::string password;

    std::cout << "-------------------------------------" << std::endl;
    std::cout << "    Password Strength Checker        " << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Enter a password to check its strength: ";
    std::getline(std::cin, password); 

    std::string strength = checkPasswordStrength(password);
    std::cout << "Password Strength: " << strength << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    // You can add more examples or a loop for continuous checking
    // std::cout << "\nTry another password: ";
    // std::getline(std::cin, password);
    // strength = checkPasswordStrength(password);
    // std::cout << "Password Strength: " << strength << std::endl;

    return 0;
}