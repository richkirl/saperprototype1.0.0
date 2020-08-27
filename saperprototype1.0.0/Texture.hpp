#ifndef TEXTURE
#define TEXTURE
#include <GLFW/glfw3.h>
#include <SOIL2.h>
#include <iostream>
#include <string>
class Texture
{
public:
	Texture();
	Texture(int _id);
	Texture(std::string path);

	int Getid();
	int Getwidth();
	int Getheight();

private:
	bool GetTextureParams();
	int id;
	int width;
	int height;
};


#endif // !TEXTURE



