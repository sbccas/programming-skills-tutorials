## **Reverse List Order & Individual Strings**
### **Method 1: Using List Comprehension with Slicing**
```python
words = ["apple", "banana", "cherry", "date", "elderberry"]
reversed_words = [word[::-1] for word in words[::-1]]
print("Reversed List & Strings using slicing:", reversed_words)
```
**Output:**  
```
Reversed List & Strings using slicing: ['yrrebredle', 'etad', 'yrrehc', 'ananab', 'elppa']
```

---

### **Method 2: Using a Loop**
```python
words = ["apple", "banana", "cherry", "date", "elderberry"]
reversed_words = []
for word in reversed(words):  
    reversed_words.append(word[::-1])
print("Reversed List & Strings using loop:", reversed_words)
```
**Output:**  
```
Reversed List & Strings using loop: ['yrrebredle', 'etad', 'yrrehc', 'ananab', 'elppa']
```

---

### **Method 3: Using `map()` and `reversed()`**
```python
words = ["apple", "banana", "cherry", "date", "elderberry"]
reversed_words = list(map(lambda word: word[::-1], reversed(words)))
print("Reversed List & Strings using map():", reversed_words)
```
**Output:**  
```
Reversed List & Strings using map(): ['yrrebredle', 'etad', 'yrrehc', 'ananab', 'elppa']
```

---

### **Method 4: Using `map()` with Slicing**
```python
words = ["apple", "banana", "cherry", "date", "elderberry"]
reversed_words = list(map(lambda word: word[::-1], words[::-1]))
print("Reversed List & Strings using map() and slicing:", reversed_words)
```
**Output:**  
```
Reversed List & Strings using map() and slicing: ['yrrebredle', 'etad', 'yrrehc', 'ananab', 'elppa']
```

---

## **Summary of Methods**
| Method | Modifies Original List? | Creates New List? | Best For |
|--------|--------------------|---------------|-----------|
| List Comprehension (`[::-1]`) | ❌ No | ✅ Yes | Readability & simplicity |
| Loop (`for` with `reversed()`) | ❌ No | ✅ Yes | Beginners & step-by-step execution |
| `map()` with `reversed()` | ❌ No | ✅ Yes | Functional programming approach |
| `map()` with slicing (`[::-1]`) | ❌ No | ✅ Yes | Compact and efficient |

All methods return a **new list** where:
- The **list order is reversed**.
- Each **string inside is also reversed**.

Choose the one that best fits your needs! 🚀
