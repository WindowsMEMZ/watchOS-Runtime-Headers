//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAPhoneCallConfirmationSnippet_h
#define SAPhoneCallConfirmationSnippet_h
@import Foundation;

#include "SAUISnippet.h"

@class NSArray, NSString;

@interface SAPhoneCallConfirmationSnippet : SAUISnippet

@property (copy, nonatomic) NSString *confirmationDisplayText;
@property (copy, nonatomic) NSArray *persons;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAPhoneCallConfirmationSnippet_h */
