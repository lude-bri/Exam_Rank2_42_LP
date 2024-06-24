<a name="readme-top"></a>
<div align="center"> <img src="https://capsule-render.vercel.app/api?type=cylinder&height=200&color=0ABAB5&text=Exam_Rank02&fontAlignY=62&fontAlign=50&fontColor=fcf3f2&animation=fadeIn" />


## Table of Contents

<!-- mtoc-start -->

* [About](#about-)
* [Tips](#tips-)
* [Exam Exercises](#exam-exercises-)
* [License :copyright:](#license-copyright)

<!-- mtoc-end -->
---
</div>

# About 📜

This is the first exam in the Common Core at 42 schools! Don’t worry, it is normally very tricky, especially because there are a lot of different questions. I’m here to help you with an overview of the exam!

Most of the questions are based on the first project developed, `Libft`! The exam addresses essential topics in C, such as string manipulation, lists, math, and even bitwise operations! The important thing is not only to study all the questions, rather is to realize very well the topics mentioned above!

---

## Tips! 💡

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

set ruler  " Displays the cursor position (line and column) in the status line
set number " Shows line numbers on the left side of the text
set relativenumber " Shows line numbers relative to the current line, except for the current line itself, which shows its absolute number

set tabstop=4 " Sets the width of a tab character to 4 spaces
set shiftwidth=4 " Sets the width of auto-indent to 4 spaces

set autoindent " Enables automatic indentation
set smartindent " Enables smart indentation for programming
```
___

## Levels and Topics 📝

The Rank 2 Exam has four levels, comprises of several exercises each. Each level, naturally, will be more challanging then the last one.

The topics in the exam can be summarized in four: **String Manipulation**, **Linked Lists**, **Math Operations**, **Bitwise Operations**

In the following table you can see how this is organized:


| Topics      | Level 1    | Level 2     | Level 3    | Level 4 |
| :----------: | ------------ | --------- | ----------- | -------- |
_String Manipulations_| `first_word` `ft_strcpy` `ft_strlen` `ft_putstr` `ft_swap` `repeat_alpha` `rev_print` `rot_13` `rotone` `search_and_replace` `ulstr`| `alpha_mirror` `camel_to_snake` `snake_to_camel` `last_word` `ft_atoi` `ft_strcspn` `ft_strdup` `ft_strpbrk` `ft_strrev` `ft_strspn` `inter` `union` `wd_match`| `epur_str` `expand_str` `ft_atoi_base` `hidenp` `printhex` `rstr_capitalizer` `str_capitalizer` | `flood_fill` `ft_itoa` `ft_split` `rev_wstr` `rostring` `sort_in_tab`
_*Linked Lists*_  | | | `ft_list_size` | `ft_list_forearch` `ft_list_remove_if` `sort_list` |
_Math Operations_ | `fizzbuzz` | `is_power_of_2` `do_op` `max` | `add_prime_sum` `ft_range` `ft_rrange` `lcm` `paramsum` `pgcd` `tab_mult` | `fprime`
_Bitwise Operations_ | |`print_bits` `reverse_bits` `swap_bits` |
___

<div align="center">

## Exam Exercises 📚

| Level 1      | Level 2 | Level 3 | Level 4 |
| -------      | -------| ------- | ------- |
| [first_word](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/first_word) | [alpha_mirror](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/alpha_mirror) | [add_prime_sum](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/add_prime_sum) | [flood_fill](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/flood_fill) |
| [fizzbuzz](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/fizzbuzz) | [camel_to_snake](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/camel_to_snake) | [epur_str](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/epur_str) | [fprime](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/fprime) |
| [ft_putstr](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/ft_putstr) | [do_op](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/do_op) | [expand_str](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/expand_str) | [ft_itoa](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_itoa) |
| [ft_strcpy](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/ft_strcpy) | [ft_atoi](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_atoi) | [ft_atoi_base](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/ft_atoi_base) | [ft_list_foreach](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_foreach) |
| [ft_strlen](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/ft_strlen) | [ft_strcmp](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_strcmp) | [ft_list_size](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/ft_list_size) | [ft_list_remove_if](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_remove_if) |
| [ft_swap](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/ft_swap) | [ft_strcspn](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_strcspn) | [ft_range](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/ft_range) | [ft_split](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_split) |
| [repeat_alpha](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/repeat_alpha) | [ft_strdup](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_strdup) |  [ft_rrange](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/ft_rrange) | [rev_wstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rev_wstr) |
| [rev_print](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/rev_print) | [ft_strpbrk](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_strpbrk) | [hidenp](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/hidenp) | [rostring](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rostring) |
| [rot_13](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/rot13) | [ft_strrev](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_strrev) | [lcm](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/lcm) | [sort_int_tab](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_int_tab) |
| [rotone](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/rotone) | [ft_strspn](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/ft_strspn) | [paramsum](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/paramsum) | [sort_list](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_list) |
| [search_and_replace](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/search_and_replace) | [inter](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/inter) | [pgdc](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/pgcd) |
| [ulstr](https://github.com/lude-bri/Rank02/tree/main/Lvl_1/ulstr) | [is_power_of_2](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/is_power_of_2) | [print_hex](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/print_hex) |
|          | [last_word](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/last_word) | [rstr_capitalizer](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/rstr_capitalizer) |
|          | [max](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/max) | [str_capitalizer](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/str_capitalizer) |
|          | [print_bits](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/print_bits) | [tab_mult](https://github.com/lude-bri/Rank02/tree/main/Lvl_3/tab_mult) |
|          | [reverse_bits](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/reverse_bits) |
|          | [snake_to_camel](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/snake_to_camel) |
|          | [swap_bits](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/swap_bits) |
|          | [union](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/union) |
|          | [wdmatch](https://github.com/lude-bri/Rank02/tree/main/Lvl_2/wdmatch) |
___

</div>

<div align="center"> <img src="https://capsule-render.vercel.app/api?type=waving&height=100&color=0ABAB5&text=Good%20Luck!&section=footer&fontAlign=52&fontAlignY=55&fontColor=fcf3f2" />

### License :copyright:

This work is published under the terms of <a href="https://github.com/PedroZappa/ft_printf/blob/master/LICENSE">42 Unlicense</a>.

</div>
<p align="right">(<a href="#readme-top">up</a>)</p>
