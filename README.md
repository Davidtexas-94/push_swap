*This project has been created as part of the 42 curriculum by acano-kr, dserra-d.*

---

# Push_Swap

> *Because Swap_push doesn't feel as natural.*

A sorting algorithm project built in C that sorts a stack of integers using a limited set of operations and the minimum possible number of moves. The program selects the most efficient strategy based on the measured disorder of the input.

---

## Authors

| Login | GitHub |
|-------|--------|
| acano-kr | [@acano-kr](https://github.com/XandaoKruger) |
| dserra-d | [@dserra-d](https://github.com/Davidtexas-94) |


---

## Description

**Push_swap** receives a list of integers as arguments and outputs the shortest possible sequence of stack operations that sorts them in ascending order.

The program uses two stacks — `a` and `b` — and a set of 11 operations to manipulate them. It implements four distinct sorting strategies and selects the most appropriate one based on a **disorder metric** calculated before any moves are made.

### Available operations

| Operation | Description |
|-----------|-------------|
| `sa` / `sb` / `ss` | Swap the top two elements of stack a / b / both |
| `pa` / `pb` | Push the top element from b to a / from a to b |
| `ra` / `rb` / `rr` | Rotate stack a / b / both upward |
| `rra` / `rrb` / `rrr` | Reverse rotate stack a / b / both |

---

## Instructions

### Requirements

- GCC or Clang with C99 support
- GNU Make
- A Unix-based system (Linux or macOS)

### Compilation

```bash
# Clone the repository
git clone <https://github.com/Davidtexas-94/push_swap.git>
cd push_swap

# Compile
make

# Clean object files
make clean

# Full clean (including binary)
make fclean

# Recompile from scratch
make re
```

### Usage

```bash
# Basic usage — default strategy (adaptive)
./push_swap 4 67 3 87 23

# Force a specific strategy
./push_swap --simple   5 4 3 2 1
./push_swap --medium   5 4 3 2 1
./push_swap --complex  5 4 3 2 1
./push_swap --adaptive 5 4 3 2 1

# Enable benchmark mode (outputs metrics to stderr)
./push_swap --bench --adaptive 4 67 3 87 23

# Count total operations generated
./push_swap 4 67 3 87 23 | wc -l

# Verify correctness with checker
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker_linux $ARG
```

### Input formats accepted

```bash
# Space-separated arguments
./push_swap 3 1 2

# Quoted string
./push_swap "3 1 2"

# Mixed
./push_swap "3 1" 2 "4 5"
```

### Error handling

The program prints `Error` to stderr and exits in the following cases:

- Non-integer arguments
- Integers outside the valid `int` range
- Duplicate values
- Invalid flags

```bash
./push_swap 0 one 2       # Error
./push_swap 3 2 3         # Error
./push_swap --invalido 1  # Error
```

### Benchmark mode output

When `--bench` is passed, the following is printed to stderr after sorting:

```
[bench] disorder:    XX.XX%
[bench] strategy:    Adaptive / O(n log n)
[bench] total_ops:   XXXX
[bench] sa: X  sb: X  ss: X  pa: X  pb: X
[bench] ra: X  rb: X  rr: X  rra: X  rrb: X  rrr: X
```

---

## Performance Benchmarks

| Input size | Pass (min) | Good | Excellent |
|------------|-----------|------|-----------|
| 100 numbers | < 2000 ops | < 1500 ops | < 700 ops |
| 500 numbers | < 12000 ops | < 8000 ops | < 5500 ops |

```bash
# Test with random input
shuf -i 0-9999 -n 100 > args.txt && ./push_swap $(cat args.txt) | wc -l
shuf -i 0-9999 -n 500 > args.txt && ./push_swap $(cat args.txt) | wc -l
```

---

## Algorithms

> *This section will be completed once all four strategies are fully implemented.*

### Disorder Metric

Before any moves, the program computes a disorder value between 0 and 1 using the Kendall tau metric — counting inversions (pairs where a larger number appears before a smaller one) divided by the total number of pairs.

### Strategies

| Flag | Complexity | Disorder threshold |
|------|-----------|-------------------|
| `--simple` | O(n²) | < 0.2 |
| `--medium` | O(n√n) | 0.2 – 0.5 |
| `--complex` | O(n log n) | ≥ 0.5 |
| `--adaptive` | Selects above | automatic |

> Detailed explanation, justification, and complexity arguments for each strategy will be added here.

---

## Project Structure

```
push_swap/
├── push_swap.h
├── Makefile
├── algorithm/
│   ├── algo_simple.c
│   └── algo_utils.c
├── operations/
│   ├── operation_utils.c
│   ├── push_swap_operations.c
│   ├── rotate_operations.c
│   └── reverse_operations.c
├── srcs/
│   ├── main.c
│   ├── flags.c
│   ├── parse.c
│   ├── stack.c
│   ├── utils.c
│   └── push_swap.c
└── libft/
```

---

## Resources

### References

- [Push_swap Visualizer](https://github.com/o-reo/push_swap_visualizer) — visual debugger for stack operations
- [Sorting Algorithms — Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Kendall tau distance](https://en.wikipedia.org/wiki/Kendall_tau_distance) — basis for the disorder metric
- [Big-O Notation — CS50](https://cs50.harvard.edu/x/2024/notes/3/) — algorithmic complexity reference

### AI Usage

Throughout this project, AI (Claude by Anthropic) was used as a collaborative tool for:

- **Architecture decisions** — discussing data structure choices (linked list vs array) and their trade-offs for this specific problem
- **Debugging** — identifying logic errors in pointer manipulation and stack operations
- **Code review** — validating correctness of individual functions before integration
- **Understanding complexity** — clarifying how Big-O applies specifically to the push_swap operation model (not classical array operations)

All AI-generated suggestions were reviewed, tested, and fully understood by both authors before being incorporated. No code was blindly copied — every function was written and validated by the team.
