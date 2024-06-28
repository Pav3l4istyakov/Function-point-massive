#include <stdio.h>

void Plus(int number1, int number2)

{

    printf("number1+number2=%d \n", number1 + number2);

}

void minus(int num1, int num2)

{

    printf("numb1-numb2=%d \n", num1 - num2);

}

void umn(int numb1, int numb2)

{

    printf("numb1*numb2=%d \n", numb1 * numb2);

}

int main()

{

    int variableOne = 20;

    int VariableTwo = 30;

    void (*operations[3])(int, int) = { Plus, minus, umn };

    int length = sizeof(operations) / sizeof(operations[0]);

    for (int i = 0; i < length; i++)

    {

        operations[i](variableOne, VariableTwo);    

    }



    return 0;

}