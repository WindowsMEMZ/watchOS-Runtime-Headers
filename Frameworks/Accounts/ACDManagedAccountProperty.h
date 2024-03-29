//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDManagedAccountProperty_h
#define ACDManagedAccountProperty_h
@import Foundation;

#include "NSManagedObject.h"
#include "ACDManagedAccount.h"

@class NSString;

@interface ACDManagedAccountProperty : NSManagedObject

@property (retain, @dynamic, nonatomic) id value;
@property (retain, @dynamic, nonatomic) NSString *key;
@property (retain, @dynamic, nonatomic) ACDManagedAccount *owner;

@end

#endif /* ACDManagedAccountProperty_h */
