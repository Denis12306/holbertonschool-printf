# holbertonschool-printf

## 📌 Description
Recreation of the C standard library function **`printf()`**.  
This project implements a simplified version of `printf` capable of handling multiple format specifiers.

## 🔧 Compilation
Use the following command to compile all files:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## 📜 Requirements
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files are compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags listed above
- Each file must end with a new line
- A **README.md** at the root of the project is mandatory
- Code must follow **Betty style** (`betty-style.pl`, `betty-doc.pl`)
- **Global variables** are allowed
- Maximum **5 functions per file**
- Do **not** push your `main.c` files (they are for testing only)
- All prototypes must be included in **`main.h`**
- All header files must be include-guarded

## 🖨️ What is printf?
`printf()` prints text to the standard output using format specifiers.

### Example
```c
int main(void)
{
    printf("Hello, I am a Holberton School student\n");
    return (0);
}
```
This will output:
```
Hello, I am a Holberton School student
```

---

## 📊 Flowchart
<img width="551" height="586" alt="Printf flowchart" src="https://github.com/user-attachments/assets/49fef514-ff1c-4109-a05e-ea5e4ff8bb89" />

---

## 📖 Man Page Summary
### **NAME**  
`printf(3)` — print formatted output

### **SYNOPSIS**
```c
#include <stdio.h>
```

### **DESCRIPTION**
The `printf` family of functions produces output according to a **format string**.

They write output to:
- **stdout** → `printf()`, `vprintf()`
- **a file stream** → `fprintf()`, `vfprintf()`
- **a string buffer** → `sprintf()`, `snprintf()`, `vsprintf()`, `vsnprintf()`

### Supported Format Specifiers
| Specifier | Description |
|----------|-------------|
| `%c` | Print a single character |
| `%d` | Print a decimal (base 10) number |
| `%e` | Print exponential floating‑point number |
| `%f` | Print floating‑point number |
| `%g` | Print general floating‑point format |
| `%i` | Print integer (base 10) |
| `%o` | Print octal number (base 8) |
| `%s` | Print a string |
| `%u` | Print unsigned decimal number |
| `%x` | Print hexadecimal number (base 16) |
| `%%` | Print a percent sign |

---

## 🔁 Return Value
- On **success**, returns the number of characters printed (excluding `\0`)
- `snprintf()` and `vsnprintf()` return the number of characters that **would** have been written if the buffer were large enough
- On **error**, returns a negative value and sets `errno`

---

## ✅ End of README
