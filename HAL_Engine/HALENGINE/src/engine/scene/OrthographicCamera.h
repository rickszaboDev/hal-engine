#pragma once

#include <glm/glm.hpp>
#include "engine/scene/Transform3D.h"

namespace Haleng
{
	class OrthographicCamera : public Transform3D
	{
	public:
		OrthographicCamera(float left, float right, float bottom, float top);

		virtual glm::vec3& GetPosition() override { return m_Data.position; }
		virtual const void SetPosition(const glm::vec3& position) override;

		virtual glm::vec3& GetRotation() { return m_Data.eulerRotation; }
		virtual const void SetRotation(const glm::vec3& rotation);

		virtual glm::vec3& GetScale() override { return m_Data.scale; }
		virtual const void SetScale(const glm::vec3& scale) override;

		const glm::mat4& GetProjectionMatrix() { return m_ProjectionMatrix; }
		const glm::mat4& GetViewMatrix() { return m_ViewMatrix; }
		const glm::mat4& GetViewProjectionMatrix() { return m_ViewProjectionMatrix; }
	private:
		void RecalculateViewMatrix();

	private:
		glm::mat4 m_ProjectionMatrix;
		glm::mat4 m_ViewMatrix;
		glm::mat4 m_ViewProjectionMatrix;

		Transform3D::Data m_Data;
	};
}