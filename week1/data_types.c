#include <stdio.h>
// These are also called format specifiers

int dataTypes()
{
    int var_integer = 1;
    float var_float = 1.00;
    double var_double = 8.44e+12;
    char var_char = 'R';
    _Bool var_bool = 1;
    
    printf("var1_integer = %i\n",  var_integer);
    printf("var2_float = %f\n",  var_float);
    printf("var3_double = %e\n",  var_double);
    printf("var4_char = %c\n",  var_char);
    printf("var5_bool = %i\n",  var_bool);
    return 0;
    }