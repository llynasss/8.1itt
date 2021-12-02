#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1itt/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut81itt
{
	TEST_CLASS(ut81itt)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char p[] = "nobel";
			bool u = isTrue(p);
			Assert::AreEqual(true, u);

		}
	};
}
