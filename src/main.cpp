#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time.hpp>
#include <iostream>

using namespace boost::gregorian;
using namespace boost::posix_time;

int main() {
	date start{1981, 8, 14};

	// Get current system time
	ptime timeLocal = second_clock::local_time();
	std::cout << "Current System Time = " << timeLocal << std::endl;
	date now = timeLocal.date();

	date_period dp{start, now};

	date_duration dd = dp.length();
	std::cout << dd.days() << '\n';

	return 0;
}
