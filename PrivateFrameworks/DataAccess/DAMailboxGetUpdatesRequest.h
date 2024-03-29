//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2653.2.1.0.0
//
#ifndef DAMailboxGetUpdatesRequest_h
#define DAMailboxGetUpdatesRequest_h
@import Foundation;

#include "DAMailboxRequest.h"

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

/* instance methods */
- (id)initRequestForBodyFormat:(int)format withBodySizeLimit:(int)limit;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* DAMailboxGetUpdatesRequest_h */
