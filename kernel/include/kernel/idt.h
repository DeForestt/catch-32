#include <stdint.h>
//Create a strunct Representation an interrupt descriptor
struct InerruptDescriptor{
    uint16_t offset_l;
    uint16_t selector;
    uint8_t zero;
    uint8_t type_attr;
    uint16_t offset_h;
};