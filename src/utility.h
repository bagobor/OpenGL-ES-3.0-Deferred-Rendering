/*! @file utility.h
 *  @brief Various C utility functions
 *  @copyright Copyright (c) 2013 Kyle Weicht. All rights reserved.
 */
#ifndef __utility_h__
#define __utility_h__

#include <stddef.h>

/** @brief Retrieves a line from a string
 *  @param line [in] A buffer to hold the retrieved line
 *  @param line_size [in] The size of the `line` buffer
 *  @param buffer [in] The buffer to parse
 *  @return A pointer to the next line in the buffer, 0 when at the end
 */
const char* get_line_from_buffer(char* line, size_t line_size, const char* buffer);

const char* get_extension_from_filename(const char* filename);

void split_filename(char* path, size_t path_size,
                    char* file, size_t file_size,
                    const char* filename);

#endif /* include guard */
