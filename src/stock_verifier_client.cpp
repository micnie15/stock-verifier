#include "ros/ros.h"
#include "stock_verifier/stock_verifier.h"

#include <cstdlib>

int main(int argc, char **argv, int answer)
{
  ros::init(argc, argv, "stock_verifier");
  if (argc != 2)
  {
    ROS_INFO("usage: checks if one item is in stock");
    return 1;
  }

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<stock_verifier::stock_verifier>("stock_verifier");

  stock_verifier::stock_verifier srv;
  srv.request.a = atoll(argv[1]);
  if (client.call(srv))
  {
	answer = ("%ld", (long int)srv.response.truefalse);
		if (answer == 1)
		ROS_INFO("Item is in stock");
		else
		ROS_INFO("Item is not in stock");
  }
  else
  {
    ROS_ERROR("Failed to call service stock_verifier");
    return 1;
  }

  return 0;
}

