// !!! THIS FILE IS AUTOGENERATED !!!
#include <gdt.h>
#include <idt.h>
void idt_init_entry(int interrupt, void *base, uint16_t segment, uint8_t type);

void ISR0();
void ISR1();
void ISR2();
void ISR3();
void ISR4();
void ISR5();
void ISR6();
void ISR7();
void ISR8();
void ISR9();
void ISR10();
void ISR11();
void ISR12();
void ISR13();
void ISR14();
void ISR15();
void ISR16();
void ISR17();
void ISR18();
void ISR19();
void ISR20();
void ISR21();
void ISR22();
void ISR23();
void ISR24();
void ISR25();
void ISR26();
void ISR27();
void ISR28();
void ISR29();
void ISR30();
void ISR31();
void ISR32();
void ISR33();
void ISR34();
void ISR35();
void ISR36();
void ISR37();
void ISR38();
void ISR39();
void ISR40();
void ISR41();
void ISR42();
void ISR43();
void ISR44();
void ISR45();
void ISR46();
void ISR47();
void ISR48();
void ISR49();
void ISR50();
void ISR51();
void ISR52();
void ISR53();
void ISR54();
void ISR55();
void ISR56();
void ISR57();
void ISR58();
void ISR59();
void ISR60();
void ISR61();
void ISR62();
void ISR63();
void ISR64();
void ISR65();
void ISR66();
void ISR67();
void ISR68();
void ISR69();
void ISR70();
void ISR71();
void ISR72();
void ISR73();
void ISR74();
void ISR75();
void ISR76();
void ISR77();
void ISR78();
void ISR79();
void ISR80();
void ISR81();
void ISR82();
void ISR83();
void ISR84();
void ISR85();
void ISR86();
void ISR87();
void ISR88();
void ISR89();
void ISR90();
void ISR91();
void ISR92();
void ISR93();
void ISR94();
void ISR95();
void ISR96();
void ISR97();
void ISR98();
void ISR99();
void ISR100();
void ISR101();
void ISR102();
void ISR103();
void ISR104();
void ISR105();
void ISR106();
void ISR107();
void ISR108();
void ISR109();
void ISR110();
void ISR111();
void ISR112();
void ISR113();
void ISR114();
void ISR115();
void ISR116();
void ISR117();
void ISR118();
void ISR119();
void ISR120();
void ISR121();
void ISR122();
void ISR123();
void ISR124();
void ISR125();
void ISR126();
void ISR127();
void ISR128();
void ISR129();
void ISR130();
void ISR131();
void ISR132();
void ISR133();
void ISR134();
void ISR135();
void ISR136();
void ISR137();
void ISR138();
void ISR139();
void ISR140();
void ISR141();
void ISR142();
void ISR143();
void ISR144();
void ISR145();
void ISR146();
void ISR147();
void ISR148();
void ISR149();
void ISR150();
void ISR151();
void ISR152();
void ISR153();
void ISR154();
void ISR155();
void ISR156();
void ISR157();
void ISR158();
void ISR159();
void ISR160();
void ISR161();
void ISR162();
void ISR163();
void ISR164();
void ISR165();
void ISR166();
void ISR167();
void ISR168();
void ISR169();
void ISR170();
void ISR171();
void ISR172();
void ISR173();
void ISR174();
void ISR175();
void ISR176();
void ISR177();
void ISR178();
void ISR179();
void ISR180();
void ISR181();
void ISR182();
void ISR183();
void ISR184();
void ISR185();
void ISR186();
void ISR187();
void ISR188();
void ISR189();
void ISR190();
void ISR191();
void ISR192();
void ISR193();
void ISR194();
void ISR195();
void ISR196();
void ISR197();
void ISR198();
void ISR199();
void ISR200();
void ISR201();
void ISR202();
void ISR203();
void ISR204();
void ISR205();
void ISR206();
void ISR207();
void ISR208();
void ISR209();
void ISR210();
void ISR211();
void ISR212();
void ISR213();
void ISR214();
void ISR215();
void ISR216();
void ISR217();
void ISR218();
void ISR219();
void ISR220();
void ISR221();
void ISR222();
void ISR223();
void ISR224();
void ISR225();
void ISR226();
void ISR227();
void ISR228();
void ISR229();
void ISR230();
void ISR231();
void ISR232();
void ISR233();
void ISR234();
void ISR235();
void ISR236();
void ISR237();
void ISR238();
void ISR239();
void ISR240();
void ISR241();
void ISR242();
void ISR243();
void ISR244();
void ISR245();
void ISR246();
void ISR247();
void ISR248();
void ISR249();
void ISR250();
void ISR251();
void ISR252();
void ISR253();
void ISR254();
void ISR255();

void isr_init_entries() {
  idt_init_entry(0, ISR0, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(1, ISR1, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(2, ISR2, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(3, ISR3, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(4, ISR4, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(5, ISR5, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(6, ISR6, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(7, ISR7, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(8, ISR8, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(9, ISR9, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(10, ISR10, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(11, ISR11, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(12, ISR12, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(13, ISR13, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(14, ISR14, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(15, ISR15, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(16, ISR16, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(17, ISR17, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(18, ISR18, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(19, ISR19, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(20, ISR20, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(21, ISR21, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(22, ISR22, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(23, ISR23, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(24, ISR24, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(25, ISR25, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(26, ISR26, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(27, ISR27, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(28, ISR28, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(29, ISR29, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(30, ISR30, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(31, ISR31, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(32, ISR32, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(33, ISR33, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(34, ISR34, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(35, ISR35, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(36, ISR36, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(37, ISR37, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(38, ISR38, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(39, ISR39, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(40, ISR40, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(41, ISR41, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(42, ISR42, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(43, ISR43, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(44, ISR44, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(45, ISR45, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(46, ISR46, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(47, ISR47, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(48, ISR48, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(49, ISR49, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(50, ISR50, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(51, ISR51, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(52, ISR52, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(53, ISR53, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(54, ISR54, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(55, ISR55, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(56, ISR56, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(57, ISR57, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(58, ISR58, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(59, ISR59, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(60, ISR60, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(61, ISR61, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(62, ISR62, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(63, ISR63, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(64, ISR64, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(65, ISR65, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(66, ISR66, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(67, ISR67, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(68, ISR68, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(69, ISR69, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(70, ISR70, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(71, ISR71, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(72, ISR72, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(73, ISR73, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(74, ISR74, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(75, ISR75, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(76, ISR76, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(77, ISR77, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(78, ISR78, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(79, ISR79, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(80, ISR80, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(81, ISR81, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(82, ISR82, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(83, ISR83, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(84, ISR84, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(85, ISR85, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(86, ISR86, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(87, ISR87, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(88, ISR88, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(89, ISR89, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(90, ISR90, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(91, ISR91, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(92, ISR92, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(93, ISR93, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(94, ISR94, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(95, ISR95, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(96, ISR96, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(97, ISR97, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(98, ISR98, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(99, ISR99, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(100, ISR100, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(101, ISR101, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(102, ISR102, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(103, ISR103, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(104, ISR104, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(105, ISR105, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(106, ISR106, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(107, ISR107, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(108, ISR108, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(109, ISR109, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(110, ISR110, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(111, ISR111, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(112, ISR112, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(113, ISR113, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(114, ISR114, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(115, ISR115, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(116, ISR116, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(117, ISR117, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(118, ISR118, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(119, ISR119, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(120, ISR120, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(121, ISR121, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(122, ISR122, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(123, ISR123, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(124, ISR124, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(125, ISR125, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(126, ISR126, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(127, ISR127, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(128, ISR128, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(129, ISR129, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(130, ISR130, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(131, ISR131, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(132, ISR132, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(133, ISR133, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(134, ISR134, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(135, ISR135, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(136, ISR136, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(137, ISR137, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(138, ISR138, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(139, ISR139, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(140, ISR140, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(141, ISR141, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(142, ISR142, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(143, ISR143, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(144, ISR144, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(145, ISR145, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(146, ISR146, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(147, ISR147, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(148, ISR148, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(149, ISR149, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(150, ISR150, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(151, ISR151, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(152, ISR152, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(153, ISR153, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(154, ISR154, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(155, ISR155, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(156, ISR156, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(157, ISR157, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(158, ISR158, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(159, ISR159, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(160, ISR160, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(161, ISR161, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(162, ISR162, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(163, ISR163, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(164, ISR164, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(165, ISR165, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(166, ISR166, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(167, ISR167, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(168, ISR168, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(169, ISR169, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(170, ISR170, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(171, ISR171, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(172, ISR172, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(173, ISR173, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(174, ISR174, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(175, ISR175, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(176, ISR176, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(177, ISR177, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(178, ISR178, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(179, ISR179, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(180, ISR180, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(181, ISR181, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(182, ISR182, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(183, ISR183, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(184, ISR184, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(185, ISR185, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(186, ISR186, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(187, ISR187, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(188, ISR188, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(189, ISR189, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(190, ISR190, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(191, ISR191, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(192, ISR192, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(193, ISR193, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(194, ISR194, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(195, ISR195, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(196, ISR196, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(197, ISR197, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(198, ISR198, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(199, ISR199, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(200, ISR200, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(201, ISR201, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(202, ISR202, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(203, ISR203, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(204, ISR204, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(205, ISR205, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(206, ISR206, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(207, ISR207, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(208, ISR208, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(209, ISR209, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(210, ISR210, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(211, ISR211, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(212, ISR212, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(213, ISR213, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(214, ISR214, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(215, ISR215, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(216, ISR216, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(217, ISR217, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(218, ISR218, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(219, ISR219, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(220, ISR220, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(221, ISR221, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(222, ISR222, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(223, ISR223, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(224, ISR224, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(225, ISR225, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(226, ISR226, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(227, ISR227, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(228, ISR228, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(229, ISR229, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(230, ISR230, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(231, ISR231, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(232, ISR232, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(233, ISR233, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(234, ISR234, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(235, ISR235, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(236, ISR236, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(237, ISR237, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(238, ISR238, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(239, ISR239, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(240, ISR240, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(241, ISR241, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(242, ISR242, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(243, ISR243, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(244, ISR244, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(245, ISR245, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(246, ISR246, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(247, ISR247, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(248, ISR248, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(249, ISR249, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(250, ISR250, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(251, ISR251, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(252, ISR252, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(253, ISR253, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(254, ISR254, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
  idt_init_entry(255, ISR255, GDT_KERNEL_CODE_64_BIT,
                 IDT_FLAG_RING0 | IDT_FLAG_GATE_64BIT_INT);
}