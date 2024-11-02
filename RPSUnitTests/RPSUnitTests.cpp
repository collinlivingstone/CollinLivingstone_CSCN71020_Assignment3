#include "pch.h"

#include "CppUnitTest.h"

extern "C" char RockPaperSissors(char[], char[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSUnitTests
{
	TEST_CLASS(RPSUnitTests)
	{
	public:
		
		//Test1
		TEST_METHOD(RockBeatsSissorsTest)
		{
			//Player choices
			char playerOneChoice[] = "Rock"; //Player 1
			char playerTwoChoice[] = "Sissors"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('1', result);
		}

		//Test2
		TEST_METHOD(PaperBeatsRockTest)
		{
			//Player choices
			char playerOneChoice[] = "Rock"; //Player 1
			char playerTwoChoice[] = "Paper"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('2', result);
		}

		//Test3
		TEST_METHOD(RockTiesRockTest)
		{
			//Player choices
			char playerOneChoice[] = "Rock"; //Player 1
			char playerTwoChoice[] = "Rock"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('t', result);
		}

		//Test4
		TEST_METHOD(SissorsBeatsPaperTest)
		{
			//Player choices
			char playerOneChoice[] = "Paper"; //Player 1
			char playerTwoChoice[] = "Sissors"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('2', result);
		}

		//Test5
		TEST_METHOD(PaperTiesPaperTest)
		{
			//Player choices
			char playerOneChoice[] = "Paper"; //Player 1
			char playerTwoChoice[] = "Paper"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('t', result);
		}

		//Test6
		TEST_METHOD(InvalidInputTest)
		{
			//Player choices
			char playerOneChoice[] = "Monkey"; //Player 1
			char playerTwoChoice[] = "Poptart"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('i', result);
		}

		//Test7
		TEST_METHOD(InvalidInputNumbersTest)
		{
			//Player choices
			char playerOneChoice[] = "7"; //Player 1
			char playerTwoChoice[] = "8"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('i', result);
		}

		//Test8
		TEST_METHOD(InvalidNullTest)
		{
			//Player choices
			char playerOneChoice[] = "7"; //Player 1
			char playerTwoChoice[] = "8"; //Player2

			//Result
			char result = RockPaperSissors(playerOneChoice, playerTwoChoice);

			//Compare return with result.
			Assert::AreEqual('i', result);
		}

	};
}
