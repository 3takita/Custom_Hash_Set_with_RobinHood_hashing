#ifndef ENTRY_H
#define ENTRY_H

#include <cstdint>

/*
 * Enum representing the state of a slot in the hash table.
 * EMPTY    : slot has never been used
 * OCCUPIED : slot contains a valid key
 * DELETED  : slot previously held a key (tombstone)
 */
enum class State : uint8_t {
    EMPTY,
    OCCUPIED,
    DELETED
};

/*
 * Entry represents a single slot in the hash table.
 * 
 * Design choices:
 * - fingerprint: small hash fragment for fast comparison
 * - probe_count: distance from original hash position (Robin Hood logic)
 */
struct Entry {
    int key;              // stored key
    uint8_t fingerprint;  // 7-bit hash fragment (optimization)
    int probe_count;      // distance from original hash index
    State state;          // slot state

    // Default constructor initializes as EMPTY slot
    Entry()
        : key(0), fingerprint(0), probe_count(0), state(State::EMPTY) {}
};

#endif
