#include <Jazz.h>
#include <Jazz/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Jazz {

	class Jazznut : public Application
	{
	public:
		Jazznut()
			: Application("Jed")
		{
			PushLayer(new EditorLayer());
		}

		~Jazznut()
		{
		}
	};

	Application* CreateApplication()
	{
		return new Jazznut();
	}

}