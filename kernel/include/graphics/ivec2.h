/**
 * @file ivec2.h
 * @author Zack Bostock
 * @brief Information pertaining to 2D integer vectors
 *
 * @copyright Copyright (c) 2024
 *
 */

#pragma once

typedef struct {
  int x;
  int y;
} IVEC2;

/* ---------------------------- LITERAL CONSTANTS --------------------------- */
#define IVEC2_ZERO_INIT  {0, 0}
#define IVEC2_ONE_INIT   {1, 1}

#define IVEC2_ZERO       ((IVEC2) IVEC2_ZERO_INIT)
#define IVEC2_ONE        ((IVEC2) IVEC2_ONE_INIT)

/* -------------------------------- GLOBALS --------------------------------- */

/* --------------------------------- MACROS --------------------------------- */

/* --------------------------- INTERNALLY DEFINED --------------------------- */
void ivec2_scale(IVEC2 dest, int scale, IVEC2 source);
