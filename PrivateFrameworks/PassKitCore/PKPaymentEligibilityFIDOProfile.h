//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentEligibilityFIDOProfile_h
#define PKPaymentEligibilityFIDOProfile_h
@import Foundation;

@class NSData, NSString;

@interface PKPaymentEligibilityFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountHash;
@property (readonly, copy, nonatomic) NSData *keyHash;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PKPaymentEligibilityFIDOProfile_h */
