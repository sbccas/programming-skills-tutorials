
# Python `print()` Function Documentation

In Python, the `print()` function allows you to print multiple values by separating them with commas (`,`) or concatenation (`+`). Here’s how:

---

## 1. Using Commas (`,`) – Recommended ✅  
Commas automatically add spaces between values.

```python
name = "John"
age = 25
city = "New York"

print("Name:", name, "Age:", age, "City:", city)
```
### Output:
```text
Name: John Age: 25 City: New York
```
✔ No need to convert data types (e.g., `int` to `str`).  
✔ Automatically adds spaces between values.  

---

## 2. Using Concatenation (`+`) – Avoid If Data Types Differ ❌  
```python
name = "John"
age = 25

print("Name: " + name + ", Age: " + str(age))  # Need str() conversion
```
### Output:
```text
Name: John, Age: 25
```
⚠ **Issue:** You must manually convert `int` to `str` using `str(age)`.  

---

## 3. Using f-strings (Python 3.6+) – Best for Readability 🎯  
```python
name = "John"
age = 25
city = "New York"

print(f"Name: {name}, Age: {age}, City: {city}")
```
### Output:
```text
Name: John, Age: 25, City: New York
```
✔ **Best method** for clean and readable formatting.  
✔ No need for explicit type conversion.  

---

## 4. Using `.format()` – Alternative to f-strings  
```python
print("Name: {}, Age: {}, City: {}".format(name, age, city))
```
### Output:
```text
Name: John, Age: 25, City: New York
```
✔ Works in older Python versions (`<3.6`).  
❌ Less readable than f-strings.  

---

## 5. Using `sep` to Change Separator  
You can modify the default space separator.  

```python
print(name, age, city, sep=" | ")
```
### Output:
```text
John | 25 | New York
```
✔ Use `sep` for custom formatting (e.g., commas, pipes, dashes).  

---

## 6. Using `end` to Control Line Breaks  
By default, `print()` ends with a newline (`\n`). You can change this using `end=""`.

```python
print("Hello", end=" ")
print("World!")  # Prints on the same line
```
### Output:
```text
Hello World!
```

---

## 7. Printing Lists and Tuples  
```python
my_list = [1, 2, 3, 4, 5]
print("List values:", *my_list)  # Unpacks list elements
```
### Output:
```text
List values: 1 2 3 4 5
```
✔ Using `*list` **unpacks elements**, separating them with spaces.  

---

## 📌 Summary of Methods  

| Method                        | Description                                       |
|--------------------------------|---------------------------------------------------|
| `print(a, b, c)`              | Adds spaces automatically between values (Best for most cases). |
| `print("Hello " + str(num))`  | Concatenation (Manual type conversion needed).   |
| `print(f"Value: {x}")`        | Best readability (f-strings).                    |
| `print("Value: {}".format(x))` | Alternative formatting (older versions).        |
| `print(a, b, c, sep=", ")`    | Custom separator (comma, pipe, etc.).            |
| `print(a, end=" ")`           | Print without newline (continuous printing).     |
| `print(*my_list)`             | Unpack and print list elements.                  |

---

🚀 **Best Practice:** Use f-strings (`f"{variable}"`) for clean and readable formatting.  
