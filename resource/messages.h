/*
 * Messages.h -- automatically generated by MC.EXE
 *
 * Copyright (c) 2000 - 2001 Microsoft Corporation. All rights reserved.
 * 
 */
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: MSXSL_MSG_HEADER
//
// MessageText:
//
// Microsoft (R) XSLT Processor Version %1
//
#define MSXSL_MSG_HEADER                 0x40000064L

//
// MessageId: MSXSL_MSG_USAGE
//
// MessageText:
//
// Usage: MSXSL source stylesheet [options] [param=value...] [xmlns:prefix=uri...]
// 
// Options:
//     -?            Show this message
//     -o filename   Write output to named file
//     -m startMode  Start the transform in this mode
//     -xw           Strip non-significant whitespace from source and stylesheet
//     -xe           Do not resolve external definitions during parse phase
//     -v            Validate documents during parse phase
//     -t            Show load and transformation timings
//     -pi           Get stylesheet URL from xml-stylesheet PI in source document
//     -u version    Use a specific version of MSXML: '2.6', '3.0', '6.0'
//     -             Dash used as source argument loads XML from stdin
//     -             Dash used as stylesheet argument loads XSL from stdin
//
#define MSXSL_MSG_USAGE                  0x40000065L

//
// MessageId: MSXSL_MSG_TIMINGS
//
// MessageText:
//
// Source document load time:     %1 milliseconds
// Stylesheet document load time: %2 milliseconds
// Stylesheet compile time:       %3 milliseconds
// Stylesheet execution time:     %4 milliseconds
//                    Total time: %5 milliseconds
//
#define MSXSL_MSG_TIMINGS                0x40000066L

//
// MessageId: MSXSL_E_UNKNOWN_OPTION
//
// MessageText:
//
// Unrecognized option : '-%1'.
//
#define MSXSL_E_UNKNOWN_OPTION           0xC0000067L

//
// MessageId: MSXSL_E_MISSING_SOURCE
//
// MessageText:
//
// Missing source filename.
//
#define MSXSL_E_MISSING_SOURCE           0xC0000068L

//
// MessageId: MSXSL_E_MISSING_STYLESHEET
//
// MessageText:
//
// Missing stylesheet filename.
//
#define MSXSL_E_MISSING_STYLESHEET       0xC0000069L

//
// MessageId: MSXSL_E_MISSING_OUTPUT
//
// MessageText:
//
// Missing output filename after '-o' option.
//
#define MSXSL_E_MISSING_OUTPUT           0xC000006AL

//
// MessageId: MSXSL_E_MISSING_MODE
//
// MessageText:
//
// Missing start mode name after '-m' option.
//
#define MSXSL_E_MISSING_MODE             0xC000006BL

//
// MessageId: MSXSL_E_MISSING_PARAM_EQUALS
//
// MessageText:
//
// Parameter name '%1' must be followed by an '=' character.
//
#define MSXSL_E_MISSING_PARAM_EQUALS     0xC000006CL

//
// MessageId: MSXSL_E_MISSING_NS_EQUALS
//
// MessageText:
//
// Namespace declaration '%1' must be followed by an '=' character.
//
#define MSXSL_E_MISSING_NS_EQUALS        0xC000006DL

//
// MessageId: MSXSL_E_MISSING_NAME
//
// MessageText:
//
// The '=' character must be preceded by the name of a parameter or a namespace declaration.
//
#define MSXSL_E_MISSING_NAME             0xC000006EL

//
// MessageId: MSXSL_E_MISSING_PARAM_VALUE
//
// MessageText:
//
// Parameter '%1' is missing a value following the '=' character.
//
#define MSXSL_E_MISSING_PARAM_VALUE      0xC000006FL

//
// MessageId: MSXSL_E_MISSING_URI_VALUE
//
// MessageText:
//
// Namespace declaration '%1' is missing a URI following the '=' character.
//
#define MSXSL_E_MISSING_URI_VALUE        0xC0000070L

//
// MessageId: MSXSL_E_PREFIX_UNDEFINED
//
// MessageText:
//
// Prefix '%1' cannot be resolved.  Use xmlns:%1='...' to bind '%1' to a URI.
//
#define MSXSL_E_PREFIX_UNDEFINED         0xC0000071L

//
// MessageId: MSXSL_E_MULTIPLE_STDIN
//
// MessageText:
//
// The input and the stylesheet document cannot both be read from stdin.  At least one of them must be loaded from a URL.
//
#define MSXSL_E_MULTIPLE_STDIN           0xC0000072L

//
// MessageId: MSXSL_E_BAD_MSXML
//
// MessageText:
//
// Could not create the '%1' object.  Make sure that MSXML version %2 is correctly installed on the machine.
//
#define MSXSL_E_BAD_MSXML                0xC0000073L

//
// MessageId: MSXSL_E_CMDLINE_CTXT
//
// MessageText:
//
// Error occurred while parsing command line.
//
#define MSXSL_E_CMDLINE_CTXT             0xC0000074L

//
// MessageId: MSXSL_E_CREATE_CTXT
//
// MessageText:
//
// Error occurred while creating MSXML COM objects.
//
#define MSXSL_E_CREATE_CTXT              0xC0000075L

//
// MessageId: MSXSL_E_LOAD_CTXT
//
// MessageText:
//
// Error occurred while loading document '%1'.
//
#define MSXSL_E_LOAD_CTXT                0xC0000076L

//
// MessageId: MSXSL_E_PARSE_CTXT
//
// MessageText:
//
// Error occurred while parsing document.
//
#define MSXSL_E_PARSE_CTXT               0xC0000077L

//
// MessageId: MSXSL_E_COMPILE_CTXT
//
// MessageText:
//
// Error occurred while compiling stylesheet '%1'.
//
#define MSXSL_E_COMPILE_CTXT             0xC0000078L

//
// MessageId: MSXSL_E_CREATE_FILE_CTXT
//
// MessageText:
//
// Error occurred while creating file '%1'.
//
#define MSXSL_E_CREATE_FILE_CTXT         0xC0000079L

//
// MessageId: MSXSL_E_MODE_CTXT
//
// MessageText:
//
// Error occurred while setting the stylesheet's starting mode to '%1'.
//
#define MSXSL_E_MODE_CTXT                0xC000007AL

//
// MessageId: MSXSL_E_PARAM_CTXT
//
// MessageText:
//
// Error occurred while passing parameter '%1' to the stylesheet.
//
#define MSXSL_E_PARAM_CTXT               0xC000007BL

//
// MessageId: MSXSL_E_EXECUTE_CTXT
//
// MessageText:
//
// Error occurred while executing stylesheet '%1'.
//
#define MSXSL_E_EXECUTE_CTXT             0xC000007CL

//
// MessageId: MSXSL_E_CMDLINE_ERROR
//
// MessageText:
//
// %1
// Code:   0x%2
// %3%0
//
#define MSXSL_E_CMDLINE_ERROR            0xC000007DL

//
// MessageId: MSXSL_E_PARSE_ERROR
//
// MessageText:
//
// URL:    %1
// Line:   %2
// Column: %3
// %4%0
//
#define MSXSL_E_PARSE_ERROR              0xC000007EL

//
// MessageId: MSXSL_E_FROM_STDIN
//
// MessageText:
//
// <from stdin>%0
//
#define MSXSL_E_FROM_STDIN               0xC000007FL

//
// MessageId: MSXSL_E_SYSTEM_ERROR
//
// MessageText:
//
// The system cannot provide error text for error number 0x%1.
//
#define MSXSL_E_SYSTEM_ERROR             0xC0000080L

//
// MessageId: MSXSL_E_OBJECT_NOT_FOUND
//
// MessageText:
//
// The system cannot locate the object specified.
//
#define MSXSL_E_OBJECT_NOT_FOUND         0xC0000081L

//
// MessageId: MSXSL_E_NO_MSXML
//
// MessageText:
//
// Could not locate a recognized version of MSXML on the machine.  Please re-install MSXML version 2.6 or later.
//
#define MSXSL_E_NO_MSXML                 0xC0000082L

//
// MessageId: MSXSL_E_INVALID_PI
//
// MessageText:
//
// The source document does not contain an 'xml-stylesheet' processing instruction of this form: <?xml-stylesheet type='text/xsl' href='stylesheet-url'?>
//
#define MSXSL_E_INVALID_PI               0xC0000083L

//
// MessageId: MSXSL_E_UNKNOWN_VERSION
//
// MessageText:
//
// The '-u' option must have a value of '2.6', '3.0', or '6.0'.
//
#define MSXSL_E_UNKNOWN_VERSION          0xC0000084L

//
// MessageId: MSXSL_E_PI_CONFLICT
//
// MessageText:
//
// The '-pi' option cannot be used when the stylesheet argument is specified.
//
#define MSXSL_E_PI_CONFLICT              0xC0000085L
