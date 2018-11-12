#include <Yeet.h>

class Sandbox : public Yeet::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Yeet::Application* Yeet::CreateApplication() {
	return new Sandbox();
}