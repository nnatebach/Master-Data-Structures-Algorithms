## Lesson Content
### Options to declare a struct
- Local variable

```
int main()
{
  struct Rectangle r1; // Option 1: Local variable
  printf("%d", sizeof(r1));

  return 0;
}
```

- Global variable
    - Write it outside main function<br>
    <br>

    ```
    // 1. Define a struct
    struct Rectangle
    {
      int length;
      int breadth;
    };

    // 2. Declare a struct

    struct Rectangle r1; // global variable

    int main()
    {
      printf("%d", sizeof(r1));

      return 0;
    }
    ```

    - Write it directly along with the struct definition<br>
    <br>

    ```
    // 1. Define a struct
    struct Rectangle
    {
      int length;
      int breadth;
    } r1; // Declare a struct r1
    } r1, r2, r3; // Declare multiple structs r1, r2, r3

    int main()
    {
      printf("%d", sizeof(r1));

      return 0;
    }
    ```
This is the output of **printf("%d", sizeof(r1));**
<br>

```
main.cpp: In function ‘int main()’:
main.cpp:23:12: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
   23 |   printf("%d", sizeof(r1));
      |           ~^   ~~~~~~~~~~
      |            |   |
      |            int long unsigned int
      |           %ld
8
```

The code will output 8 bytes for struct **r1**<br>
Alongside with this **warning**
```
warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
```
Reason: We need argument of type ‘int’ for **‘%d’**, however, **sizeof(r1)** has type ‘long unsigned int’.<br>
Solution: Replace **‘%d’** with **'%lu'**<br>
<br>

### Example: Memory consumption

Say we add **char x** on the new line within the struct definition

```
// 1. Define a struct
struct Rectangle
{
  int length;
  int breadth;
  char x;
};

// 2. Declare a struct

struct Rectangle r1; // global variable

int main()
{
  printf("%d", sizeof(r1));

  return 0;
}
```

The output of the memory consumption for **r1** will be

```
12
```

So the struct r1 is now consuming 12 bytes of the memory.<br>
<br>
<br>
**Reason:** Even though the **char** only consumes 1 byte in the memory, it is easier for the computer to read 4 bytes for all three variables rather than 4 bytes for length, another 4 bytes for breadth and then 1 byte for x. The computer will pick up 4 bytes but only use 1 byte.<br>
<br>
**Solution:** This is call <a href="https://www.linkedin.com/pulse/structure-padding-uttam-basu/">*structure padding*</a>.<br>
<br>
**Practical explanation:** Sometimes you just want to buy one tablet from the pharmacy but you will have to buy the whole strip instead because it is easier for the pharmacist to sell you the whole strip.

**Note:** To Reduce the accessing time of the Variable, C does what is called as structure padding. As a result, your size depends on whether you are using a 32 bit or 64-bit architecture.<br>

**Tips:** If you want the program to print out 9 (bytes) instead, you can include this directive
```
#pragma pack(1)
```
*pragma pack* is used to override the default alignment of struct/class members in memory. It varies depending on the architecture and/or compilation flags.