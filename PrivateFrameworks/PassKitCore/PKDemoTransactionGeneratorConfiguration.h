//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDemoTransactionGeneratorConfiguration_h
#define PKDemoTransactionGeneratorConfiguration_h
@import Foundation;

@class NSString;

@interface PKDemoTransactionGeneratorConfiguration : NSObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long demoMerchant;
@property (nonatomic) long long demoPerson;
@property (nonatomic) long long transactionCount;
@property (nonatomic) unsigned long long redemptionType;

/* instance methods */
- (id)init;
@end

#endif /* PKDemoTransactionGeneratorConfiguration_h */
