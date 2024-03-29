//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDMutableSenderConfiguration_h
#define DNDMutableSenderConfiguration_h
@import Foundation;

#include "DNDSenderConfiguration.h"
#include "DNDBypassSettings.h"

@class NSMutableSet;

@interface DNDMutableSenderConfiguration : DNDSenderConfiguration

@property (copy, @dynamic, nonatomic) NSMutableSet *allowedContactTypes;
@property (copy, @dynamic, nonatomic) NSMutableSet *deniedContactTypes;
@property (copy, @dynamic, nonatomic) NSMutableSet *allowedContactGroups;
@property (copy, @dynamic, nonatomic) NSMutableSet *deniedContactGroups;
@property (copy, @dynamic, nonatomic) NSMutableSet *allowedContacts;
@property (copy, @dynamic, nonatomic) NSMutableSet *deniedContacts;
@property (copy, @dynamic, nonatomic) DNDBypassSettings *phoneCallBypassSettings;

/* instance methods */
- (void)removeAllowedContactMatchingContact:(id)contact;
- (void)removeDeniedContactMatchingContact:(id)contact;
@end

#endif /* DNDMutableSenderConfiguration_h */
