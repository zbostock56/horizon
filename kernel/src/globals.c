#include <globals.h>

/* Scheduling */
uint64_t system_time = 0;
uint8_t preempt_quantum = QUANTUM;

/* Framebuffers */
FRAMEBUFFER initial_fb;

/* Interrupt descriptor table */
__attribute__((aligned(0x10))) IDT_ENTRY g_idt[X86_64_IDT_ENTRIES] = {0};
IDT_DESCRIPTOR g_idt_descriptor = {
    sizeof(g_idt) - 1,
    (uint64_t) g_idt
};

/* Global descriptor table */
GDT_TABLE g_gdt[NUM_CPUS] = {0};
size_t num_gdt = 0;

/* Interrupt service routines */
ISR_HANDLER g_isr_handlers[X86_64_IDT_ENTRIES] = {0};

/* PSF1 Font */
PSF1_FONT font;