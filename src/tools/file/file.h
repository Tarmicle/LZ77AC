//
// Created by Enrico on 09/10/2017.
//

#ifndef LZ77AC_FILE_H
#define LZ77AC_FILE_H
#include <stdio.h>
int stream_file_to(char *args,void (*output_handler)(unsigned char));
size_t get_extlen(char *filename);
const char *get_filename_ext(char *filename);
#endif //LZ77AC_FILE_H
