#include <stdio.h>

int lcm(int num1, int num2)
{
    static int i = 1; //creates a integer which does not initialise again when function is called a second time
    if (num1 > num2)
    {
        if (num1 % num2 == 0) //check if num1 is perfectly divisible by num 2
        {
            return num1;
        }
        else
        {
            num1 /= i; //num1 becomes the orignal value
            i++;
            return lcm(num1 * i, num2); //num1 is increased to become num1*i and function is called again until num2 does not leave a remainder when divided
        }
    }
    else
    {
        if (num2 % num1 == 0) //check if num2 is perfectly divisible by num 1
        {
            return num2;
        }
        else
        {
            num2 /= i; //num2 becomes the orignal value
            i++;
            return lcm(num1, num2 * i); //num2 is increased to become num2*i and function is called again until num1 does not leave a remainder when divided
        }
    }
}
int main()
{
    int num1, num2;
    printf("Input two numbers you want the LCM of\n");
    printf("NUMBER 1:  ");
    scanf("%d", &num1);
    printf("NUMBER 2:  ");
    scanf("%d", &num2);
    printf("The LCM of the two numbers is %d", lcm(num1, num2));
    return 0;
}
