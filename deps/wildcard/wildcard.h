
// Influenced by
/*
 ***********************************************************************
 *                 C++ Wildcard Pattern Matching Library               *
 *                                                                     *
 * Author: Arash Partow (2001)                                         *
 * URL: https://www.partow.net/programming/wildcardmatching/index.html *
 *                                                                     *
 * Copyright notice:                                                   *
 * Free use of the C++ Wildcard Pattern Matching Library is permitted  *
 * under the guidelines and in accordance with the most current        *
 * version of the MIT License.                                         *
 * https://www.opensource.org/licenses/MIT                             *
 *                                                                     *
 ***********************************************************************
*/

#pragma once

#include <string.h>

#include "trie/rune_util.h"

typedef enum {
  FULL_MATCH = 0,
  PARTIAL_MATCH = 1,
  NO_MATCH = 2,
} match_t;

match_t WildcardMatchChar(const char *pattern, size_t p_len, const char *str, size_t str_len);
match_t WildcardMatchRune(const rune *pattern, size_t p_len, const rune *str, size_t str_len);
