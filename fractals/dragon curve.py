#!/usr/bin/python
from turtle import *

def draw_fractal(length, angle, level, initial_state, target, replacement, target2, replacement2):

    state = initial_state

    for counter in range(level):
        state2 = ''
        for character in state:
            if character == target:
                state2 += replacement
            elif character == target2:
                state2 += replacement2
            else:
                state2 += character
        state = state2

    # draw
    for character in state:
        if character == 'F':
            forward(length)
        elif character == '+':
            right(angle)
        elif character == '-':
            left(angle)

speed(0)
delay(0)
hideturtle()

# Lindenmayer Notation

# Dragon Curve
up(); goto(0, -180); down();
draw_fractal(3, 90, 14, 'FX', 'X', 'X+YF+', 'Y', '-FX-Y')

exitonclick()
