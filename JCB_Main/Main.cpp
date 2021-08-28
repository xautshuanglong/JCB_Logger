// JCB_Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>
#include "../JCB_Logger/LogUtil.h"

int main()
{
#ifdef _DEBUG
    LogUtil::Init(LOG_LEVEL_DEBUG, true);
#else
    LogUtil::Init(LOG_LEVEL_INFO, false);
#endif
    LogUtil::Debug("JCB_Logger Debug Testing");
    LogUtil::Info("JCB_Logger Info Testing");
    LogUtil::Warn("JCB_Logger Warn Testing");
    LogUtil::Error("JCB_Logger Error Testing");
    LogUtil::Fatal("JCB_Logger Fatal Testing");

    ::Sleep(1000);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
