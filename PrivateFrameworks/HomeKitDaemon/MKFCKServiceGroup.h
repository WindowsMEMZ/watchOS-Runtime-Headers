//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFCKServiceGroup_h
#define MKFCKServiceGroup_h
@import Foundation;

#include "MKFCKHomeObject.h"
#include "MKFCKHome.h"

@class NSArray, NSDate, NSDictionary, NSString, NSUUID;

@interface MKFCKServiceGroup : MKFCKHomeObject

@property (retain, @dynamic, nonatomic) NSDictionary *applicationData;
@property (copy, @dynamic, nonatomic) NSUUID *flags;
@property (copy, @dynamic, nonatomic) NSUUID *homeModelID;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (retain, @dynamic, nonatomic) NSArray *services;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (copy, @dynamic, nonatomic) NSString *writerVersion;
@property (retain, @dynamic, nonatomic) MKFCKHome *home;

/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (BOOL)exportFromLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
- (BOOL)importIntoLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
@end

#endif /* MKFCKServiceGroup_h */
