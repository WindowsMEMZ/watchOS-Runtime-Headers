//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSUpdateAccountResponse_h
#define SSUpdateAccountResponse_h
@import Foundation;

#include "SSAccount.h"

@interface SSUpdateAccountResponse : NSObject

@property (readonly, nonatomic) unsigned long long credentialSource;
@property (readonly, nonatomic) SSAccount *updatedAccount;

/* instance methods */
- (id)initWithUpdatedAccount:(id)account credentialSource:(unsigned long long)source;
@end

#endif /* SSUpdateAccountResponse_h */
