//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplicationMessageNodeGroupBranch_h
#define PKApplicationMessageNodeGroupBranch_h
@import Foundation;

#include "PKApplicationMessageNode.h"
#include "PKApplicationMessageGroupDescriptor.h"

@class NSArray, NSMutableArray;

@interface PKApplicationMessageNodeGroupBranch : PKApplicationMessageNode

@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group;
@property (readonly, @dynamic, nonatomic) NSArray *children;

/* instance methods */
@end

#endif /* PKApplicationMessageNodeGroupBranch_h */
