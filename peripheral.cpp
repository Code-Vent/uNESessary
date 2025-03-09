//
// Created by Hamid on 2/28/2025.
//
#include"peripheral.h"


Peripheral::Peripheral(Range address)
        : start_address(address.lower), end_address(address.upper)
{}

bool Peripheral::containsAddress(uint16_t address) {
    return address >= start_address && address <= end_address;
}


