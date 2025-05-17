# Notes
This file is just a way to track progress in what I've been learning. 

## Concepts
- namespaces = 
## Methods
- **size_t** = unsigned integer type (always positive). You can use it in situations like this:
for (size_t i = 0; i < size(); i++) to ensure i that you don't get signed-unsigned mismatch error (size() is unsigned)
- **vector** = dynamic arrays, from std:: namespace (e.g. \<vector\> numbers;)
    - push_back() = adds an element to the end
        - numbers.push_back(20);  // [10, 20]
    - insert() = add an alement to specific spot
        - numbers.insert(numbers.begin(), 5); Inserts 5 at the beginning: [5, 10, 20]
    - 