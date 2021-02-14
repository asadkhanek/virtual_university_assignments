#include <GL/glew.h>
 #include <GLFW/glfw3.h> 
int main()
{
GLFWwindow* window; if (!glfwInit())
{
return -1;
}
window = glfwCreateWindow(400, 300, "BC123456789 Name", NULL, NULL); if (!window)
{
glfwTerminate(); return -1;
}
glfwMakeContextCurrent(window); glViewport(0, 0, 800, 800);
glClearColor(30, 20, 40, 0); glClear(GL_COLOR_BUFFER_BIT); glfwSwapBuffers(window);
while (!glfwWindowShouldClose(window))
{
glClearColor(30, 40, 0, 0); glClear(GL_COLOR_BUFFER_BIT); glfwSwapBuffers(window); glfwPollEvents();
}

