# LESS: Linear Equations Systems Solver

Academic activity for the parallel programming lab course from the Computer Science undegraduate course of Universidade Federal Fluminense.

## How tos

To check for syntax errors, you may use:

`make check`

To generate a release build (placed at `build/release/main`), just use:

`make release`

To generate a release build and run, use:

`make run`

## Results

| Matrix size | Time - 1 process | Time - 2 processes | Speedup - 2 processes | Time - 4 processes | Speedup - 4 processes |
|:-----------:|------------------|--------------------|-----------------------|--------------------|-----------------------|
| 50          | 0,132 s          | 0,131 s            | 1,008                 | 0,126 s            | 1,047                 |
| 500         | 0,231 s          | 0,184 s            | 1,225                 | 0,155 s            | 1,490                 |
| 1500        | 3,651 s          | 1,948 s            | 1,874                 | 1,070 s            | 3,412                 |