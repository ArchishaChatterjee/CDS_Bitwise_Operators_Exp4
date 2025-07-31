# EXPERIMENT 4: Bitwise Operators in C++

## Aim
- To study and implement bitwise operators in C++.
- To perform basic bitwise operations and understand how to set/reset bits using XOR.

## Apparatus
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Bitwise Operators in C++
Bitwise operators work at the binary level. They perform operations on the individual bits of integers. These are commonly used in low-level programming, embedded systems, and performance-critical code.

C++ Bitwise Operators:
- `&` (AND): Sets each bit to 1 if both bits are 1  
- `|` (OR): Sets each bit to 1 if one of two bits is 1  
- `^` (XOR): Sets each bit to 1 if only one of two bits is 1  
- `~` (NOT): Inverts all bits  
- `<<` (Left Shift): Shifts bits to the left  
- `>>` (Right Shift): Shifts bits to the right

---

## Program 1: Using Bitwise Operators

### Algorithm
1. Start  
2. Declare two integer variables, `a` and `b`  
3. Read values of `a` and `b` from the user  
4. Perform and display results of the following operations:  
   - `a & b`  
   - `a | b`  
   - `a ^ b`  
   - `~a` and `~b`  
   - `a << 1` and `b >> 1`  
5. End

---

## Program 2: Set and Reset a Bit Using XOR

### Problem
Use XOR to toggle (set/reset) a particular bit in a binary number.

### Algorithm
1. Start  
2. Declare an integer variable `num` and a bit position `pos`  
3. Read values for `num` and `pos` from the user  
4. Toggle the bit at position `pos` using the XOR operator:  
   - `num = num ^ (1 << pos)`  
5. Display the new value of `num`  
6. Repeat the same operation to toggle the bit again (reset it)  
7. Display the result after second toggle  
8. End

---

## Functions

- Perform AND, OR, XOR, and NOT operations on integer values.
- Shift bits left and right to perform efficient multiplication or division.
- Use XOR to toggle specific bits — useful in flags, encryption, and memory optimization.

## Conclusion
Through this lab, I learned how to use bitwise operators in C++ to manipulate binary data. I performed logical operations like AND, OR, XOR, and NOT, and also practiced shifting bits. Using XOR, I successfully set and reset specific bits, which helped me understand how bit-level operations can be used in real-world applications like flags and toggling mechanisms.
