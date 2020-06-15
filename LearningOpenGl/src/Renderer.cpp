#include "Renderer.h"

void Renderer::draw(VertexArray const& va, IndexBuffer const& ib, Shader const& shader) {
    shader.Bind();
    va.Bind();
    ib.Bind();
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
}
void Renderer::clear() const{
    glClear(GL_COLOR_BUFFER_BIT);
}