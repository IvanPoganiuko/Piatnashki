#pragma once
#include <SFML/Graphics.hpp>
#include "UIObject.h"
#include "Object.h"

using namespace std;

namespace UI
{
	class Effect
	{
	public:
		Effect();

		Effect(UIObject &target);

		void setTarget(UIObject *target);
		UIObject* getTarget();

		virtual void draw() {};

		~Effect();

	protected:
		void drawTarget();

	private:
		UIObject* target = nullptr;

	};
}

