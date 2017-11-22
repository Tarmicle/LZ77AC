//
// Created by alice on 10.10.17.
//

#ifndef LZ77AC_AC_ENCODING_H
#define LZ77AC_AC_ENCODING_H

int get_total_char();

void ac_ranges(unsigned char next_char, int i);

void ac_encode(unsigned char next_char);

void build_frequency(unsigned char next_char);

void print_frequency();

int *get_frequency();


#endif //LZ77AC_AC_ENCODING_H