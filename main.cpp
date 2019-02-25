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

std::string Intro() {//�s�ԂƂ��@�\�Ƃ��͎�荇���������ŁB

	SomeStoryTaler::Shower::ClearScreen();

	std::string Name="���q";
	SomeStoryTaler::TimeType MA(4000);
	std::vector<std::string> Words = { "����ɂ��́I\n","���͈ē��l�̓V�σ��L�g���ł��B","���ꂩ��A��̃X�g�[���[��a�����Ǝv���Ă��܂��B","����łł����A����ł����A���Ȃ��̖��O�����������Ă���낵���ł��傤���B","����A�ق��ł͎g���܂��񂩂�B" };
	std::vector<SomeStoryTaler::TimeType> Times = { {MA},{MA},{MA},{MA / 4},{MA} };


	for (std::size_t i = 0; i < Words.size(); i++) {
		SomeStoryTaler::Shower::Timed(Words[i], Times[i]);
	}
	/** /
	SomeStoryTaler::Shower::Timed("����ɂ��́I",  MA );
	SomeStoryTaler::Shower::Timed("���͈ē��l�̓V�σ��L�g���ł��B",{MA});
	SomeStoryTaler::Shower::Timed("���ꂩ��A��̃X�g�[���[��a�����Ǝv���Ă��܂��B", { MA });
	SomeStoryTaler::Shower::Timed("����łł����A����ł����A���Ȃ��̖��O�����������Ă���낵���ł��傤���B", {MA/2});
	SomeStoryTaler::Shower::Timed("����A�ق��ł͎g���܂��񂩂�B", { MA });
	/**/
	SomeStoryTaler::Shower::NewLine();
	SomeStoryTaler::Shower::Simple("�K�v�Ȃ炨���O���L�[�C�����Ă�������");
		
	SomeStoryTaler::Shower::NewLine();

	if (SomeStoryTaler::Waiter::TimeOuter(MA*2)!=27 ) {
		SomeStoryTaler::Shower::Simple("���A�ȉ�����ł��B����[�A�s�ւŐ\����Ȃ��ł��ˁB");

		std::cin >> Name;

		SomeStoryTaler::Shower::Timed("�ӂނӂށE�E�E�B", {MA});
		SomeStoryTaler::Shower::NewLine();
		SomeStoryTaler::Shower::Timed("���Ȃ��̖��O��"+Name+"����ł��ˁB",MA*2);
	}
	else {
		SomeStoryTaler::Shower::Timed("�����ƁA�����ł����ˁB����"+Name+"����Ƃ��Ăт��܂��傤�B", MA);
	}
	
	SomeStoryTaler::Shower::Timed("�ł�"+Name+"����B",MA);
	SomeStoryTaler::Shower::NewLine();
	SomeStoryTaler::Shower::Timed("�͂��߂܂��傤���B",MA*2);

	return Name;
}

bool Tale001(const std::string& Name) {


	SomeStoryTaler::Shower::ClearScreen();

	int MA = 4000;

	std::vector<std::string> Words = {
										"���āA"+Name+"����͂��ꂩ���̘b�ɓ���܂��B",//0
										"�ǂ̕��ꂪ�ǂ��ł����H",//1
										"���̒��ł��Ȃ��͉����������ł����H",//2
										"���Ȃ��͈�����𓥂ݏo���܂����B���������܂����H",//3
										"��������i�݂܂����B",//4
										"��������i�݂܂����B",//5
										"�|���ł����H",//6
										"�܂��A�����ł���ˁB\n",//7
										"�ڂ̑O�Ɍ����������Ă��܂����B",//8
										"��������ɂ͉������邩�킩��܂����H",//9
										"�������I�L��������܂��B",//10
										"�K�i�������Ă��܂����B",//11
										"�傫�Ȕ��̑O�ɂ��܂��B",//12
										"���낵������������̂ŋA��܂����H",//13
										"�����̒��ɂ͌����̎傪���܂����B",//14
										"�傪���|���Ă����̂ŉ������Ă��܂��B",//15
										"�������I������̂ŋA��܂��B",//16
										"��͎�y�Y���Ɖ������悱���܂����B",//17
										"�󂯎��܂����H",//18
										"����ł͈ꌾ�����ċA��܂��傤�B"//19
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
				SomeStoryTaler::Shower::Simple("�ł́A�A��܂��I");
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

	SomeStoryTaler::Shower::Timed("���āA" + Name + "����B", Time);
	SomeStoryTaler::Shower::Timed("�������̕���͂������ł����ł��傤���B",Time);
	SomeStoryTaler::Shower::Timed("�y����ł����������Ȃ�΍K���ł��B",Time);
	SomeStoryTaler::Shower::Timed("�n�n�b�I",Time);

	SomeStoryTaler::Waiter::TimeWaiter(Time2/2);

	SomeStoryTaler::Shower::ClearScreen();

	SomeStoryTaler::Waiter::TimeWaiter(Time);
	SomeStoryTaler::Shower::WithPosition::Text(80/2+1,22/2+2,"Writen by �V�σ��L�g����2019");

	SomeStoryTaler::Waiter::TimeOuter(Time2);
	SomeStoryTaler::Shower::ClearScreen();

	return 0;

}

bool Koukoku() {

	SomeStoryTaler::TimeType Time(750);
	 
	SomeStoryTaler::Shower::ClearScreen();

	SomeStoryTaler::Shower::Timed("���āA�L���ł��B", Time*3);
	SomeStoryTaler::Shower::Timed("���̕���ɂ͂ӂ��킵���Ȃ�����܂��B", Time);
	SomeStoryTaler::Shower::Timed("https://amzn.to/2IxvE7D", Time);
	SomeStoryTaler::Shower::Simple("���ЂƂ������ł����H");
	SomeStoryTaler::Waiter::TimeOuter(Time * 7);

	SomeStoryTaler::Shower::ClearScreen();
	return true;
}

int main() {
	InitializeDisplayMode();//need for windows. some time.

	Title();
	Koukoku();
	std::string Name = "�f�o�b�K�[��";
	Name = Intro();
	Tale001(Name);
	Ending(Name);

	SomeStoryTaler::Waiter::TimeOuter(SomeStoryTaler::TimeType(2000));

 	return 0;
}