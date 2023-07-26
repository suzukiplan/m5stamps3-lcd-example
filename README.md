# LCD制御プログラム作成 (M5StampS3 + ILI9341 LCD) <WIP>

## 概要

[Qiita記事](https://qiita.com/suzukiplan/private/b5882449fdbf571b4e80)参照

## WIP Status

まだ正常に動きません。

## ビルド準備

ビルドには Git (CLI) と [PlatformIO Core (CLI)](https://docs.platformio.org/en/latest/core/index.html) が必要です。

```
brew install platformio
```

## ビルド

M5StampS3 を PC に接続した状態で以下を実行すればビルドとファームウェア更新が実行されます。

```
pio run -t upload
```
