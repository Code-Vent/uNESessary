//
// Created by Hamid on 2/28/2025.
//

#include"memory.h"


Memory::Memory(Range address, uint16_t size, uint16_t mask)
        : Peripheral(address), bytes(size, 0)
{
    address_mask = mask;
}

uint8_t Memory::read(uint16_t address) {
    return bytes.at((start_address - address)&address_mask);
}

void Memory::write(uint16_t address, uint8_t data) {
    bytes.at((start_address - address)&address_mask) = data;
}

uint8_t& Memory::operator[](int index)
{
    return bytes.at(index & address_mask);
}

uint8_t Memory::operator[](int index) const
{
    return bytes.at(index & address_mask);
}

void Memory::discard() {
    bytes.clear();
}