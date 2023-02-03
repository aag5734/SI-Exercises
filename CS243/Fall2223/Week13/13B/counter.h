#ifndef _COUNTER_H
#define _COUNTER_H

typedef struct Counter_s {

    int row;          ///< vertical position of the counter, i.e. "racing lane"

    int num;

    int dist;

} Counter;

/// init_racers - Do setup work for all racers at the start of the program.
/// @param milliseconds length of pause between steps in animation 

void init_counters( long milliseconds );

/// make_racer - Create a new counter.
///
/// @param name the string name to show on the display for this counter
/// @param position the row in which to race
/// @return Counter pointer a dynamically allocated Counter object
/// @pre strlen( name ) <= MAX_NAME_LEN, for display reasons.

Counter *make_counter( int position );

/// destroy_racer - Destroy all dynamically allocated storage for a counter.
///
/// @param counter the object to be de-allocated

void destroy_counter( Counter *counter );

/// Run one counter in the race.
/// Initialize the display of the counter*:
///   The counter starts at the start position, column 0.
///   The counter's graphic (a string) is displayed.
///
/// Actions below repeat until the counter is at FINISH_LINE or has a flat:
///
///  Calculate a random waiting period between 0 and 
///    the initial delay value given to init_racers at the start of the race.
///  Sleep for that length of time.
///  If sleep value is less than or equal to 3, counter gets flat and can't finish.
///    A flat tire is displayed by 'X' in the second character of the graphic.
///    Display the car with the flat tire and stop further racing.
///  Change the display position of this counter by +1 column this way:
///    Erase the counter's car and name from the display.
///    Update the counter's dist field by +1.
///    Display the counter's graphic (car and name) at the new position.
///
/// This function should execute as its own thread of execution logically
/// in parallel with other counter threads.
///
/// Note: Be sure to keep the update of the display by one counter "atomic".
///
/// @pre counter cannot be NULL.
/// @param counter Counter object declared as void* for pthread compatibility
/// @return void pointer to status. A NULL represents success.

void *run( void * counter );

#endif
