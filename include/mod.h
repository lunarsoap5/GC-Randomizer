#pragma once

#include "defines.h"

namespace mod
{
	class Mod
	{
		public:
			Mod();
			void init();
			
		private:
			void run();

			void memoryOverwrites();

			s32 procCreateItemForTrBoxDemo(const float[3], s32, s32, s32, const float[3], const float[3]);
			
		private:
			void (*fapGm_Execute_trampoline)() = nullptr;
			
			bool (*checkTreasureRupeeReturn_trampoline)(void*, s32) = nullptr;

			s32 (*createItemForTrBox_trampoline)(const float[3], s32, s32, s32, const float[3], const float[3]) = nullptr;
	};
}