//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef VOBundle_h
#define VOBundle_h
@import Foundation;

#include "NSManagedObject.h"
#include "VOSubstitution.h"

@class NSData, NSString;

@interface VOBundle : NSManagedObject

@property (copy, @dynamic, nonatomic) NSString *bundleID;
@property (copy, @dynamic, nonatomic) NSString *ckRecordID;
@property (retain, @dynamic, nonatomic) NSData *ckRecordSystemFields;
@property (retain, @dynamic, nonatomic) VOSubstitution *iOSSubstitution;
@property (retain, @dynamic, nonatomic) VOSubstitution *macOSSubstitution;

/* class methods */
+ (id)fetchRequest;
@end

#endif /* VOBundle_h */
