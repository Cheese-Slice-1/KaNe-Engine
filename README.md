# KaNe Engine
A simple, similar-to-utau engine that works using only stylized (.kane.txt) text files.

## Porting/creating voices
To port voices you must have your samples in WAV format. Then, you create a .yaml file with this formatting:

```yaml
name: Singer's name
image: image.bmp
description: Your singer's description.
pitch: c4 #change the pitch accordingly
jpn-ro: #for romaji, change the alias' parameters accordingly
    phonemes:
        a: #alias
            source: source.wav
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
```
