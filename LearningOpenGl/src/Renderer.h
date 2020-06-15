#pragma once
#include "VertexArray.h"
#include "Shader.h"
#include "IndexBuffer.h"
class Renderer {
public:
	void draw(VertexArray const& va, IndexBuffer const& ib, Shader const& shader);
	void clear() const;
};

