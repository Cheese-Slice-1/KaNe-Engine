# The KaNe (歌音) Engine \[WIP]
A simple, web-based voice synthesizer that works using stylized (.kane.txt) text files.

## Porting/creating voices
To port/create voices you must have your samples in FLAC format and in the same directory as your singer's bitmap image. Then, you create a yaml file named "voice.yaml" in the same directory as the rest with this formatting:

```yaml
name: Singer's name
image: image_name.bmp
description: Your singer's description.
pitch: c4 #change the pitch accordingly
jpn-ro: #use this for romaji
    phonemes:
        a: #alias
            source: source.flac #sample name
            offset: 6 #start of sample
            consonant: 52 #consonant area
            cutoff: 69 #end of sample
            preutterance: 0 #consonant-vowel limit
        "*a":
            source: source.flac
            offset: 16
            consonant: 52
            cutoff: 69
            preutterance: 26
jpn-ka: #use this for kana (hiragana and katakana)
    phonemes:
        あ:
            source: source.flac
            offset: 6
            consonant: 52
            cutoff: 69
            preutterance: 0
        ＊あ:
            source: source.flac
            offset: 16
            consonant: 52
            cutoff: 69
            preutterance: 26
#you can include other languages in the same style as jpn-ro and jpn-ka
```

Then, you compress the folder into a **ZIP** file and in the app, open it. As for now, only ZIP files are supported, so be careful.

The best way to know the phonemes' configuration is to OTO the voicebank in UTAU or another OTOing program, and then use the generated configurations.

Keep in mind what each of the configurations mean:
* source: the sample itself.
* offset: the start of the sample (useful when your sample has a silence at the start).
* consonant: the consonant area, which isn't affected by the pitch.
* cutoff: the end of the sample (useful when your sample has a silence at the end).
* preutterance: the limit between the cononant and vowel areas, where the pitch does affect.

## Why FLAC?
Some reasons as to why I'll use the FLAC codec in this project:
* It's pretty light (in terms of lossless codecs).
* The WebAudio API supports it, so it's very convenient for this project.
* It's free and doesn't have licensing requirements.
* Being a lossless codec, you can convert WAV files to FLAC files without loosing quality, which means you can port other synthesizer's (UTAU, DeepVocal, etc.) samples.

## PROJECT FILES
The standard KaNe project structure is:

```
4/4 1-16 120;
Singer Name;
D4_F C4_8 C4_8;
a a a;
```

What each line does:
1. Project configuration (time signature, sections per beat, beats per minute; in order).
2. Singer used (in this case it's Sain Wave).
3. Notes to be played (formated as Note_Length; F is a full beat, the numbers are how many sections of a beat the note occupies). They can be in uppercase or lowercase.
4. Lyrics to be played (these will be pitch accordingly to the note they correspond (lyric 1 - note 1, lyric 2 - note 2, etc.))

As you're able to upload more than one singer at a time, it's useful to specify the singer in te project file.
