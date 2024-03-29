//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDModeAssertionInvalidation_Resolution_h
#define DNDModeAssertionInvalidation_Resolution_h
@import Foundation;

@interface DNDModeAssertionInvalidation (Resolution) <DNDSModernAssertionSourceResolution>
/* class methods */
+ (id)predicateForModeAssertionInvalidationsWithAssertionClientIdentifiers:(id)identifiers;

/* instance methods */
- (BOOL)isInternalScheduled;
- (BOOL)isUserInvalidated;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)identifier localDeviceIdentifier:(id)identifier remoteDeviceIdentifier:(id)identifier;
@end

#endif /* DNDModeAssertionInvalidation_Resolution_h */
