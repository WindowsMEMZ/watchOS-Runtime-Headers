//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKKeyValueMO_h
#define _DKKeyValueMO_h
@import Foundation;

#include "NSManagedObject.h"

@class NSObject, NSString;

@interface _DKKeyValueMO : NSManagedObject

@property (copy, @dynamic, nonatomic) NSString *domain;
@property (copy, @dynamic, nonatomic) NSString *key;
@property (retain, @dynamic, nonatomic) NSObject *value;

/* class methods */
+ (id)fetchRequest;
@end

#endif /* _DKKeyValueMO_h */
