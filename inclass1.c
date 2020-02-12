#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void func(int i);
void func1(int* i);
void print_string(char* c);

int main(int argc, char** argv){
	printf("---Lets see the size of the data types---\n");
	/*
		Sizeof is a much used operator in the C or C++.
		It is a compile time unary operator which can be
		used to compute the size of its operand.
		The result of sizeof is of unsigned integral type
		which is usually denoted by size_t. sizeof can be
		applied to any data-type, including primitive types
		such as integer and floating-point types, pointer types,
		or compound datatypes such as Structure, union etc.
	*/
	printf("size of char: %lu\n", sizeof(char));
	printf("size of short: %lu\n", sizeof(short));
	printf("size of int: %lu\n", sizeof(int));
	printf("size of long: %lu\n", sizeof(long));
	printf("size of float: %lu\n", sizeof(float));
	printf("size of double: %lu\n", sizeof(double));

	/*
		TODO:
		print the size of a type plus another type, see the example
		int+long
	*/
	printf("#####student code start#####\n");
	//////////Your code here//////////

	//example
	int type_int = 0;
	long type_long = 0;
	printf("size of int+long: %lu\n", sizeof(type_int+type_long));

	// my code
	size_t type_size_t = sizeof(sizeof(type_int));
	printf("size of size_t for type int: %d", type_size_t);

	//////////End of the code/////////
	printf("#####student code end#####\n");

	printf("\nWith different size, unsigned, or unsigned. \n");

	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    printf("\n");

    printf("Storage size for float : %lu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    /*
		TODO:
		print the value of max value of signed int + 1
		print the value of max value of unsigned int + 1
		print the value of max value of signed long + 1
		print the value of max value of float + 1
		print the value of max value of float + 1000
	*/
	printf("#####student code start#####\n");
    //////////Your code here//////////
	printf("INT + 1		:	%ld\n", (long) INT_MAX + 1L);
	printf("UINT_MAX + 1	:	%ld\n",(long) UINT_MAX + 1L);
	printf("LONG_MAX + 1	:	%lld\n",(long long) LONG_MAX + 1L);
	printf("FLT_MAX + 1	:	%g\n",(double) FLT_MAX + 1);
	printf("FLT_MAX + 1000	:	%g\n",(double) FLT_MAX + 1000);

	//////////End of the code/////////
	printf("#####student code end#####\n");

	printf("\n");

	printf("\n String's pointer size \n");
	char* s1 = "asd";
	printf("size of s1: %lu\n", sizeof(s1));
	char* s2 = "asdasdasd";
	printf("size of s2: %lu\n", sizeof(s2));
	/*
		TODO:
		Why we are getting this result?
	*/

	printf("\nIs 1 equals to true? \n");
	//1 is true, 0 is false
	if(1)
		printf("1==true\n");
	else
		printf("1!=true\n");

	int i = 0;
	func(i);
	printf("func: %d\n", i);
	func1(&i);
	printf("func1: %d\n", i);

	printf("Program Name Is: %s",argv[0]);
    if(argc==1){
    	printf("\nNo Extra Command Line Argument Passed Other Than Program Name\n");
     }
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(int j=0; j<argc; j++)
            printf("\nargv[%d]: %s",j,argv[j]);
    }

    //TODO: uncommend below code after complete print_string fucntion
    print_string(s1);
    print_string(s2);

    //exit status for the OS, 0 means no error.
    //It is different than the C true/false value
	return 0;
}

void func(int i){
	i++;
}

void func1(int* i){
	(*i)++;
}

void print_string(char *c) {
	printf("%s\n", c);
}
/*
	TODO:
	Add a function that name as "print_string", which takes a string
	as input and no output.
	This function needs to print the string in the concole.
*/
