#include <iostream>

#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"


namespace MainMenu
{
	enMainMenuOptions ReadMainMenuOption()
	{
		return static_cast<MainMenu::enMainMenuOptions>(ReadNubmerInRange("Choose what do you want to do[1:5]", 1, 5));
	}
}

namespace QuickWithdraw
{
	 short ReadQuickWihdraw()
	{
		short Option = ReadNubmerInRange("Choose what to withdraw[1:9]", 1, 9);
		short WithdrawOption[] = { 20,50,100,200,400,600,800,1000,0 };
		return WithdrawOption[Option - 1];
		
	}
}