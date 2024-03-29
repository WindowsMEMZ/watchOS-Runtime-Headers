//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENXMLSaxParser_h
#define ENXMLSaxParser_h
@import Foundation;

#include "ENXMLSaxParserDelegate-Protocol.h"

@class NSArray, NSURLConnection;

@interface ENXMLSaxParser : NSObject {
  /* instance variables */
  struct _xmlParserCtxt { struct _xmlSAXHandler * x0; void * x1; struct _xmlDoc * x2; int x3; int x4; char * x5; char * x6; int x7; int x8; struct _xmlParserInput * x9; int x10; int x11; struct _xmlParserInput * * x12; struct _xmlNode * x13; int x14; int x15; struct _xmlNode * * x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo * x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void * x0; undefined * x1; undefined * x2; struct _xmlNode * x3; int x4; int x5; struct _xmlNode * * x6; unsigned int x7; struct _xmlDoc * x8; int x9; struct _xmlValidState * x10; int x11; int x12; struct _xmlValidState * x13; struct _xmlAutomata * x14; struct _xmlAutomataState * x15; } x25; int x26; int x27; char * x28; char * x29; int x30; int x31; char * * x32; long long x33; long long x34; int x35; int x36; int x37; char * x38; char * x39; char * x40; int * x41; int x42; int x43; int * x44; int x45; struct _xmlParserInput * x46; int x47; int x48; int x49; int x50; void * x51; int x52; int x53; void * x54; int x55; int x56; struct _xmlDict * x57; char * * x58; int x59; int x60; char * x61; char * x62; char * x63; int x64; int x65; int x66; char * * x67; int * x68; struct _xmlStartTag * x69; struct _xmlHashTable * x70; struct _xmlHashTable * x71; int x72; int x73; int x74; int x75; struct _xmlNode * x76; int x77; struct _xmlAttr * x78; struct _xmlError { int x0; int x1; char * x2; int x3; char * x4; int x5; char * x6; char * x7; char * x8; int x9; int x10; void * x11; void * x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo * x83; int x84; int x85; struct _xmlParserNodeInfo * x86; int x87; unsigned long long x88; } * _parserContext;
  BOOL _parserHalted;
  NSURLConnection *_urlConnection;
  NSArray *_dtds;
}

@property (weak, nonatomic) NSObject<ENXMLSaxParserDelegate> *delegate;
@property (nonatomic) BOOL isHTML;

/* instance methods */
- (id)init;
- (void)dealloc;
- (struct _xmlEntity { void * x0; int x1; char * x2; struct _xmlNode * x3; struct _xmlNode * x4; struct _xmlDtd * x5; struct _xmlNode * x6; struct _xmlNode * x7; struct _xmlDoc * x8; char * x9; char * x10; int x11; int x12; char * x13; char * x14; struct _xmlEntity * x15; char * x16; int x17; int x18; } *)lookupEntity:(const char *)entity;
- (struct _xmlSAXHandler { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; undefined * x12; undefined * x13; undefined * x14; undefined * x15; undefined * x16; undefined * x17; undefined * x18; undefined * x19; undefined * x20; undefined * x21; undefined * x22; undefined * x23; undefined * x24; undefined * x25; undefined * x26; unsigned int x27; void * x28; undefined * x29; undefined * x30; undefined * x31; })saxHandler;
- (void)appendBytes:(char *)bytes length:(int)length;
- (void)appendData:(id)data;
- (void)finalizeParser;
- (BOOL)parseContentsOfFile:(id)file;
- (BOOL)parseData:(id)data;
- (BOOL)parseContents:(id)contents;
- (BOOL)parseContentsOfURLWithRequest:(id)request;
- (BOOL)parseContentsOfURL:(id)url;
- (void)stopParser;
- (void)_stopAndSendError:(id)error;
- (void)connectionDidFinishLoading:(id)loading;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connection:(id)connection didReceiveData:(id)data;
@end

#endif /* ENXMLSaxParser_h */
