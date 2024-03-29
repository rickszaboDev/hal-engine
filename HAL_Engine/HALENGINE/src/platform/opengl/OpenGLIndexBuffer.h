#pragma once

#include "engine/renderer/IndexBuffer.h"

namespace Haleng {
	class OpenGLIndexBuffer : public IndexBuffer {
	public:
		OpenGLIndexBuffer(uint32_t* indices, uint32_t count);
		~OpenGLIndexBuffer();

		virtual void Bind() const;
		virtual void Unbind() const;

		virtual uint32_t GetCount() const { return m_Count; }
	private:
		uint32_t m_RendererID;
		uint32_t m_Count;
	};
}