<!-- {% raw %} -->
# Rainfall I: OOPS22-Rainfall-020

## Source

Space: `·` Tab: `-` [EOL](https://en.wikipedia.org/wiki/Newline) `$`

```C++
 1 #include <iostream>$
 2 #include <iomanip>$
 3 #include <vector>$
 4 $
 5 using namespace std;$
 6 $
 7 int main() {$
 8 ····vector<float> rainfall;$
 9 ····float t;$
10 ····float m;$
11 ····float n;$
12 ····while (cin >> n) {$
13 ········rainfall.push_back(n);$
14 ····}$
15 ····if (!rainfall.size()) {$
16 ········cout << "Error: no rainfall data";$
17 ········return 1;$
18 ····}$
19 ····t = rainfall[0];$
20 ····m = rainfall[0];$
21 ····for (vector<float>::size_type i = 1; i < rainfall.size(); ++i) {$
22 ········t += rainfall[i];$
23 ········if (rainfall[i] > m)$
24 ············m = rainfall[i];$
25 ····}$
26 ····cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << (t / rainfall.size()) << " hundreds of inches" << '\n';$
27 ····cout << "Heaviest Hourly Rainfall: " << m << " hundreds of inches" << '\n';$
28 }$
```

## Style

Changed files:

```console
```

Indentation Patterns for rainfall.cpp

```console
....
........
............
```

## Build
% mkdir build; cd build; cmake ..


```console
-- The C compiler identification is GNU 9.3.0
-- The CXX compiler identification is GNU 9.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Check output uses diff: /usr/bin/diff
-- Configuring done
-- Generating done
-- Build files have been written to: /Build
```
% make

```console
[ 50%] Building CXX object CMakeFiles/rainfall.dir/rainfall.cpp.o
[100%] Linking CXX executable rainfall
[100%] Built target rainfall
```

% make run

```console
Consolidate compiler generated dependencies of target rainfall
[100%] Built target rainfall
Average Hourly Rainfall: 0.04 hundreds of inches
Heaviest Hourly Rainfall: 1.04 hundreds of inches
[100%] Built target run
```

% make check

```console
[100%] Built target rainfall
[100%] Built target check
```


## Commit Messages

```console
wdiff: ../oracle/log.txt: No such file or directory
```

# Commits

<!-- {% endraw %} -->
