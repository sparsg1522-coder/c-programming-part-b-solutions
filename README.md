# C Programming Part B Solutions

Complete beginner-readable C programs for the custom VS Code questions in Part B of *C Programming Platform Coding Practice Question Bank - Set 2*, through **Strings and character arrays** (inclusive). The later 2D array questions are intentionally not included.

## Problems

### Functions
1. [Find maximum of three integers](functions/q01_max_of_three.c)
2. [Count multiples in a range](functions/q02_count_multiples.c)
3. [Rectangle area](functions/q03_rectangle_area.c)
4. [Perfect square without `sqrt`](functions/q04_perfect_square.c)
5. [GCD using Euclid's algorithm](functions/q05_gcd.c)
6. [Convert seconds](functions/q06_convert_seconds.c)
7. [Evaluate a piecewise function](functions/q07_piecewise_function.c)

### Nested loops
1. [Count pairs with a target sum](nested-loops/q01_target_sum_pairs.c)
2. [Count relatively prime values](nested-loops/q02_relatively_prime_count.c)
3. [Pythagorean triples up to N](nested-loops/q03_pythagorean_triples.c)
4. [Pairs with equal digit sums](nested-loops/q04_equal_digit_sum_pairs.c)
5. [Closest pair difference](nested-loops/q05_closest_pair_difference.c)

### 1D arrays
1. [Longest increasing contiguous run](arrays-1d/q01_longest_increasing_run.c)

### Strings and character arrays
1. [Count vowels, consonants, digits, and spaces](strings/q01_character_counts.c)
2. [Run-length encode](strings/q02_run_length_encode.c)

## Compile and run

Each source file is a separate program with its own `main`. From the repository root, compile one file with GCC:

```sh
gcc -std=c11 -Wall -Wextra -pedantic functions/q01_max_of_three.c -o solution
./solution
```

On Windows PowerShell:

```powershell
gcc -std=c11 -Wall -Wextra -pedantic functions/q01_max_of_three.c -o solution.exe
.\solution.exe
```

Enter the input shown in that problem's sample below. Programs print only the requested answer, without prompts.

## Sample tests

| Problem | Sample input | Expected output |
|---|---|---|
| Max of three | `7 12 4` | `12` |
| Count multiples | `20 6` | `3` |
| Rectangle area | `8 5` | `40` |
| Perfect square | `144` | `1` |
| GCD | `48 18` | `6` |
| Convert seconds | `3672` | `1 1 12` |
| Piecewise function | `4` | `14` |
| Target sum pairs | `5 6` then `1 5 3 3 2` | `2` |
| Relatively prime count | `6 10` | `3` |
| Pythagorean triples | `5` | `3 4 5` |
| Equal digit-sum pairs | `4` then `12 30 21 5` | `3` |
| Closest pair difference | `5` then `8 1 14 4 20` | `3` |
| Increasing run | `8` then `1 2 2 3 4 1 2 3` | `3` |
| Character counts | `C is fun 2026!` | `2 4 4 2` |
| Run-length encode | `aaabbc` | `a3b2c1` |

## Input limits and approach

Programs use fixed-size arrays (at most 1,000 integers) and fixed-size character buffers (at most 1,000 input characters), with no dynamic allocation. Integer array values are expected to be within -1,000,000,000 to 1,000,000,000; this keeps pair sums and differences safe in `long long`. Positive counts and dimensions are checked before processing. The code uses ordinary loops, arrays, functions, and character tests to keep the logic approachable.

