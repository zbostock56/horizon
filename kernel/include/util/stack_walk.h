#pragma once

#include <globals.h>

/* ----------------------------- STATIC GLOBALS ----------------------------- */

/* --------------------------------- DEFINES -------------------------------- */

/* --------------------------------- MACROS --------------------------------- */

/* --------------------------- INTERNALLY DEFINED --------------------------- */
void stack_walk(void *ebp, uint8_t depth);

/* --------------------------- EXTERNALLY DEFINED --------------------------- */
void walk_memory(void *rsp, uint8_t depth);