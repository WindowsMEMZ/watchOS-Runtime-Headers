//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardArbiterDebugEntryString_h
#define _UIKeyboardArbiterDebugEntryString_h
@import Foundation;

#include "_UIKeyboardArbiterDebugEntry.h"

@class NSString;

@interface _UIKeyboardArbiterDebugEntryString : _UIKeyboardArbiterDebugEntry {
  /* instance variables */
  NSString *_message;
  NSString *_type;
}

/* class methods */
+ (id)entryWithMessage:(id)message type:(id)type;

/* instance methods */
- (void)enumerateContents:(id /* block */)contents;
- (int)importance;
@end

#endif /* _UIKeyboardArbiterDebugEntryString_h */
