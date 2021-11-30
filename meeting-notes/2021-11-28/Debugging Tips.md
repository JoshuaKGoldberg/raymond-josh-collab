# Debugging Tips

## "What's the delta"

When you see something's wrong, try to pinpoint what the difference is between the actual and expected.
What could cause that difference?

## Walking Through the Code

You did this in person: if some code is behaving weirdly, try walking through what would happen with sample values.
For example, in a loop, announce what would happen line-by-line with the first value, then the second, etc...

## Common Red Squiggly Causes

In my experience, the top three most common causes of syntax errors are:

- Typo (e.g. `foe` instead `for`)
- Missing curly bracket or similar just before it
- Extra curly bracket or similar just before it

As you said, it's a good idea to always match up your `{` and `}` brackets -- visually!
