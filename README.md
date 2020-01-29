# synesthesia
![GitHub](https://img.shields.io/github/license/avigloz/synesthesia)
![GitHub top language](https://img.shields.io/github/languages/top/avigloz/synesthesia)
![GitHub last commit](https://img.shields.io/github/last-commit/avigloz/synesthesia)

Synesthesia creates complex visual representations of audio, using C++.

![Logo](ear.png)

## Plan

There are *three main components* to this project:

- :large_blue_circle: Decoder
- :red_circle: Interface between decoder and visualizer
- :red_circle: Visualizer

(white:complete, blue:in-progress, red:to-do)

## Decoder 

Currently, the decoder is/will be designed *from scratch* to support the following audio file formats:

- `.wav`

Support for `.flac, .mp3, .mp4, .m4a, & .3gp, etc.` will most likely be added in the future. As of right now, to use other audio file formats, simply convert them to uncompressed `.wav`.

## Visualizer

The visualizer is/will be designed to generate images (and potentially video in future), which is unique to individual audio inputs.

The nature of the algorithm is mostly currently unknown; I am thinking about that.

Current possibilities include:

- Fractals (which is likely the most promising)
- Lines of varying colors, intensity, etc.
- Shapes
- Collage
- etc.

Visuals will be dependant upon certain aspects of the music, such as pitch, bass tones, rhythm, etc.


