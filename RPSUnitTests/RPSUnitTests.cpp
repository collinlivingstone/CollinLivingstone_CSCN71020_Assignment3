#include "pch.h"
#include "CppUnitTest.h"

extern "C" char RockPaperSissors(char playerOneInput[], char playerTwoInput[]);;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSUnitTests
{
	TEST_CLASS(RPSUnitTests)
	{
	public:
		
		TEST_METHOD(RockandSissorsTest)
		{
			//Player choices
			char playerOneChoice[] = "Rock"; //Player 1
			char playerTwoChoice[] = "Sissors"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('1', result);

		}

	};
}
