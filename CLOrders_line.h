#pragma once
#include"pch.h"
#include "CLOrders.h"
namespace NS_Models {
	 class CLComposed
	{
		int quantity_ordered;
		string color;
		CLComposed *next;
	};
}
