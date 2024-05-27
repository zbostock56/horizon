#pragma once

#include <globals.h>
#include <common/memory.h>

/* ----------------------------- STATIC GLOBALS ----------------------------- */

/* --------------------------------- DEFINES -------------------------------- */
#define DEFAULT_BG (COLOR_BLACK)

/* --------------------------------- MACROS --------------------------------- */

/* --------------------------- INTERNALLY DEFINED --------------------------- */
void fb_init(struct limine_framebuffer_request req);
void fb_putpixel(FRAMEBUFFER *fb, uint32_t x, uint32_t y, uint32_t color);
uint32_t fb_getpixel(FRAMEBUFFER *fb, uint32_t x, uint32_t y);
void fb_putc(FRAMEBUFFER *fb, uint32_t x, uint32_t y, uint32_t fgcolor,
              uint32_t bgcolor, uint8_t ch);
void fb_refresh(FRAMEBUFFER *fb);

/* --------------------------- EXTERNALLY DEFINED --------------------------- */
