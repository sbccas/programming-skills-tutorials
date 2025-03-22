# Python Input Function Guide

## 1. Basic Input (`input()`)
The `input()` function reads input from the user as a string.

```python
name = input("Enter your name: ")
print("Hello,", name)
```

**Example Output:**
```
Enter your name: John
Hello, John
```

---

## 2. Getting Integer Input (`int()`)
If you need a number, you must convert the input to an integer using `int()`.

```python
age = int(input("Enter your age: "))
print("Your age is:", age)
```

**Example Output:**
```
Enter your age: 25
Your age is: 25
```

💡 **Important:** If the user enters a non-integer value (like "abc"), it will cause an error. You can handle this using exception handling (explained later).

---

## 3. Getting Float Input (`float()`)
For decimal values, use `float()`.

```python
price = float(input("Enter the product price: "))
print("Price entered:", price)
```

**Example Output:**
```
Enter the product price: 12.50
Price entered: 12.5
```

---

## 4. Getting Multiple Inputs in One Line
If you want multiple inputs at once, you can use `split()`.

```python
x, y = input("Enter two numbers separated by space: ").split()
x, y = int(x), int(y)
print("Sum:", x + y)
```

**Example Output:**
```
Enter two numbers separated by space: 10 20
Sum: 30
```

📝 **Explanation:**
- `split()` splits the input into a list based on spaces.
- You can convert each input to `int()` or `float()`.

---

## 5. Getting List Input
If you need a list of numbers:

```python
numbers = list(map(int, input("Enter numbers separated by space: ").split()))
print("Numbers:", numbers)
```

**Example Output:**
```
Enter numbers separated by space: 1 2 3 4 5
Numbers: [1, 2, 3, 4, 5]
```

📝 **Explanation:**
- `split()` converts input into a list of strings.
- `map(int, …)` converts each string to an integer.
- `list()` creates the final list.

---

## 6. Handling Errors with Try-Except
To prevent crashes from invalid input, use exception handling.

```python
try:
    age = int(input("Enter your age: "))
    print("Your age is:", age)
except ValueError:
    print("Invalid input! Please enter a valid number.")
```

**Example Output (if invalid input is given):**
```
Enter your age: abc
Invalid input! Please enter a valid number.
```

---

## 7. Taking Input Until a Condition is Met (`while` Loop)

```python
while True:
    number = input("Enter a number (or type 'exit' to stop): ")
    if number.lower() == 'exit':
        break
    try:
        number = int(number)
        print("You entered:", number)
    except ValueError:
        print("Invalid input, please enter a number.")
```

**Example Output:**
```
Enter a number (or type 'exit' to stop): 10
You entered: 10
Enter a number (or type 'exit' to stop): abc
Invalid input, please enter a number.
Enter a number (or type 'exit' to stop): exit
```

---

## 8. Reading Input with `sys.stdin.readline()`
For faster input in competitive programming:

```python
import sys
name = sys.stdin.readline().strip()
print("Hello,", name)
```

🚀 **Advantage:** Works faster for large inputs compared to `input()`.
💡 **Use `.strip()` to remove extra newlines.**

---

## 9. Taking Multi-Line Input

```python
lines = []
print("Enter multiple lines (type 'STOP' to end):")
while True:
    line = input()
    if line == "STOP":
        break
    lines.append(line)
print("You entered:\n", "\n".join(lines))
```

**Example Output:**
```
Enter multiple lines (type 'STOP' to end):
Hello
How are you?
STOP
You entered:
Hello
How are you?
```

---

## 10. Taking Dictionary Input

```python
keys = input("Enter keys separated by space: ").split()
values = input("Enter values separated by space: ").split()
dictionary = dict(zip(keys, values))
print("Dictionary:", dictionary)
```

**Example Output:**
```
Enter keys separated by space: name age city
Enter values separated by space: John 25 London
Dictionary: {'name': 'John', 'age': '25', 'city': 'London'}
```

---

## 📌 Summary of Input Methods

| **Method**                   | **Description**                                  |
|------------------------------|--------------------------------------------------|
| `input()`                     | Reads input as a string.                         |
| `int(input())`                | Reads an integer input.                          |
| `float(input())`              | Reads a float input.                             |
| `split()`                     | Splits input into a list of words.               |
| `map(int, input().split())`   | Converts multiple inputs to integers.            |
| `sys.stdin.readline()`        | Faster input reading for large inputs.           |
| `while True:`                 | Repeated input until a condition is met.         |
| `try-except`                  | Handles invalid input errors.                    |
| `dict(zip(keys, values))`     | Creates a dictionary from input.                 |

---
