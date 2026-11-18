#define MAX_INT 100000
#define MIN_INT -100000
#define MAX_LONG 100000L
#define MIN_LONG -100000L
#define MAX_FLOAT 100000.0f
#define MIN_FLOAT -100000.0f
#define MAX_DOUBLE 100000.0
#define MIN_DOUBLE -100000.0
#define MAX_LDOUBLE 100000.0L
#define MIN_LDOUBLE -100000.0L
#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"


int put_array(int* ptr_array, int size) {

	for (int i = 0; i < size; i++) {

		printf("%d элемент: %d\n", i + 1, *(ptr_array + i));
	}

	return 0;
}

int full_array_int(int* ptr_array, int size) {

	for (int i = 0; i < size; i++) {
		*(ptr_array + i) = MIN_INT + (MAX_INT - MIN_INT) * rand() / RAND_MAX;
	}

	return 0;
}

int full_array_long(long* ptr_array, int size) {

	for (int i = 0; i < size; i++) {
		*(ptr_array + i) = MIN_LONG + (MAX_LONG - MIN_LONG) * (long)rand() / RAND_MAX;
	}

	return 0;
}

int full_array_float(float* ptr_array, int size) {

	for (int i = 0; i < size; i++) {
		*(ptr_array + i) = MIN_FLOAT + (MAX_FLOAT - MIN_FLOAT) * (float)rand() / RAND_MAX;
	}

	return 0;
}

int full_array_double(double* ptr_array, int size) {

	for (int i = 0; i < size; i++) {
		*(ptr_array + i) = MIN_DOUBLE + (MAX_DOUBLE - MIN_DOUBLE) * (double)rand() / RAND_MAX;
	}

	return 0;
}

int full_array_long_double(long double* ptr_array, int size) {

	for (int i = 0; i < size; i++) {
		*(ptr_array + i) = MIN_LDOUBLE + (MAX_LDOUBLE - MIN_LDOUBLE) * (long double)rand() / RAND_MAX;
	}

	return 0;
}