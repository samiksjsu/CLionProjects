/*
#include <stdio.h>

int * func(){
    static int mystatic = -1;
    */
/*Here I have defined a static variable.
    This variable will be initialized only once in the data section and will remain
    till the whole life cycle of the program. Therefore, even if the function scope ends,
    this variable will still be there in the address where it was initialized.*//*

    printf("mystatic = %d\n", mystatic);
    return &mystatic;
    */
/*Here we are returning the address of the static variable
    so that the caller gets the address where this is initialized
    and so that it can be accessed from outside*//*

}

int main() {
    int *num1 = func();
    //Pointer num1 gets the address of the static variable.
    printf("The value of num is %d\n", *num1);
    //Printing the value of the static variable using pointer de-referencing.

    printf("Modifying the value of num\n");
    *num1 = 56;
    //Changing the value using pointer de-referencing will change the value of the original static variable.

    printf("The current value of num is ");
    func();
    //Priting the value again proves the above point. The updated value if now getting printed.
}*/
