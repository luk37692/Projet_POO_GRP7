#pragma once
#include "pch.h"

namespace NS_Models
{
	ref class CLMaps 
	{
	public:
		virtual String^ SELECT(void) = 0;
		virtual String^ INSERT(void) = 0;
		virtual String^ UPDATE(void) = 0;
		virtual String^ DELETE(void) = 0;
	};
}

