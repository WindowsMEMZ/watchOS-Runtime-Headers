//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKACAccountChange_h
#define PKACAccountChange_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface PKACAccountChange : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long operation;
@property (readonly, nonatomic) BOOL enablementOfRelevantDataclassesChanged;
@property (readonly, nonatomic) BOOL enablementOfWalletDataclassChanged;
@property (readonly, nonatomic) BOOL enablementOfUbiquityDataclassChanged;
@property (readonly, nonatomic) BOOL accountManagedStateChanged;
@property (readonly, nonatomic) BOOL accountOrderChanged;
@property (readonly, nonatomic) BOOL accountStorefrontChanged;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithChangeType:(int)type newAccount:(id)account oldAccount:(id)account;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (long long)_operationTypeForChangeType:(int)type newAccount:(id)account oldAccount:(id)account;
@end

#endif /* PKACAccountChange_h */
