#pragma once

#include "Jazz/Core/Input.h"
#include "Core/MouseCodes.h"

namespace Jazz {

	class WindowsInput : public Input
	{
	protected:
        virtual bool IsKeyPressedImpl(KeyCode key) override;

        virtual bool IsMouseButtonPressedImpl(MouseCode button) override;
		virtual std::pair<float, float> GetMousePositionImpl() override;
		virtual float GetMouseXImpl() override;
		virtual float GetMouseYImpl() override;
	};

}
