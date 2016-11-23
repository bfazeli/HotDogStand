/*
Fazeli, Bijan
Lauguico, Marco
Sucu, Said
CS A250
November 23, 2016

Lab 14: Static Members
*/

#ifndef HOTDOGSTAND_H
#define HOTDOGSTAND_H


class  HotDogStand
{
public:
	 // Default Const
	 HotDogStand();

	 // setID
	 void setID(int id);

	 // getID
	 int getID() const;

	 // getStandSales
	 int getStandSales() const;

	 // justSold
	 void justSold();

	 // getAllSales
	 static int getAllSales();

	~ HotDogStand();

private:
	int numSold, id;
	static int total;
};

#endif // !HOTDOGSTAND_H
