
#ifndef MEMBER_H
#define MEMBER_H
#include "person.h"

#include <string>

/**
  * class member
  * 
  */

class member : public person
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  member ();

  /**
   * Empty Destructor
   */
  virtual ~member ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void search_book ()
  {
  }


  /**
   */
  void take_book ()
  {
  }


  /**
   */
  void read_book ()
  {
  }


  /**
   */
  void return_book ()
  {
  }


  /**
   */
  void renew_membership ()
  {
  }

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

  void membership_id;
  void membership_type;
  void membership_period;
  void books_taken;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of membership_id
   * @param new_var the new value of membership_id
   */
  void setMembership_id (void new_var)   {
      membership_id = new_var;
  }

  /**
   * Get the value of membership_id
   * @return the value of membership_id
   */
  void getMembership_id ()   {
    return membership_id;
  }

  /**
   * Set the value of membership_type
   * @param new_var the new value of membership_type
   */
  void setMembership_type (void new_var)   {
      membership_type = new_var;
  }

  /**
   * Get the value of membership_type
   * @return the value of membership_type
   */
  void getMembership_type ()   {
    return membership_type;
  }

  /**
   * Set the value of membership_period
   * @param new_var the new value of membership_period
   */
  void setMembership_period (void new_var)   {
      membership_period = new_var;
  }

  /**
   * Get the value of membership_period
   * @return the value of membership_period
   */
  void getMembership_period ()   {
    return membership_period;
  }

  /**
   * Set the value of books_taken
   * @param new_var the new value of books_taken
   */
  void setBooks_taken (void new_var)   {
      books_taken = new_var;
  }

  /**
   * Get the value of books_taken
   * @return the value of books_taken
   */
  void getBooks_taken ()   {
    return books_taken;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_H
