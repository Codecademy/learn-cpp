# C++ Project - UFO

A hangman-like game in which players must crack a codeword to stop an alien abduction.

## Usage

In each game a random codeword is selected from a collection of ten words. In each round, you can guess the characters that make up the codeword. Feel free to guess more than one character in each round but know that each character guess equals one round. But, be aware! You can only make 6 incorrect guesses.

> Hint: All codewords are space related.

## Extension

If you would like to increase the number of codewords that you want to play with, simply add them to the codewords vector in `ufo.cpp`.

## Sample Output

```
=============
UFO: The Game
=============

Instructions: save your friend from alien abduction by guessing the letters in the codeword.                 .

                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /     \        (  Send help! )
             /   0   \      / `-----------'
            /  --|--  \    /
           /     |     \
          /     / \     \
         /               \

Incorrect Guesses:
Codeword: _ _ _ _ _ _ _
Please enter your guess: q

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /     \        (  Send help! )
             /   0   \      / `-----------'
            /  --|--  \    /
           /     |     \
          /     / \     \
         /               \

Incorrect Guesses: q
Codeword: _ _ _ _ _ _ _
Please enter your guess: w

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  0  \        (  Send help! )
             / --|-- \      / `-----------'
            /    |    \    /
           /    / \    \
          /             \
         /               \

Incorrect Guesses: q w
Codeword: _ _ _ _ _ _ _
Please enter your guess: e

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /--|--\        (  Send help! )
             /   |   \      / `-----------'
            /   / \   \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q w e
Codeword: _ _ _ _ _ _ _
Please enter your guess: r

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q w e r
Codeword: _ _ _ _ _ _ _
Please enter your guess: t

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              / / \ \        (  Send help! )
             /       \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q w e r t
Codeword: _ _ _ _ _ _ _
Please enter your guess: y

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /     \        (  Send help! )
             /       \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q w e r t y
Codeword: _ _ _ _ _ _ _
Please enter your guess: u

Incorrect! The tractor beam pulls the person in further.

Oh no! The UFO just flew away with another person!

Codeword was: bigbang

Would you like to play again? [y/n] n

$
```


```
=============
UFO: The Game
=============

Instructions: save your friend from alien abduction by guessing the letters in the codeword.                 .

                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /     \        (  Send help! )
             /   0   \      / `-----------'
            /  --|--  \    /
           /     |     \
          /     / \     \
         /               \

Incorrect Guesses:
Codeword: _ _ _ _ _ _ _ _ _
Please enter your guess: q

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /     \        (  Send help! )
             /   0   \      / `-----------'
            /  --|--  \    /
           /     |     \
          /     / \     \
         /               \

Incorrect Guesses: q
Codeword: _ _ _ _ _ _ _ _ _
Please enter your guess: s

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  0  \        (  Send help! )
             / --|-- \      / `-----------'
            /    |    \    /
           /    / \    \
          /             \
         /               \

Incorrect Guesses: q s
Codeword: _ _ _ _ _ _ _ _ _
Please enter your guess: f

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  0  \        (  Send help! )
             / --|-- \      / `-----------'
            /    |    \    /
           /    / \    \
          /             \
         /               \

Incorrect Guesses: q s
Codeword: _ _ _ _ f _ _ _ _
Please enter your guess: e

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  0  \        (  Send help! )
             / --|-- \      / `-----------'
            /    |    \    /
           /    / \    \
          /             \
         /               \

Incorrect Guesses: q s
Codeword: _ _ _ _ f _ e _ _
Please enter your guess: p

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /--|--\        (  Send help! )
             /   |   \      / `-----------'
            /   / \   \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p
Codeword: _ _ _ _ f _ e _ _
Please enter your guess: w

Incorrect! The tractor beam pulls the person in further.
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: _ _ _ _ f _ e _ _
Please enter your guess: c

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c _ _ _ f _ e _ _
Please enter your guess: o

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c o _ _ f _ e _ _
Please enter your guess: r

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c o r _ f _ e _ _
Please enter your guess: n

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c o r n f _ e _ _
Please enter your guess: i

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c o r n f i e _ _
Please enter your guess: e

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c o r n f i e _ _
Please enter your guess: l

Correct!
                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /  |  \        (  Send help! )
             /  / \  \      / `-----------'
            /         \    /
           /           \
          /             \
         /               \

Incorrect Guesses: q s p w
Codeword: c o r n f i e l _
Please enter your guess: d

Correct!

Hooray! You saved the person and earned a medal of honor!

Codeword was: cornfield

Would you like to play again? [y/n] n
```
