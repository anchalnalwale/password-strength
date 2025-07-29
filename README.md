# 🔐 Password Strength Checker (C++)

A lightweight, beginner-friendly C++ application that evaluates the strength of a password based on widely accepted security standards. It helps users create strong, secure passwords by providing detailed feedback and ensuring the password meets all required conditions.

---

## 📑 Table of Contents

- [📸 Demo](#-demo)
- [✅ Features](#-features)
- [🧰 Technologies Used](#-technologies-used)
- [🛠️ Getting Started](#️-getting-started)
  - [1. Clone the Repository](#1-clone-the-repository)
  - [2. Create or Verify the Source File](#2-create-or-verify-the-source-file)
  - [3. Compile the Code](#3-compile-the-code)
  - [4. Run the Program](#4-run-the-program)
- [📌 How It Works](#-how-it-works)
- [🚧 Project Status](#-project-status)

---

## 📸 Demo

```bash
Enter your password: helloWorld
❌ Weak password: Missing a digit, missing a special character

Enter your password: HelloWorld1@
✅ Strong password!
```
---

## ✅ Features

This password checker provides the following:

- ✅ Minimum 8 characters  
- ✅ At least one uppercase letter (A–Z)  
- ✅ At least one lowercase letter (a–z)  
- ✅ At least one numeric digit (0–9)  
- ✅ At least one special character (!@#$%^&* etc.)  
- ✅ Real-time feedback for missing components  
- ✅ Clean, beginner-readable C++ code structure  

---

## 🧰 Technologies Used

| Component | Description                         |
|-----------|-------------------------------------|
| Language  | C++                                 |
| Compiler  | GCC / MinGW                         |
| IDE       | VS Code                             |
| OS        | Windows                             |

---

## 🛠️ Getting Started

You can run this project on any system with a C++ compiler.

### 1. Clone the Repository

```bash
git clone https://github.com/anchalnalwale/password-strength.git
cd password-strength
```

### 2. Create or Verify the Source File
Ensure that your file is named password_checker.cpp. You can rename it if needed.

### 3. Compile the Code
Using GCC or compatible compiler:
```bash
g++ password_checker.cpp -o password_checker
```
### 4. Run the Program
```bash
./password_checker
```
✅ On Windows, use password_checker.exe instead of ./password_checker.

---

## 📌 How It Works

- **User Input** – The user enters a password.
- **Validation** – The program checks the password for:
  - Minimum length  
  - Uppercase letter  
  - Lowercase letter  
  - Digit  
  - Special character  
- **Feedback** – If any requirement is missing, the program lists it out.
- **Success** – If all conditions are met, it confirms a strong password.

---

## 🚧 Project Status

🟢 **Completed**  
Currently functional and stable. Ready for use and further improvements.

