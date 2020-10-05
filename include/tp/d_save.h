#pragma once

#include "defines.h"
#include <tp/d_com_inf_game.h>

namespace tp::d_save
{
	extern "C"
	{
		u16 getRupeeMax();
		void getSave(tp::d_com_inf_game::GameInfo* gameInfoPtr, s32 areaID);
		void putSave(tp::d_com_inf_game::GameInfo* gameInfoPtr, s32 areaID);
		void card_to_memory(char* param_1, int param_2);
	}
}