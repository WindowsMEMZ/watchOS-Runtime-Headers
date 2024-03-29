//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMCoreDataNamedGroup_h
#define HMMCoreDataNamedGroup_h
@import Foundation;

#include "NSManagedObject.h"
#include "HMMGroupSpecifier-Protocol.h"

@class NSSet, NSString;

@interface HMMCoreDataNamedGroup : NSManagedObject

@property (readonly, nonatomic) NSObject<HMMGroupSpecifier> *groupSpecifier;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (retain, @dynamic, nonatomic) NSSet *counters;
@property (retain, @dynamic, nonatomic) NSSet *valueStatistics;

/* class methods */
+ (id)fetchRequest;
@end

#endif /* HMMCoreDataNamedGroup_h */
