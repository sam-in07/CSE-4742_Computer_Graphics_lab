
There is one important detail: the cases are usually divided into $0 \le m \le 1$, $m>1$, and $m<0$. The first case is not simply every $m\leq1$, because negative slopes need different handling.

## The 3 cases you should memorize

### Case 1: $0 \le m \le 1$ — Normal code

This is the main code you shared.

c

```
while (x <= x2)
{
    x = x + 1;

    if (d < 0)
        d = d + ds;
    else
    {
        y = y + 1;
        d = d + dt;
    }

    putpixel(x, y, 7);
}
```

Remember: X increases every time; Y increases when needed.

### Case 2: $m>1$ — Steep line

Your comments tell you to swap the roles of X and Y.

c

```
while (y <= y2)
{
    y = y + 1;

    if (d < 0)
        d = d + ds;
    else
    {
        x = x + 1;
        d = d + dt;
    }

    putpixel(x, y, 7);
}
```

Remember: Y increases every time; X increases when needed.

The decision formulas and `ds`/`dt` definitions must also be adjusted to swap the roles of `dx` and `dy`.

### Case 3: $m<0$ — Negative slope

Your commented code at the bottom attempts this case:

c

```
while (x >= x2)
{
    x = x - 1;

    if (d < 0)
        d = d + ds;
    else
    {
        y = y + 1;
        d = d + dt;
    }

    putpixel(x, y, 7);
}
```

Remember: X decreases while Y increases for a line drawn from upper-left to lower-right? Actually, coordinate direction matters: in standard mathematical coordinates, a negative slope means X increases while Y decreases. In graphics coordinates, Y usually increases downward, so the visual direction is reversed.

Your commented loop is not guaranteed to work correctly for every negative slope without adjusting the decision parameter and direction.

## Quick exam memory table

| Case | Loop condition | Main coordinate movement |
| --- | --- | --- |
| $0\le m\le1$ | `x <= x2` | X increases |
| $m>1$ | `y <= y2` | Y increases |
| $m<0$ | Depends on drawing direction | X and Y move in opposite directions |

My advice: Memorize the original code first, then learn the changes for the other two cases. Most of the code stays the same; the main changes are the loop condition, coordinate increments, and decision formulas.