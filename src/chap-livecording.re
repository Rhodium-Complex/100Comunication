= ライブ執筆やってみた

ある勉強会で、「技術同人誌を書こう」というトークをやりました。その中で、初めてライブ執筆をやってみて、その時の体験がなかなか良かったよ、という話です。

人に説明する時、実例を出すのはとっても良いですね。

== 何を話した？
@<b>{技術同人誌を書こう-アウトプットのススメ-}というタイトルで、技術同人誌を書くメリット、そして合同誌の紹介と、心理的ハードルの高さへの対処としての合同誌に参加してみては？という話をしました。

https://speakerdeck.com/oyakata2438/20230121-burikaigi

スライドはこちら。内容的には割といつものやつですね。（直接聞いたことない方はぜひ見てみてください）

で、本筋は発表そのものではなく、その中でやったライブ執筆の話。また、ライブ執筆といいつつ、書いた内容そのものではなく、アウトプットするところの実演をしました、というお話。

技術同人誌を書くのはメリットたくさんあるし、手間も大変ではない、という話をしてはいるものの、じゃあ実際にどういう手順で書いているんだ？というのは案外わかりづらいもの。スライドにもしづらいですしね。また、書いた原稿がどのようにして本になっていくのかという点もやっぱりわかりづらいですね。執筆と組版の間の溝は通常非常にイメージがつきづらく、参加のハードルにもなるところです。

Markdownで書いて、GitHubにPushしたらそれでOKです、といっても、そこからどうなるのかはわかりづらいですよね。＞この本の参加者の皆様

ということで、スライドを使った発表の後で、２−３分でPDF生成までをやったのです。といっても、VSCode＋Re:VIEW＋Docker(+GitHub)の環境があるなら、本当にすぐです。

発表の前に、VSCodeを起動しておき、今書いている適当なファイルを開き、その後ろにその場で適当に書き込みます。今回は、前日のBuriKaigiがとても良かった！おいしかった！的な内容を、見出し、地の文、強調表現などを使いつつ、１０行ほど書いました。ぶっちゃけ内容なんてなんでもいいのです。

そして、それがDockerでビルドできることを確認しておき、準備完了。

いよいよ発表の最後です。@<b>{「では、ここから、実際にどんな感じで執筆、組版できるかみてみましょう」}

//noindent
などといって、VSCodeの画面を開きます。ここに数行ありますよね、と見せて、Re:VIEWで文章を書き込みます。見出し、地の文など、わかりやすいのが数行あればOKです。凝ったことをする必要はありません。テーブルを作ったりしようとしてコンパイルエラーを生じてはかっこ悪いですね。@<fn>{docker}

//footnote[docker][同人誌を書き始めてだいぶ経つけど、最近ようやくローカルでDocker+Re:VIEWのビルドができるようになった。]

あとは、これをRe:VIEW＋Dockerでビルドするだけです、などと言いながら、ターミナルから作成済みのシェルスクリプトを叩きます。あとは、Docker上でコンパイルが走り、PDFが生成されます。それを開き、ほら、こんな感じでPDFができましたねー、といった感じ。PDFを開くところもターミナルからできるとかっこいいのと、探す時間がかからない分スマートですね。

コツとしては、事前にチェックしておくこと、そしてターミナルにコマンドを事前に入れておき、すぐ叩けるようにしてくことです。Dockerのチュートリアルとかではないので、余計なところでつまづかないようにします。

最後に、（ネット環境があれば）、GitHubにPushするところまでできると完璧ですね。

== 効果は大きい
やっぱり実演の効果は大きいですね。

執筆のように、ユーザの操作と最終形がつながりづらい時にも、実演することでイメージがつきやすきなります。あとはこれを繰り返す／分量を増やすだけ。

Re:VIEWやMarkdownのような書き方だと、どのように本が作られていくのかイメージすることが難しいのです。InDesignのように一から自分で流し込むような場合は、テキストや画像を都度並べていく作業になりますが、原稿そのものをその場でビルドするとか、GitHubで管理するといったあまり一般的とはいえない書き方をする場合、執筆そのものの説明とともに、書きかたとして説明を加えるとより一層イメージが湧きます。その結果として、そのくらいだったらネタさえあれば私にもできそう、と思ってもらえれば勝ちですね。

さあ、締め切りは用意します。ネタをご準備ください。本を書きましょう！

== 本当のまとめ
本章で伝えたかったことは、何かを説明する時にデモや実演がその場でできると強いよ、という話でした。