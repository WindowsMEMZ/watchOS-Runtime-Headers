//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMAccountGoogleDeclaration_Status_h
#define CEMAccountGoogleDeclaration_Status_h
@import Foundation;

#include "CEMPayloadBase.h"

@interface CEMAccountGoogleDeclaration_Status : CEMPayloadBase
/* class methods */
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)build;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayload;
@end

#endif /* CEMAccountGoogleDeclaration_Status_h */
