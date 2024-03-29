//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef NSNumber_RBSProcessIdentifier_h
#define NSNumber_RBSProcessIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RBSProcessIdentifier-Protocol.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSString;

@interface NSNumber (RBSProcessIdentifier) <RBSProcessIdentifier>
/* instance methods */
- (int)rbs_pid;
- (BOOL)matchesProcess:(id)process;
- (id)processPredicate;
@end

#endif /* NSNumber_RBSProcessIdentifier_h */
