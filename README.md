# Qt/C++ vs. PyQt/Python

This rudimentary test compares the runtime performance of some aspects of the QImage implementation between native Qt for C++ and PyQt for Python.

The test loads a 10179 x 1400 JPG image ([source](https://commons.wikimedia.org/wiki/File:An_Teallach_panorama.jpg)), scales it to 1400 x 10179 (reverse width/height) 100 times, then saves the scaled image to disk.

## Results

| Implementation     | Time     |
| ------------------ | -------- |
| C++ (GCC 9.3, -O0) | 25.626 s |
| C++ (GCC 9.3, -O3) | 25.536 s |
| Python 3.8         | 25.547 s |

Since performance benchmarks are notoriously difficult to do right, you should take these results with a pinch of salt (or as a starting point for your own investigations).

## Usage

### Building the C++ version

```
g++ -Wall -O0 -std=c++17 -fPIC -isystem /usr/include/x86_64-linux-gnu/qt5/ qt.cpp -o ./qt -lQt5Core -lQt5Gui
```

### Running the test

The C++ version:

```
$ time ./qt

0
...
99

real    0m25,626s
user    0m23,736s
sys     0m1,837s
```

The Python version:

```
$ time python3 pyqt.py

0
...
99

real    0m25,547s
user    0m23,814s
sys     0m1,708s
```
