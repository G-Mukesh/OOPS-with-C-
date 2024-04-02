
#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

/**
  * class library
  * 
  */

class library
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  library ();

  /**
   * Empty Destructor
   */
  virtual ~library ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void name;
  void location;
  void books;
  void departments;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of location
   * @param new_var the new value of location
   */
  void setLocation (void new_var)   {
      location = new_var;
  }

  /**
   * Get the value of location
   * @return the value of location
   */
  void getLocation ()   {
    return location;
  }

  /**
   * Set the value of books
   * @param new_var the new value of books
   */
  void setBooks (void new_var)   {
      books = new_var;
  }

  /**
   * Get the value of books
   * @return the value of books
   */
  void getBooks ()   {
    return books;
  }

  /**
   * Set the value of departments
   * @param new_var the new value of departments
   */
  void setDepartments (void new_var)   {
      departments = new_var;
  }

  /**
   * Get the value of departments
   * @return the value of departments
   */
  void getDepartments ()   {
    return departments;
  }
private:


  void initAttributes () ;

};

#endif // LIBRARY_H
