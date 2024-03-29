//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SubscriptionAssertion_h
#define SubscriptionAssertion_h
@import Foundation;

#include "NSManagedObject.h"

@class NSString;

@interface SubscriptionAssertion : NSManagedObject

@property (copy, @dynamic, nonatomic) NSString *applicationIdentifier;
@property (copy, @dynamic, nonatomic) NSString *channelIdentifier;
@property (copy, @dynamic, nonatomic) NSString *statusTypeIdentifier;

/* class methods */
+ (id)fetchRequest;
+ (id)predicateForApplicationIdentifier:(id)identifier;
+ (id)predicateForChannelIdentifier:(id)identifier;
+ (id)predicateForStatusTypeIdentifier:(id)identifier;
+ (id)applicationIdentifierKeyPath;
+ (id)channelIdentifierKeyPath;
+ (id)statusTypeIdentifierKeyPath;
@end

#endif /* SubscriptionAssertion_h */
