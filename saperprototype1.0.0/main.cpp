#include "Engine.hpp"
#include "Sprite.hpp"
#include <iostream>
#include "Mouse.hpp"
#include "Keyboard.hpp"
int main()
{
	Engine engine;

	engine.Initialize("Saperprototype");

	Sprite testSprite = Sprite("Biplane.png",0,0);
	testSprite.SetScale(0.25f);
	while (true)
	{
		engine.Update();
		testSprite.Update();

		//testSprite.MoveTo((float)Mouse::GetMouseX(),(float)Mouse::GetMouseY() );

		if (Mouse::ButtonDown(GLFW_MOUSE_BUTTON_LEFT))
		{
			testSprite.RotateBy(10);
		}
		if (Mouse::ButtonUp(GLFW_MOUSE_BUTTON_RIGHT))
		{
			testSprite.RotateBy(-10);
		}
		if (Mouse::Button(GLFW_MOUSE_BUTTON_MIDDLE))
		{
			testSprite.RotateBy(10);
		}

		if (Keyboard::Key(GLFW_KEY_W))
		{
			testSprite.MoveUp();
		}
		if (Keyboard::Key(GLFW_KEY_S))
		{
			testSprite.MoveDown();
		}
		if (Keyboard::Key(GLFW_KEY_A))
		{
			testSprite.MoveLeft();
		}
		if (Keyboard::Key(GLFW_KEY_D))
		{
			testSprite.MoveRight();
		}
		if (Keyboard::Key(GLFW_KEY_ESCAPE))
		{
			glfwTerminate();
			exit(0);
		}

		engine.BeginRender();
		testSprite.Render();
		engine.EndRender();
	}
	return 0;
}