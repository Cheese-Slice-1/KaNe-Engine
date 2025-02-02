# KaNe Engine
A simple, similar-to-utau engine that works using only stylized (.kane.txt) text files.

## Porting/creating voices
To port voices you must have your samples in WAV format, in the same directory as your singer's bitmap image and description. Then, you create a .yaml file in the same directory as the rest with this formatting:

```yaml
name: Singer's name
image: image.bmp
description: Your singer's description.
pitch: c4 #change the pitch accordingly
jpn-ro: #use this for romaji
    phonemes:
        a: #alias
            source: source.wav #sample name
            offset: 6 #start of sample
            consonant: 52 #consonant area
            cutoff: 69 #end of sample
            preutterance: 0 #consonant-vowel limit
        "*a":
            source: source.wav
            offset: 16
            consonant: 52
            cutoff: 69
            preutterance: 26
jpn-ka:
    phonemes:
        あ:
            source: source.wav
            offset: 6
            consonant: 52
            cutoff: 69
            preutterance: 0
        ＊あ:
            source: source.wav
            offset: 16
            consonant: 52
            cutoff: 69
            preutterance: 26
```

The best way to change the phonemes' configuration is to oto it in UTAU or another program and then copy the configurations from the _.oto_.

Keep in mind what do these configurations do:
* source: the sample itself
* offset: the start of the sample (useful when your sample has a silence at the start)
* consonant: the consonant area, which isn't affected by the pitch
* cutoff: the end of the sample (useful when your sample has a silence at the end)
* preutterance: the limit between the cononant and vowel areas, where the pitch does affect
