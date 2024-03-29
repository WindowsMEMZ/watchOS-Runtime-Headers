//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSBindingForLog_h
#define _LSBindingForLog_h
@import Foundation;

#include "_LSDatabase.h"

@interface _LSBindingForLog : NSObject {
  /* instance variables */
  _LSDatabase *_db;
  struct LSBinding { unsigned int bundle; struct LSBundleData *bundleData; unsigned int claim; struct  *claimData; reason *userInfo; NSString * x0; } _binding;
}

/* instance methods */
- (id)initWithState:(const void *)state binding:(const struct LSBinding { unsigned int x0; struct LSBundleData * x1; unsigned int x2; struct  * x3; id x4; id x5; } *)binding;
- (id)description;
- (id)redactedDescription;
@end

#endif /* _LSBindingForLog_h */
