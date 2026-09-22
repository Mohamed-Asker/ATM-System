#include <iostream>

#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"


namespace MainMenu
{
	enMainMenuOptions ReadMainMenuOption()
	{
		return static_cast<MainMenu::enMainMenuOptions>(ReadNubmerInRange("Choose what do you want to do[1:5]:", 1, 5));
	}
}

namespace QuickWithdraw
{
	enQuickWithdrawOptions ReadQuickWihdrawOption()
	{
		short WithdrawOption = ReadNubmerInRange("Choose what to withdraw[1:9]", 1, 9);
		switch (WithdrawOption)
		{
		case 1:
			return enQuickWithdrawOptions::q20;
		case 2:
			return enQuickWithdrawOptions::q50;
		case 3:
			return enQuickWithdrawOptions::q100;
		case 4:
			return enQuickWithdrawOptions::q200;
		case 5:
			return enQuickWithdrawOptions::q400;
		case 6:
			return enQuickWithdrawOptions::q600;
		case 7:
			return enQuickWithdrawOptions::q800;
		case 8:
			return enQuickWithdrawOptions::q1000;
		case 9:
			return enQuickWithdrawOptions::qExit;
		}
	}
}