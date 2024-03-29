//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPSignedInUserProvider_Protocol_h
#define RPSignedInUserProvider_Protocol_h
@import Foundation;

#include "RPSignedInUserProvider-Protocol.h"

@class NSString;

@protocol RPSignedInUserProvider <NSObject>
/* instance methods */
- (BOOL)supportsMultipleUsers;
- (unsigned int)signedInUserID;
@end

#endif /* RPSignedInUserProvider_Protocol_h */
