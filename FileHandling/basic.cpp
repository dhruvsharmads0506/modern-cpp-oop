// File handling is the process of creating, opening, reading, writing, and closing files so that data can be stored permanently on secondary storage (hard disk).
// Unlike variables, file data is not lost when the program ends.
//Useful for records, logs, reports, databases, configs
// Header File Used
// Class	   Purpose
// ofstream	   Write data to a file
// ifstream	   Read data from a file
// fstream	   Read + Write both
// Steps:
// Open a file
// Perform read/write
// Close the file

// File Opening Modes
// Mode	        Meaning
// ios::in	    Read mode
// ios::out	    Write mode
// ios::app  	Append
// ios::trunc	Delete old data
// ios::binary	Binary file

//                          ios
//           (base class – manages file state & modes)
//                           |
//         ------------------------------------------------
//         |                                              |
//      istream                                      ostream
//  (input operations)                         (output operations)
//         |                                              |
//    ifstream                                     ofstream
//  (read from file)                          (write to file)
//         \                                              /
//          \                                            /
//           \                                          /
//                      fstream
//            (read + write from/to file)
