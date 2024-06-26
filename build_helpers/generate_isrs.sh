#!/bin/bash

# exit on error
set -e

# print usage
if [ $# -le 1 ]; then
    echo "Usage: generate_isrs.sh <isrs_gen.c> <isrs_gen.inc>"
    exit 1
fi

# vars
ISRS_GEN_C=$1
ISRS_GEN_ASM=$2

ISRS_WITH_ERROR_CODE="8 10 11 12 13 14 17 21"


#
# Generate C file
#
echo "// !!! THIS FILE IS AUTOGENERATED !!!" > $ISRS_GEN_C
echo "#include <idt.h>" >> $ISRS_GEN_C
echo "#include <gdt.h>" >> $ISRS_GEN_C
echo "void idt_init_entry(int interrupt, void *base, uint16_t segment, uint8_t type);" >> $ISRS_GEN_C
echo "" >> $ISRS_GEN_C

for i in $(seq 0 255); do
    echo "void ISR${i}();" >> $ISRS_GEN_C
done

for i in $(seq 0 255); do
    echo "void ISR${i}();" >> $ISRS_GEN_C
done

echo "" >> $ISRS_GEN_C
echo "void isr_init_entries() {" >> $ISRS_GEN_C

for i in $(seq 0 255); do
    echo "    idt_init_entry(${i}, ISR${i}, GDT_KERNEL_CODE_64_BIT, IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);" >> $ISRS_GEN_C
done


echo "}" >> $ISRS_GEN_C

#
# Generate assembly file
#
echo "; !!! THIS FILE IS AUTOGENERATED !!!" > $ISRS_GEN_ASM

for i in $(seq 0 255); do
    if echo "$ISRS_WITH_ERROR_CODE" | grep -q "\b${i}\b"; then
        echo "ISR_ERRORCODE ${i}" >> $ISRS_GEN_ASM
    else
        echo "ISR_NOERRORCODE ${i}" >> $ISRS_GEN_ASM
    fi
done