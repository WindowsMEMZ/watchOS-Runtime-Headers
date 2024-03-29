//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchRegisteredBundleIDsURLRequest_h
#define CKDFetchRegisteredBundleIDsURLRequest_h
@import Foundation;

#include "CKDURLRequest.h"

@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

/* instance methods */
- (void)fillOutEquivalencyPropertiesBuilder:(id)builder;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)sourceApplicationSecondaryIdentifier;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)object;
- (void)requestDidParseNodeFailure:(id)failure;
@end

#endif /* CKDFetchRegisteredBundleIDsURLRequest_h */
