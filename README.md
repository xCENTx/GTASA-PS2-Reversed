# GTASA-PS2-Reversed

Reverse engineering research and documentation for **Grand Theft Auto: San Andreas** on the PlayStation 2.

The goal of this project is to document useful class structures, member offsets, functions, globals, and other information discovered while reverse engineering the PS2 version of the game.

This is a work in progress and information will be added as it is discovered and verified.

## Target

- **Game:** Grand Theft Auto: San Andreas
- **Platform:** PlayStation 2
- **Executable:** `SLUS_209.46`
- **Version:** v1.03

> Addresses and offsets may differ between game revisions.

## Documentation

| Document | Description |
|---|---|
| [Functions](docs/Functions.md) | Known functions and addresses |
| [Globals](docs/Globals.md) | Global variables, pointers, flags, and addresses |
| [Class Layouts](docs/ClassLayouts.md) | Reversed class structures and member offsets |

## Credits

Special thanks to the **gta-reversed** project and its contributors.

The PC reversal provides an invaluable reference for identifying GTA San Andreas classes, functions, inheritance, and internal game systems while researching their PS2 counterparts.

- **gta-reversed:** https://github.com/gta-reversed/gta-reversed

PC addresses and class offsets are not assumed to match the PlayStation 2 version. Information in this repository is independently verified against the PS2 game whenever possible.

## Disclaimer

This is an independent reverse engineering and research project.

No game executable or copyrighted game assets are distributed with this repository.

Grand Theft Auto: San Andreas is property of Rockstar Games and Take-Two Interactive.