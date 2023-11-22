# stonesplit

![stonesplit](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Jannik Rehkemper](https://github.com/JRehkemper)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make stonesplit:default

Flashing example for this keyboard:

    make stonesplit:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


# Pinout Mapping
[https://deskthority.net/wiki/Arduino_Pro_Micro#Pinout](https://deskthority.net/wiki/Arduino_Pro_Micro#Pinout)


    "layouts": {
        "LAYOUT": {
            "layout": [
                {"label": "ESC",        "matrix": [0, 3], "x": 0, "y": 0, "w": 1},
                {"label": "F1",         "matrix": [0, 4], "x": 1, "y": 0, "w": 1},
                {"label": "F2",         "matrix": [0, 5], "x": 2, "y": 0, "w": 1},
                {"label": "F3",         "matrix": [0, 6], "x": 3, "y": 0, "w": 1},
                {"label": "F4",         "matrix": [0, 7], "x": 4, "y": 0, "w": 1},
                {"label": "F5",         "matrix": [0, 8], "x": 5, "y": 0, "w": 1},

                {"label": "F6",         "matrix": [6, 8], "x": 11, "y": 0, "w": 1},
                {"label": "F7",         "matrix": [6, 7], "x": 12, "y": 0, "w": 1},
                {"label": "F8",         "matrix": [6, 6], "x": 13, "y": 0, "w": 1},
                {"label": "F9",         "matrix": [6, 5], "x": 14, "y": 0, "w": 1},
                {"label": "F10",        "matrix": [6, 4], "x": 15, "y": 0, "w": 1},
                {"label": "F11",        "matrix": [6, 3], "x": 16, "y": 0, "w": 1},
                {"label": "F12",        "matrix": [6, 2], "x": 17, "y": 0, "w": 1},
                {"label": "INSERT",     "matrix": [6, 1], "x": 18, "y": 0, "w": 1},
                {"label": "HOME",       "matrix": [6, 9], "x": 19, "y": 0, "w": 1},
                {"label": "PG UP",      "matrix": [8, 0], "x": 20, "y": 0, "w": 1},

                {"label": "^",          "matrix": [1, 3], "x": 0, "y": 1, "w": 1},
                {"label": "1",          "matrix": [1, 4], "x": 1, "y": 1, "w": 1},
                {"label": "2",          "matrix": [1, 5], "x": 2, "y": 1, "w": 1},
                {"label": "3",          "matrix": [1, 6], "x": 3, "y": 1, "w": 1},
                {"label": "4",          "matrix": [1, 7], "x": 4, "y": 1, "w": 1},
                {"label": "5",          "matrix": [1, 8], "x": 5, "y": 1, "w": 1},

                {"label": "6",          "matrix": [7, 8], "x": 11, "y": 1, "w": 1},
                {"label": "7",          "matrix": [7, 7], "x": 12, "y": 1, "w": 1},
                {"label": "8",          "matrix": [7, 6], "x": 13, "y": 1, "w": 1},
                {"label": "9",          "matrix": [7, 5], "x": 14, "y": 1, "w": 1},
                {"label": "0",          "matrix": [7, 4], "x": 15, "y": 1, "w": 1},
                {"label": "ß",          "matrix": [7, 3], "x": 16, "y": 1, "w": 1},
                {"label": "`",          "matrix": [7, 2], "x": 17, "y": 1, "w": 1},
                {"label": "DEL",        "matrix": [7, 1], "x": 18, "y": 1, "w": 1},
                {"label": "END",        "matrix": [7, 9], "x": 19, "y": 1, "w": 1},
                {"label": "PG DN",      "matrix": [9, 0], "x": 20, "y": 1, "w": 1},

                {"label": "TAB",        "matrix": [2, 3], "x": 0, "y": 2, "w": 1.5},
                {"label": "Q",          "matrix": [2, 4], "x": 1, "y": 2, "w": 1},
                {"label": "W",          "matrix": [2, 5], "x": 2, "y": 2, "w": 1},
                {"label": "E",          "matrix": [2, 6], "x": 3, "y": 2, "w": 1},
                {"label": "R",          "matrix": [2, 7], "x": 4, "y": 2, "w": 1},
                {"label": "T",          "matrix": [2, 8], "x": 5, "y": 2, "w": 1},

                {"label": "Z",          "matrix": [8, 8], "x": 11, "y": 2, "w": 1},
                {"label": "U",          "matrix": [8, 7], "x": 12, "y": 2, "w": 1},
                {"label": "I",          "matrix": [8, 6], "x": 13, "y": 2, "w": 1},
                {"label": "O",          "matrix": [8, 5], "x": 14, "y": 2, "w": 1},
                {"label": "P",          "matrix": [8, 4], "x": 15, "y": 2, "w": 1},
                {"label": "Ü",          "matrix": [8, 3], "x": 16, "y": 2, "w": 1},
                {"label": "+",          "matrix": [8, 2], "x": 17, "y": 2, "w": 1},

                {"label": "CAPS",       "matrix": [3, 3], "x": 0, "y": 3, "w": 2},
                {"label": "A",          "matrix": [3, 4], "x": 1, "y": 3, "w": 1},
                {"label": "S",          "matrix": [3, 5], "x": 2, "y": 3, "w": 1},
                {"label": "D",          "matrix": [3, 6], "x": 3, "y": 3, "w": 1},
                {"label": "F",          "matrix": [3, 7], "x": 4, "y": 3, "w": 1},
                {"label": "G",          "matrix": [3, 8], "x": 5, "y": 3, "w": 1},

                {"label": "H",          "matrix": [9, 8], "x": 11, "y": 3, "w": 1},
                {"label": "J",          "matrix": [9, 7], "x": 12, "y": 3, "w": 1},
                {"label": "K",          "matrix": [9, 6], "x": 13, "y": 3, "w": 1},
                {"label": "L",          "matrix": [9, 5], "x": 14, "y": 3, "w": 1},
                {"label": "Ö",          "matrix": [9, 4], "x": 15, "y": 3, "w": 1},
                {"label": "Ä",          "matrix": [9, 3], "x": 16, "y": 3, "w": 1},
                {"label": "#",          "matrix": [9, 2], "x": 17, "y": 3, "w": 1},

                {"label": "SHIFT",      "matrix": [4, 1], "x": -1, "y": 4, "w": 1.5},
                {"label": "<>",         "matrix": [4, 3], "x": 0, "y": 4, "w": 1},
                {"label": "Y",          "matrix": [4, 4], "x": 1, "y": 4, "w": 1},
                {"label": "X",          "matrix": [4, 5], "x": 2, "y": 4, "w": 1},
                {"label": "C",          "matrix": [4, 6], "x": 3, "y": 4, "w": 1},
                {"label": "V",          "matrix": [4, 7], "x": 4, "y": 4, "w": 1},
                {"label": "B",          "matrix": [4, 8], "x": 5, "y": 4, "w": 1},

                {"label": "N",          "matrix": [10, 8], "x": 11, "y": 4, "w": 1},
                {"label": "M",          "matrix": [10, 7], "x": 12, "y": 4, "w": 1},
                {"label": ";",          "matrix": [10, 6], "x": 13, "y": 4, "w": 1},
                {"label": ":",          "matrix": [10, 5], "x": 14, "y": 4, "w": 1},
                {"label": "-",          "matrix": [10, 4], "x": 15, "y": 4, "w": 1},
                {"label": "LSHIFT",     "matrix": [10, 3], "x": 16.5, "y": 4, "w": 2},
                {"label": "UP",         "matrix": [10, 9], "x": 19, "y": 4, "w": 1},

                {"label": "CTRL",       "matrix": [5, 1], "x": -1, "y": 5, "w": 1.5},
                {"label": "WIN",        "matrix": [5, 3], "x": 0, "y": 5, "w": 1},
                {"label": "ALT",        "matrix": [5, 4], "x": 1, "y": 5, "w": 1},
                {"label": "",           "matrix": [5, 6], "x": 2, "y": 5, "w": 1},
                {"label": "Layer2",     "matrix": [5, 7], "x": 3, "y": 5, "w": 1},
                {"label": "SPACE",      "matrix": [5, 8], "x": 4, "y": 5, "w": 1},
                {"label": "BACKSPACE",  "matrix": [5, 5], "x": 5, "y": 5, "w": 1},
                {"label": "ESC",        "matrix": [5, 2], "x": 6, "y": 5, "w": 1},

                {"label": "ENTER",      "matrix": [8, 9], "x": 9, "y": 5, "w": 1},
                {"label": "BACKSPACE",  "matrix": [8, 1], "x": 10, "y": 5, "w": 1},
                {"label": "SPACE",      "matrix": [11, 8], "x": 11, "y": 5, "w": 1},
                {"label": "LAYER2",     "matrix": [11, 7], "x": 12.5, "y": 5, "w": 1},
                {"label": "",           "matrix": [11, 6], "x": 12.5, "y": 5, "w": 1},
                {"label": "ALT GR",     "matrix": [11, 5], "x": 14, "y": 5, "w": 1.5},
                {"label": "FN",         "matrix": [11, 4], "x": 15.5, "y": 5, "w": 1.5},
                {"label": "CTRL",       "matrix": [11, 3], "x": 17, "y": 5, "w": 1.5},
                {"label": "LEFT",       "matrix": [11, 1], "x": 18, "y": 5, "w": 1},
                {"label": "DOWN",       "matrix": [11, 9], "x": 19, "y": 5, "w": 1},
                {"label": "RIGHT",      "matrix": [10, 0], "x": 20, "y": 5, "w": 1}
            ]
        }
    }