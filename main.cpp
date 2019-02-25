#include <iostream>
#include <vector>
#include <string>
#include "SomeStoryTaleLib.h"

bool Title() {
	SomeStoryTaler::Shower::ClearScreen();

	SomeStoryTaler::Shower::WithPosition::Text(80/2-10, 22/2-2, "Spooky Story Maker!");
	SomeStoryTaler::Shower::WithPosition::Text(80/2-8, 22/2+1, "Please Hit Any key.");
	SomeStoryTaler::Waiter::InputWaiter();

	return true;
}

std::string Intro() {//行間とか機構とかは取り合えず無視で。

	SomeStoryTaler::Shower::ClearScreen();

	std::string Name="武智";
	SomeStoryTaler::TimeType MA(4000);
	std::vector<std::string> Words = { "こんにちは！\n","私は案内人の天煮ヤキトリです。","これから、一つのストーリーを紡ごうと思っています。","それでですが、失礼ですが、あなたの名前をうかがってもよろしいでしょうか。","いや、ほかでは使いませんから。" };
	std::vector<SomeStoryTaler::TimeType> Times = { {MA},{MA},{MA},{MA / 4},{MA} };


	for (std::size_t i = 0; i < Words.size(); i++) {
		SomeStoryTaler::Shower::Timed(Words[i], Times[i]);
	}
	/** /
	SomeStoryTaler::Shower::Timed("こんにちは！",  MA );
	SomeStoryTaler::Shower::Timed("私は案内人の天煮ヤキトリです。",{MA});
	SomeStoryTaler::Shower::Timed("これから、一つのストーリーを紡ごうと思っています。", { MA });
	SomeStoryTaler::Shower::Timed("それでですが、失礼ですが、あなたの名前をうかがってもよろしいでしょうか。", {MA/2});
	SomeStoryTaler::Shower::Timed("いや、ほかでは使いませんから。", { MA });
	/**/
	SomeStoryTaler::Shower::NewLine();
	SomeStoryTaler::Shower::Simple("必要ならお名前をキーインしてください");
		
	SomeStoryTaler::Shower::NewLine();

	if (SomeStoryTaler::Waiter::TimeOuter(MA*2)!=27 ) {
		SomeStoryTaler::Shower::Simple("あ、以下からです。いやー、不便で申し訳ないですね。");

		std::cin >> Name;

		SomeStoryTaler::Shower::Timed("ふむふむ・・・。", {MA});
		SomeStoryTaler::Shower::NewLine();
		SomeStoryTaler::Shower::Timed("あなたの名前は"+Name+"さんですね。",MA*2);
	}
	else {
		SomeStoryTaler::Shower::Timed("おっと、無粋でしたね。仮に"+Name+"さんとお呼びしましょう。", MA);
	}
	
	SomeStoryTaler::Shower::Timed("では"+Name+"さん。",MA);
	SomeStoryTaler::Shower::NewLine();
	SomeStoryTaler::Shower::Timed("はじめましょうか。",MA*2);

	return Name;
}

bool Tale001(const std::string& Name) {


	SomeStoryTaler::Shower::ClearScreen();

	int MA = 4000;

	std::vector<std::string> Words = {
										"さて、"+Name+"さんはこれから一つの話に入ります。",//0
										"どの物語が良いですか？",//1
										"その中であなたは何をしたいですか？",//2
										"あなたは一歩足を踏み出しました。何が見えますか？",//3
										"もう一歩進みました。",//4
										"もう一歩進みました。",//5
										"怖いですか？",//6
										"まぁ、そうですよね。\n",//7
										"目の前に建物が見えてきました。",//8
										"入った先には何があるかわかりますか？",//9
										"かかし！廊下があります。",//10
										"階段が見えてきました。",//11
										"大きな扉の前にいます。",//12
										"恐ろしい感じがするので帰りますか？",//13
										"部屋の中には建物の主がいました。",//14
										"主が語り掛けてきたので応答しています。",//15
										"応答が終わったので帰ります。",//16
										"主は手土産だと何かをよこしました。",//17
										"受け取りますか？",//18
										"それでは一言いって帰りましょう。"//19
	};
	//std::vector < std::chrono::milliseconds> Times = {
	std::vector <int> Times = {
														MA * 3,//0
														MA * 2,
														static_cast<int>(MA * SomeStoryTaler::Random::GetRandomF<double>(3,5)),
														MA,
														static_cast<int>(MA * SomeStoryTaler::Random::GetRandomF<double>(0.8,1)) ,
														static_cast<int>(MA * SomeStoryTaler::Random::GetRandomF<double>(0.8,1)) ,//5
														static_cast<int>(MA * SomeStoryTaler::Random::GetRandomF<double>(0.5,1)) ,
														MA/2,
														MA,
														MA,
														MA,//10
														MA,
														MA * 2,
														MA * 3,
														MA,
														MA*10,//15
														MA,
														static_cast<int>(MA * 0.8),
														static_cast<int>(MA * SomeStoryTaler::Random::GetRandomF<double>(0.8,1)),
														static_cast<int>(MA * SomeStoryTaler::Random::GetRandomF<double>(0.2,1)),
	};
		
	for (std::size_t i = 0; i < Words.size(); i++) {
		std::cout << i;

		if (i == 13) {
			SomeStoryTaler::Shower::Simple(Words[i]);
			if (SomeStoryTaler::Waiter::TimeOuter(SomeStoryTaler::TimeType( Times[i]) ) == 27) {
				SomeStoryTaler::Shower::Simple("では、帰ります！");
				break;

			}
		}
		else {
			SomeStoryTaler::Shower::Timed(Words[i], std::chrono::milliseconds(static_cast<int>(Times[i] * SomeStoryTaler::Random::GetRandomF<double>(0.95, 1))));
		}

		SomeStoryTaler::Shower::NewLine();
	}


	SomeStoryTaler::Shower::NewLine();
	SomeStoryTaler::Shower::NewLine();

	SomeStoryTaler::Shower::Waitable("The End.");


	return true;
}

bool Ending(const std::string& Name) {

	SomeStoryTaler::TimeType Time(1000);
	SomeStoryTaler::TimeType Time2(8000);

	SomeStoryTaler::Shower::ClearScreen();

	SomeStoryTaler::Shower::Timed("さて、" + Name + "さん。", Time);
	SomeStoryTaler::Shower::Timed("ご自分の物語はいかがでしたでしょうか。",Time);
	SomeStoryTaler::Shower::Timed("楽しんでいただけたならば幸いです。",Time);
	SomeStoryTaler::Shower::Timed("ハハッ！",Time);

	SomeStoryTaler::Waiter::TimeWaiter(Time2/2);

	SomeStoryTaler::Shower::ClearScreen();

	SomeStoryTaler::Waiter::TimeWaiter(Time);
	SomeStoryTaler::Shower::WithPosition::Text(80/2+1,22/2+2,"Writen by 天煮ヤキトリ＠2019");

	SomeStoryTaler::Waiter::TimeOuter(Time2);
	SomeStoryTaler::Shower::ClearScreen();

	return 0;

}

bool Koukoku() {

	SomeStoryTaler::TimeType Time(750);
	 
	SomeStoryTaler::Shower::ClearScreen();

	SomeStoryTaler::Shower::Timed("さて、広告です。", Time*3);
	SomeStoryTaler::Shower::Timed("この物語にはふさわしい曲があります。", Time);
	SomeStoryTaler::Shower::Timed("https://amzn.to/2IxvE7D", Time);
	SomeStoryTaler::Shower::Simple("おひとついかがですか？");
	SomeStoryTaler::Waiter::TimeOuter(Time * 7);

	SomeStoryTaler::Shower::ClearScreen();
	return true;
}

int main() {
	InitializeDisplayMode();//need for windows. some time.

	Title();
	Koukoku();
	std::string Name = "デバッガーα";
	Name = Intro();
	Tale001(Name);
	Ending(Name);

	SomeStoryTaler::Waiter::TimeOuter(SomeStoryTaler::TimeType(2000));

 	return 0;
}