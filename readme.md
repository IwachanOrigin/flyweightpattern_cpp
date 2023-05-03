# flyweightpattern cpp demo code

## Overview

    flyweight Patternの使い方

## 使いどころ

    プログラム上、必ず必要で、不変なオブジェクトを最初から生成し、プールしておくことで  
    オブジェクトが必要になった場合に瞬時に取得、利用することが出来ます。  
    この例ではbillcoinfactoryクラスのコンストラクタで不変オブジェクトを生成しています。  
    Wikipediaの解説では、不変オブジェクトがまだ生成されていない場合には作ってプールし、  
    生成済みの場合はプールから呼び出してオブジェクトを返す...という記述があります。  
    生成されるオブジェクトが1つだけという点だけに着目するとsingletonに近い印象を持ちます。  
    生成クラスにfactoryを用いている分、生成されるオブジェクトは引数によって異なる性質を  
    持たせることが出来るのでそのオブジェクトが1つであることを保証しません。  
    その辺りが異なります。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/flyweightpattern_cpp/blob/master/LICENSE)

