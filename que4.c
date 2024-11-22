//Accept one number and check whether is is divisible by 5 or not.
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
 {
    if ((iNo % 5) == 0) 
    {
        return TRUE; // Return TRUE if divisible by 5
    } else
     {
        return FALSE; // Return FALSE if not divisible by 5
    }
}

int main() {
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue); // Call the Check function

    if (bRet == TRUE) 
    {
        printf("The number is divisible by 5.\n");
    } else 
    {
        printf("The number is not divisible by 5.\n");
    }

    return 0;

}