## About The Practices
These practices were following the course list of [C++ Programming Bootcamp 2023](https://www.youtube.com/playlist?list=PLsjuuR8X0yM2IvBExLsQFEyjxyNdq20A8) created by [The Incomplete Engineer](https://www.youtube.com/@TheIncompleteEngineer)

## C++ Installation
- Use g++ to compile the code. You can do this by following the [guide](https://code.visualstudio.com/docs/cpp/config-mingw)
- **DO NOT USE MSVC** to compile your c++ code on visual studio code. **AGAIN, DO NOT USE MSVC!**
- Install [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to facilitate the compiling and running process.

## About C++ Versions
The different features added in each version listed in
[https://en.cppreference.com/w/cpp](https://en.cppreference.com/w/cpp).

## About Ignore Settings
Since the compiling process will generate files with no extension name, so the following `.gitignore` settings will exclude such intermediate objects.
```
*
!*/
!*.*
```
`\*` tells git to ignore everything. <br>
`!*/` then unignores anything that is a directory. This is crucial. <br>
`!*.*` unignores all files with an extension. <br>

## Templates
```c++
#include <iostream>

using namespace std;

int main()
{
    return 0;
}
```