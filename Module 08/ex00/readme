# Template Function: easyfind

The `easyfind` function is a template function that provides a simplified way to search for a specific value within a container. It uses the `std::find` algorithm from the C++ Standard Library to perform the search.

## What does `std::find` do?

The `std::find` function is a part of the C++ Standard Library's `<algorithm>` header. It allows us to search for a specific value within a given range defined by two iterators. It returns an iterator pointing to the first occurrence of the value in the range, or the `end` iterator if the value is not found.

In the `easyfind` function, we use `std::find` to search for the value `toFind` within the container. The container can be any type that supports iterators and is passed as a reference to the function.

## Purpose of `easyfind`

The purpose of the `easyfind` function is to simplify the process of finding a value within a container and returning its position. It abstracts away the complexity of using iterators and provides a more straightforward interface for searching.

## How does `easyfind` work?

1. The function template `easyfind` takes two parameters:
   - `container` (passed by reference): The container in which the value will be searched.
   - `toFind`: The value that needs to be found within the container.

2. Inside the function, an iterator `it` of type `std::vector<int>::iterator` is declared. This iterator will store the result of the search.

3. The `std::find` algorithm is used to search for `toFind` within the container. It takes the `begin` and `end` iterators of the container, and the value to be found. The result of the search is assigned to the `it` iterator.

4. If the `it` iterator is equal to the `end` iterator of the container, it means the value was not found. In that case, the function returns -1 to indicate the value was not found.

5. If the `it` iterator is not equal to the `end` iterator, it means the value was found. The function calculates the position of the value by subtracting the `begin` iterator of the container from the `it` iterator. The result is returned as the position of the value within the container.

## Example usage:

Here's an example usage of the `easyfind` function:

```cpp
#include <iostream>
#include <vector>

template<typename T>
int easyfind(T &container, int toFind) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end()) return -1;
    return it - container.begin();
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int value = 30;

    int position = easyfind(numbers, value);
    if (position != -1) {
        std::cout << "Value " << value << " found at position " << position << std::endl;
    } else {
        std::cout << "Value " << value << " not found." << std::endl;
    }

    return 0;
}
```

Output:
```
Value 30 found at position 2
```

In this example, the `easyfind` function is used to search for the value `30` within the `numbers` vector. It successfully finds the value at position 2 and returns the position accordingly.

Please note that the `easyfind` function can be used with any container that supports iterators, not just `std::vector<int>`.
