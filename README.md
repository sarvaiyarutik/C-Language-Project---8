# 💻 C Programming Practice Repository

Welcome to my C programming repository! 🚀  
This repository contains basic yet important C programs that I have practiced during my learning journey.

---

## 📂 Programs Included

### 🔹 1. String Length Finder (Using Pointer)

📌 **Description:**  
This program calculates the length of a string without using built-in functions like `strlen()`. It uses pointer logic for iteration.

🧠 **Concepts Used:**
- Pointer
- String Handling
- Loop

💻 **Code:**
```c
#include<stdio.h>
#include<string.h>

int main(){

    char str[50];
    char *ptr;
    int length = 0;

    printf("Enter any string:");
    scanf("%[^\n]",str);

    ptr = str;

    while (*ptr != '\0')
    {
      length++;
      ptr++;
    }

    printf("Length of the string = %d\n",length);

    return 0;
}

▶️ Output:

Enter any string: Hello World
Length of the string = 11

🌐 Online GDB: https://onlinegdb.com/ZKGHLDvYux





🔹 2. Cube Generator (2D Array using Pointer)

📌 Description:
This program takes input of a 2D array and prints the cube of each element using pointer arithmetic.

🧠 Concepts Used:

2D Array
Pointer
Loop

💻 Code:

#include <stdio.h>

void findsum(int *ptr, int row)
{
    for (int i = 0; i < row * row; i++)
    {
        printf("%d\n", (*ptr) * (*ptr) * (*ptr));
        ptr++;
    }
}

int main()
{
    int row;

    printf("Enter array size:");
    scanf("%d", &row);

    int array[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter array element [%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nCube of the elements:\n");

    findsum(&array[0][0], row);

    return 0;
}

▶️ Output:

Enter array size: 2
Enter array element [0][0]: 1
Enter array element [0][1]: 2
Enter array element [1][0]: 3
Enter array element [1][1]: 4

Cube of the elements:
1
8
27
64

🌐 Run Online:

https://onlinegdb.com/k3psro5rg




🛠️ Tools Used

C Language
VS Code
OnlineGDB

👨‍💻 Author

Rutik Sarvaiya
🎓 Full Stack Web Developer Student
