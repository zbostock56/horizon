/**
 * @file vec3.h
 * @author Zack Bostock
 * @brief Information pertaining to 3D floating-point vectors
 *
 * @copyright Copyright (c) 2024
 *
 */

#pragma once

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

/* ---------------------------- LITERAL CONSTANTS --------------------------- */
#define VEC3_ZERO_INIT  {0.0f, 0.0f, 0.0f}
#define VEC3_ONE_INIT   {1.0f, 1.0f, 1.0f}

#define VEC3_ZERO       ((VEC3) VEC3_ZERO_INIT)
#define VEC3_ONE        ((VEC3) VEC3_ONE_INIT)

/* -------------------------------- GLOBALS --------------------------------- */

/* --------------------------------- MACROS --------------------------------- */

/* --------------------------- INTERNALLY DEFINED --------------------------- */
