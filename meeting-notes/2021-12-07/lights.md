# Light Pins Examples

Original approach:

```py
def do_main_stuff(pin_one, pin_two):
    how_long_on = 123 # e.g. 3 hours
    how_long_off = 456 # e.g. 3 hours

    while true:
        pin_one.turn_on()

        time.sleep(how_long_on)

        pin_one.turn_off()

        time.sleep(how_long_off)

    # can't do anything with pin_two :(
```

Another way would be to have a "tight" loop:

```py
def do_main_stuff(pin_one, pin_two):
    how_long_on = 123 # e.g. 3 hours
    how_long_off = 456 # e.g. 3 hours

    switched_timestamp = time.now()

    while true:
        # If we've been enabled for too long, turn off and remember that timestamp
        if pin_one.enabled and time.now() - switched_timestamp > how_long_on:
            pin_one.turn_off()
            switched_timestamp = time.now()

        # If we've been turned off for too long, turn on and remember that timestamp
        if not pin_one.enabled() and time.now() - switched_timestamp > how_long_off:
            pin_one.turn_on()
            switched_timestamp = time.now()

        # now you can run any other logic after this, such as pin_two
```

If you don't have access to something like `time.now()`, you can count on your own with an int:

```py
def do_main_stuff(pin_one):
    time = 0

    time_to_keep_on = 123

    while true:
        # do logic...

        time.sleep(16) # e.g. 16 milliseconds, or 60fps
        time += 1
```
