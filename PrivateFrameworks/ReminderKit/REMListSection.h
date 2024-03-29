//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMListSection_h
#define REMListSection_h
@import Foundation;

#include "REMBaseSection.h"
#include "REMList.h"
#include "REMObjectID.h"

@class NSString;

@interface REMListSection : REMBaseSection

@property (readonly, nonatomic) REMList *list;
@property (readonly, @dynamic, nonatomic) NSString *canonicalName;
@property (retain, @dynamic, nonatomic) REMObjectID *listID;

/* class methods */
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;

/* instance methods */
- (id)initWithStore:(id)store list:(id)list storage:(id)storage;
@end

#endif /* REMListSection_h */
