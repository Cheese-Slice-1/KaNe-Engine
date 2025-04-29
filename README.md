# The KaNe (歌音) Engine \[WIP]
A simple comand line voice synthesizer that works using stylized (.kane) text files.

## Porting/creating voices
To port/create voices you must have your samples in FLAC format and in the same directory as your singer's bitmap image. Then, you create a yaml file named "voice.yaml" in the same directory as the rest with this formatting:

```yaml
name: Singer's name
image: image_name.bmp # can be .bpm, .png, .jpg
description: Your singer's description.
pitch: c4 # change the pitch accordingly
jpn-ro: # use this for romaji
    phonemes:
        "a": # alias
            source: source.flac #sample name
            start: 6 #start of sample
            consonant: 52 #consonant area
            end: 69 #end of sample
            preutterance: 0 #consonant-vowel limit
            #color: [normal, ""]
            #^ optional color in lowercase, default is "normal"; second argument is the suffix, default is ""
        "*a":
            source: source.flac
            start: 16
            consonant: 52
            end: 69
            preutterance: 26
jpn-ka: # use this for kana (hiragana and katakana)
    phonemes:
        "あ":
            source: source.flac
            start: 6
            consonant: 52
            end: 69
            preutterance: 0
        "＊あ":
            source: source.flac
            start: 16
            consonant: 52
            end: 69
            preutterance: 26
# you can include other languages in the same style as jpn-ro and jpn-ka
```

Then, you compress the folder into a **ZIP** file and in the app, open it. As for now, only ZIP files are supported, so be careful.

When installing it, the program will automatically uncompress the singer into the "voice" foler, locatde in the program's directory.

As fro configuratoion, the best way to know the phonemes' settings is to OTO the voicebank in UTAU or another OTOing program, and then use the generated *oto.ini*'s properties.

Keep in mind what each of the configurations mean:
* source: the sample itself.
<<<<<<< Updated upstream
* start: the start of the sample (useful when your sample has silence or noise at the start).
* consonant: the limit of consonant area, which isn't affected by the pitch.
* end: the end of the sample (useful when your sample has silence or noise at the end).
* preutterance: the limit between the cononant and vowel areas, where the pitch does affect.
=======
* start: the start of the sample (useful when your sample has a silence at the start).
* consonant: the consonant area, which isn't affected by the pitch.
* end: the end of the sample (useful when your sample has a silence at the end).
* vowel: the limit between the cononant and vowel areas, where the pitch does affect.
>>>>>>> Stashed changes

## Why FLAC?
Some reasons as to why I'll use the FLAC codec in this project:
* It's pretty light (in terms of lossless codecs).
* It's free and doesn't have licensing requirements.
* Being a lossless codec, decoding it returns a WAV file with the same quality.

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
2. Singer used.
3. Notes to be played (formated as Note_Length; F is a full beat, the numbers are how many sections of a beat the note occupies). They can be in uppercase or lowercase.
4. Lyrics to be played (these will be pitch accordingly to the note they correspond (lyric 1 - note 1, lyric 2 - note 2, etc.))
