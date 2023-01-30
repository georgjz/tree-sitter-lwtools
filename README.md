# Tree-Sitter Grammar for 6809 Assembly for lwtools Toolchain

**No longer maintained as of January 2023**

This repository contains files go generate a parser tool for 6809 assembly with [tree-sitter](https://github.com/tree-sitter/tree-sitter).

This parser will work only files for the [lwtools toolchain](http://lwtools.projects.l-w.ca) is supported. This tree-sitter parser is part of the [6809 Assembly Grammar Package](https://github.com/georgjz/language-6809) for [Atom Editor](https://atom.io).

**Note**: This is *not* a complete description of 6809 assembly. It is geared towards use with an Atom grammar package for syntax highlighting. Therefore, the parser described in this repository will also "match" invalid instructions like `jsr $00,+S`.

This is work in progress.
