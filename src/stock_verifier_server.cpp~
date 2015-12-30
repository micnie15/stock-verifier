#include "ros/ros.h"
#include "stock_verifier_package/stock_verifier.h"

bool search(stock_verifier_package::stock_verifier::Request  &req,
         stock_verifier_package::stock_verifier::Response &res)
{
    	int a[5] = {1,3,5,7,9};

	for( int i=0; i<5; i++){
		if (a[i] == req.a){
			res.truefalse = 1;
			break;}
		else
			res.truefalse = 0;
		}

  ROS_INFO("request: x=%ld", (long int)req.a);
  ROS_INFO("sending back response: [%ld]", (long int)res.truefalse);
  sleep(1);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "stock_verifier_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("stock_verifier", search);
  ROS_INFO("Ready to verify.");
  ros::spin();

  return 0;
}

