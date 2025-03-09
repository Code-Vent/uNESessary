//
// Created by Hamid on 2/28/2025.
//

#ifndef NES_PERIPHERAL_H
#define NES_PERIPHERAL_H
#include<cstdint>

struct Range{
    uint16_t lower;
    uint16_t upper;
};

class Peripheral {
protected:
    uint16_t start_address, end_address;
public:
    Peripheral(Range address);
    virtual void write(uint16_t address, uint8_t data) {}
    virtual uint8_t read(uint16_t address) { return 0; }
    bool containsAddress(uint16_t address);
};

#endif //NES_PERIPHERAL_H
