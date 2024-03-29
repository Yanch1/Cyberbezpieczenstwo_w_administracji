#pragma once

#include "Engine/Engine.h"



namespace gm
{
	/*Put data that will be passed between slideFrames here*/
	struct gameData
	{
		StateMachine machine;

		bool returnToMenu = false;
	};

	typedef std::shared_ptr<gameData> gameDataRef;

	class Game
	{

		gameDataRef data = std::make_shared<gameData>();
		void run();

	public:
		Game();
		~Game();
	};

}
