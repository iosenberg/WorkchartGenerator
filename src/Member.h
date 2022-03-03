/*
 * Member.h
 *
 *  Created on: Mar 3, 2022
 *      Author: kings
 */

#ifndef MEMBER_H_
#define MEMBER_H_

class Member {
public:
	char* name;
	int aid_hours;
	int pos_hours;
	int* availability;

	Member(char* name_in, int aid_hours_in, int pos_hours_in, int* availability_in);
	virtual ~Member();
};

#endif /* MEMBER_H_ */
