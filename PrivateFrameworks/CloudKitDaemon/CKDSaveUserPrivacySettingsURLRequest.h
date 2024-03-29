//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDSaveUserPrivacySettingsURLRequest_h
#define CKDSaveUserPrivacySettingsURLRequest_h
@import Foundation;

#include "CKDURLRequest.h"

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;

/* instance methods */
- (id)initWithOperation:(id)operation;
- (void)fillOutEquivalencyPropertiesBuilder:(id)builder;
- (void)setDiscoverable:(BOOL)discoverable;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)object;
@end

#endif /* CKDSaveUserPrivacySettingsURLRequest_h */
