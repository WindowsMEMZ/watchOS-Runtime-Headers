//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleAccountSettings_h
#define HMDAppleAccountSettings_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDAppleAccountSettings : HMFObject<HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL educationMode;
@property (readonly) BOOL homeEnabled;
@property (readonly) BOOL keychainSyncEnabled;
@property (readonly) BOOL managed;
@property (readonly) BOOL ephemeral;

/* class methods */
+ (id)logCategory;
+ (id)sharedSettings;
+ (BOOL)supportsCloudSettings;

/* instance methods */
- (BOOL)isEducationMode;
- (id)attributeDescriptions;
- (BOOL)isHomeEnabled;
- (BOOL)isKeychainSyncEnabled;
- (BOOL)isManaged;
- (BOOL)isEphemeral;
- (void)synchronize;
- (void)updateHomeEnabled:(BOOL)enabled completionHandler:(id /* block */)handler;
@end

#endif /* HMDAppleAccountSettings_h */
