= ノートを活用した「断片をできるだけ拾い上げる」取り組み

//flushright{
酒井文也 (Fumiya Sakai) Twitter&github: @fumiyasac
//}

== はじめに

平素の業務内でコミュニケーションを取る際には、様々なツールやサービスを活用する場面があると思います。特にリモートワークが主体となったコロナ禍ではオフラインでのコミュニケーションを円滑に取っていく際には、口頭でのコミュニケーションだけでは十分に伝わらない事も頻繁に発生しますし、それを補うために様々な資料をコミュニケーションの前後で用意する経験もあるかもしれません。

　

近年では、コミュニケーションやコラボレーションをするためのアプリケーションやツール等も非常に便利になりましたが、どうしても「かゆい所に手が届かない」状態は発生してしまいます。

　

例えば、この様な経験はありませんか？

 * 議事録を見たら結論は書いてあるんだけど、この間にどんな過程を経て至ったかがわからない
 * 口頭で整理した上で説明はしたけど、あまり伝わっていない様な感じがする
 * いざ文章に起こしてみたが、うまく自分が伝えたい事が言語化できなくって時間が過ぎていく

私も例に違わず数多く経験してきました。特にデザイナー時代には、何度もこの点を指摘されていたので、流石にこのままでは良くないと思い実践したのが「他人に見せるつもりでノートを取る」という習慣でした。

　

本稿では、私自身が手書きのノートをどの様に活用しているかという部分を簡単にご紹介できればと思います。

　

== なぜノートを取っているのか？

私は業務でモバイルアプリ開発をメインに携わっており、これまでもスクラム開発を採用している現場に入る経験が多かった経験を踏まえると、エンジニアだけではなくデザイナーやプロダクトオーナーとMTGの時間以外でも非同期的なコニュニケーションを取る必要が頻繁にあります。そして、タイミングによっては「口頭だとちょっと伝わりにくいけれども、資料をしっかり準備する必要まではない」という事もあります。

　

この様に、一見カジュアルな形に思える会話に見えますが、実は大切な事を伝えているという場合も十分にあり得ます。この様な何気ない会話に隠れているヒントを炙り出す際に、議事録とは別に会話を聞きながらノートを取る事で会話の前後関係を整理しながらまとめていく様にしています。この時に心がけているのは下記の3点になります。

 * できるだけ会話の断片からキーワードを書き出して矢印等で繋いでまとめる
 * プレゼン資料やデザインツールを用いている際は雑な図解を書きながら言葉を付け足す
 * 終わった後は自分が理解できた点や不明点を明確にしながら補足を付け足す

特に仕様に関連する話し合いにおいては、実装をするイメージを主体的に持つためのインプットとしての意味合いと、議論の時間内で現れた目に見えにくい部分を拾い上げるためのアウトプットとしての意味合いがあると考えているので、断片をできるだけ拾い上げて自分自身の理解やメンバーへの共有に活用する様にしています。（実際には、コニュニケーションツール内に自筆ノートを補足資料として共有する事が多いてす。）

　

また、開発業務の準備として前提知識を整理した内容をノート内に自分の言葉でまとめる事も多く、こちらの場合では、ゴールまでのイメージを明確化するために自分で画面図解やコード内の重要なポイントをまとめ、自分の言葉で短く説明できる様なコメントを書き足していく様な形で進める様に心がけています。（ドキュメントの文面やデザインデータから得られる情報の中にも注意深く見てみると、目に見えにくい部分が隠れている場合もあるものです。）

　

この様に「キーポイントになり得る断片を拾い集める」事が、円滑なコミュニケーションを進めていく上で重要だと考えておりますので、まずは自分がしっかりと理解をしておきたいという動機から、少しでも負担を軽くための施策の一環でこのスタイルに現在行き着いたという感じです。

== 私がノートにまとめている内容例

1. 自分が関心のある技術的トピックに関するインプット

2. 機能開発時における詳細設計に関するインプット

3. 議事録とは別に取っている会話内容を整理したもの

4. レビューや仕様確認時等デザインデータを確認しながら進める際のメモ

5. 開発メンバーとのペアレビュー時のメモ

6. 登壇や原稿執筆時の下書き用メモ

7. 仕様を整理したドキュメントの下書き用メモ

== 自分が愛用しているツール類のご紹介

@<b>{【手書きで愛用しているツール】}

 * PILOT:油性ボールペン3色（黒・青・赤）
 * マルマン:書きやすいルーズリーフ（A%方眼紙）
 * 修正液

@<b>{【業務等も通じて経験があるツール】}

 * Miro
 * Figma
 * Notion

== おわりに

ノートを書くとなると、どこか勉強の延長線上の様に思えるかもしれませんが、手軽に実践する事ができる上にツールを使いこなすための手間も不要なので、まずは小さな所から少しずつ始めてみても良いかもしれません。

　

初めのうちはうまくできないキツさはありますが、数をこなして慣れてくると結構いい感じにできる様になり、内容や整理のクオリティも上がってきます。

　

また、取り組んでいる事が自分の言葉で言語化して説明ができる様になると、業務内や個人的なインプット・アウトプットがとても楽しくなり良いサイクルで継続に繋がるのではないかと思います。