#include "main.h"
/**
 * This file contains a function for computing the absolute value of an integer.
 */

/**
 * Computes the absolute value of an integer.
 *
 * @param i The integer to compute the absolute value of.
 * @return The absolute value of the integer i.
 */
int _abs(int i) {
    if (i < 0) {
        return -i;
    } else {
        return i;
    }
}
