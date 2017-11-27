#pragma once

#ifndef _M_CEE
#error This file is supposed to include only with /clr compiled project!
#endif

namespace Li
{
	class Mutex : std::mutex
	{
	public:
		Mutex() : std::mutex() {};

	private:

	};
}