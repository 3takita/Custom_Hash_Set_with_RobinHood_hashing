# Robin Hood HashSet (C++)
A high-performance custom HashSet built from scratch using **Robin Hood hashing** and modern C++ practices.

---

## Features
- Open Addressing (no chaining)
- Robin Hood hashing (balanced probe lengths)
- 64-bit hashing (`std::hash`)
- 7-bit fingerprint optimization
- Dynamic resizing (rehashing)
- Tombstone-based deletion
- Clean separation (header / implementation)

---

## Performance Insights
- **Fingerprinting**
  - Reduces expensive key comparisons
  - Inspired by modern hash tables (e.g., SwissTable)

- **Cache-friendly**
  - Contiguous memory (`std::vector`)

- **Robin Hood hashing**
  - Minimizes variance in lookup time

---

## Concepts Demonstrated
- Hash table internals
- Collision resolution strategies
- Memory-safe C++ (RAII)
- Performance optimization techniques

---

## Build & Run
```bash
g++ -std=c++17 src/*.cpp -Iinclude -o hashset
./hashset
```
## Author
Stephen Anaba
