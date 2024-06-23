<a name="readme-top"></a>
<div align="center"> <img src="https://capsule-render.vercel.app/api?type=rounded&height=100&color=0ABAB5&text=Exam_Rank02&section=header&fontAlign=52&fontAlignY=55&fontColor=fcf3f2" />


## Table of Contents

<!-- mtoc-start -->

* [About](#about)
* [Tips](#tips)
* [Exam Exercises 🧪](#exam-exercises-)
  * [Exam Rank 2](#exam-rank-2)
  * [Exam Rank 3](#exam-rank-3)
  * [License :copyright:](#license-copyright)

<!-- mtoc-end -->
___

</div>

# About

This is the first exam in the Common Core at 42 schools! Don’t worry, it is normally very tricky, especially because there are a lot of different questions. I’m here to help you with an overview of the exam!

Most of the questions are based on the first project developed, Libft! The exam addresses essential topics in C, such as string manipulation, lists, math, and even bitwise operations! The important thing is not only to study all the questions, rather is to realize very well the topics mentioned above!

---

## Tips!

Point a terminal to your `~/` directory and add the following lines to your `.zshrc` and `.vimrc` files.

If any of these files does not exist, create it! This should be the case for `.vimrc`.

- `.zshrc`

Add convenient aliases:
```bash
# Compile with warnings & debug symbols
alias ccw='cc -Wall -Wextra -Werror -g'

# Git
alias ga='git add'
alias gst='git status'
alias gc='git commit -m'
```

- `.vimrc`

A basic vim configuration, edit this to your liking.
```vim
syntax on
set mouse=a	" Enable mouse
set noswapfile	" Disable swap files

set ruler
set number
set relativenumber

set tabstop=4
set shiftwidth=4

set autoindent
set smartindent

runtime! ftplugin/man.vim " Open man pages in Vim
```
___

## Levels and Topics

The Rank 2 Exam has four levels, comprises of several exercises each. Each level, naturally, will be more challanging then the last one.

The topics in the exam can be summarized in four: **String Manipulation**, **Linked Lists**, **Math Operations**, **Bitwise Operations**

In the following table you can see how this is organized:

---2
| Topics      | Level 1    | Level 2     | Level 3    | Level 4 |
| ----------  | ------------ | --------- | ----------- | -------- |

___

## Exam Exercises 🧪

### Exam Rank 2

The Rank 2 Exam has four levels, comprised of several exercises each. 

> <kbd>Tip</kbd> 
>
> `ft_isspace` is a particularly helpful function when solving a lot of the exercises through every level of the exam.

Here follow the solutions to all exam exercises (as of January 2024), including all test code and `.gdbinit` files developed to test and study each exercise. 
___
| Level 1       | Level 2 | Level 3 | Level 4 |
| -------       | ------- | ------- | ------- |
| [first_word](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/first_word) | [alpha_mirror](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/alpha_mirror) | [add_prime_sum](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/add_prime_sum) | [flood_fill](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/flood_fill) |
| [fizzbuzz](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/fizzbuzz) | [camel_to_snake](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/camel_to_snake) | [epur_str](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/epur_str) | [fprime](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/fprime) |
| [ft_putstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_putstr) | [do_op](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/do_op) | [expand_str](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/expand_str) | [ft_itoa](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_itoa) |
| [ft_strcpy](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_strcpy) | [ft_atoi](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_atoi) | [ft_atoi_base](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_atoi_base) | [ft_list_foreach](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_foreach) |
| [ft_strlen](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_strlen) | [ft_strcmp](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strcmp) | [ft_list_size](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_list_size) | [ft_list_remove_if](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_remove_if) |
| [ft_swap](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_swap) | [ft_strcspn](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strcspn) | [ft_range](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_range) | [ft_split](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_split) |
| [repeat_alpha](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/repeat_alpha) | [ft_strdup](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strdup) |  [ft_rrange](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_rrange) | [rev_wstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rev_wstr) |
| [rev_print](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rev_print) | [ft_strpbrk](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strpbrk) | [hidenp](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/hidenp) | [rostring](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rostring) |
| [rot_13](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rot_13) | [ft_strrev](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strrev) | [lcm](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/lcm) | [sort_int_tab](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_int_tab) |
| [rotone](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rotone) | [ft_strspn](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strspn) | [paramsum](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/paramsum) | [sort_list](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_list) |
| [search_and_replace](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/search_and_replace) | [inter](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/inter) | [pgdc](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/pgdc) |
| [ulstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ulstr) | [is_power_of_2](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/is_power_of_2) | [print_hex](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/print_hex) |
|          | [last_word](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/last_word) | [rstr_capitalizer](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/rstr_capitalizer) |
|          | [max](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/max) | [str_capitalizer](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/str_capitalizer) |
|          | [print_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/print_bits) | [tab_mult](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/tab_mult) |
|          | [reverse_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/reverse_bits) |
|          | [snake_to_camel](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/snake_to_camel) |
|          | [swap_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/swap_bits) |
|          | [union](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/union) |
|          | [wdmatch](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Rank_2/Level_2/wdmatch) |
___

### Exam Rank 3

For Rank 3 Exam you will have to solve a "mini" `ft_printf` or `get_next_line` exercise. 

___
| `ft_print`       | `get_next_line` |
| -------       | ------- |
| [ft_printf](https://github.com/PedroZappa/42_ExamPrep/tree/main/Rank_3/ft_printf) | [get_next_line](https://github.com/PedroZappa/get_next_line) |

> [!Warning]
>
> I'll be updating this repo with more tips and resources as I progress through the Common Core.

Good luck with the exams!

<div align="center">

### License :copyright:

This work is published under the terms of <a href="https://github.com/PedroZappa/ft_printf/blob/master/LICENSE">42 Unlicense</a>.

</div>
<p align="right">(<a href="#readme-top">get to top</a>)</p>
