### LESSON CONTENT - PRACTICE: FUNCTIONS

======================

#### Full code
```
#include <iostream>

using namespace std;

int add (int a, int b) {
    int c;
    c = a + b;
    
    return c;
}

int main()
{
    int num1 = 10, num2 = 15, sum;
    
    sum = add(num1, num2);
    
    cout << "The sum is " << sum << endl;

    return 0;
}
```
Output:
```
The sum is 25
```

#### Explanation:
- **add** function
    - The prototype / declaration for *add* function
    
        ```
        int add (int a, int b)
        ```
        The reason to use "*int*" type for it was because you wanted the function to return something (the value c for the main function).<br>
        If you don't need it to return anything then you can use type "*void*" for it.
    - Parameters (*int a*, *int b*)

        ```
        int add (int a, int b)
        ```
        - These are called *formal parameters* because they are *temporary values*.
        - They are used when you call the function **add** and they will be deleted when the function terminates or is destroyed.
- **main** function
    - **add** function call

        ```
        sum = add(num1, num2);
        ```
        - *num1* and *num2* are called *actual parameters* because in here you are calling the **add** function and *num1* is copied to *int a* and *num2* is copied to *int b* in the **add** function prototype (declaration).
        - ```add(num1, num2);``` will receive the result returned from the separate **add** function and assign it to ```sum```. Without ```sum```, you are not receiving any result from the separate **add** function.
    - Calculating *sum* within **main** function
        - You can replace ```sum = add(num1, num2);``` with ```sum = num1 + num2;``` if you want to calculate the *sum* of the addition within the **main** function. However, that will increase the workload for the **main** function.
        - Therefore, having a separate **add** function will help reduce the workload for the **main** function.
        - In general, you can calculate the *sum* anywhere you want, you can choose the best solution for your program.
