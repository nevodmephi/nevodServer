#include <catch.hpp>
#include <fakeit.hpp>

#include "../src/eas/queueofmessages.hpp"
#include "mocks/clientfake.hpp"

using namespace fakeit;

class Interface {
public:
	virtual int fuck() = 0;
};

Interface& createInterface() {
	Mock<Interface> mock;
	When(Method(mock, fuck)).AlwaysReturn(23);
	return mock.get();
}

TEST_CASE("Queue Of Messages") {
//	auto clientQueue = QueueOfMessagesFactory::create(
//		std::make_shared<ClientMock>(), std::make_shared<ClientMock>());
	Interface& obj =
}
