### LESSON CONTENT - PRACTICE: POINTER TO STRUCTURE
Comparing the syntax differences between C and C++
- Pointer pointing to an existing structure (static).
- Dynamically allocating a structure using pointer (dynamic).

==========================

#### Struct syntax differences

##### Given the struct
```
struct Rectangle {
    int length;
    int breadth;
};
```
##### Main program
1. struct keyword
- C language

    ```
    struct Rectangle r = {10, 5}
    ```
- C++<br>
You can skip the "struct" keyword

    ```
    Rectangle r = {10, 5};
    ```

2. Accessing struct member
- Given "r", an object of type structure

    ```
    Rectangle r = {10, 5};
    ```
    You can access the struct members by using the "dot" operator
    ```
    r.length
    r.breadth
    ```
- Given "p" as a pointer

    ```
    Rectangle *p = &r;
    ```
    Use the "arrow" for accessing the struct members.
    ```
    r->length
    r->breadth
    ```
3. Creating an object of the given "Rectangle" structure in heap
- Step 1: Declaring a pointer

    ```
    Rectangle *p;
    ```
- Step 2: Creating the object in heap
    - C language

        ```
        p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
        ```
    - C++ language

        ```
        p = new Rectangle;
        ```
    Here a Rectangle object will be created in heap and the pointer will be pointing on it.

#### A complete program
- Structure: Same for all code samples

    ```
    struct Rectangle {
        int length;
        int breadth;
    };
    ```

- Pointer to an existing structure
    - directive for both languages

        ```
        #include <stdio.h>
        ```
    - In C language

        ```
        int main()
        {
            
            struct Rectangle r = {10, 5};
            struct Rectangle *p = &r;
            
            printf("Length: %d\n",(*p).length);
        
            return 0;
        }
        ```
        Output:
        ```
        10
        ```

    - In C++ language
        - extra directives
            ```
            #include <iostream>
            
            using namespace std;
            ```
        - main program

            ```
            int main()
            {
                
                Rectangle r = {10, 5};
                Rectangle *p = &r;
                
                cout << p->length << endl;
            
                return 0;
            }
            ```
            Output:
            ```
            10
            ```
        **Note:** Both ```(*p).length``` and ```p->length``` are accepted in C++ compiler.

- Dynamic allocation

    - In C language
        - directives
        
            ```
            #include <stdio.h>;
            #include <stdlib.h>
            ```
    
        - main program
    
            ```
            int main()
            {
                struct Rectangle *p;
                p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
                
                p->length = 20;
                
                printf("Length %d\n", p->length);
            
                return 0;
            }
            ```
            Output:
            ```
            Length: 20
            ```
    <br>
    
    - In C++ language
        - directives
    
            ```
            #include <stdio.h>
            #include <iostream>
            
            using namespace std;
            ```
            
        - main program
        
            ```
            int main()
            {
                Rectangle *p;
                p = new Rectangle;
                
                p->length = 20;
                
                cout << "Length: " << p->length << endl;
            
                return 0;
            }
            ```
            Output:
            ```
            Length: 20
            ```