#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"

using namespace std;
using namespace sf;

namespace Belonogov
{
	class Splash : public State
	{
	public:
		Splash(GameDataRef data);

		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;
		Clock _clock;
		Sprite _background;
	};
}
