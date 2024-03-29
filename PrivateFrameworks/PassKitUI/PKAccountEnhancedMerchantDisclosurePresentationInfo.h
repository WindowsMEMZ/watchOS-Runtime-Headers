//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountEnhancedMerchantDisclosurePresentationInfo_h
#define PKAccountEnhancedMerchantDisclosurePresentationInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKIdentifiable-Protocol.h"

@class NSString, PKAccountEnhancedMerchant;

@interface PKAccountEnhancedMerchantDisclosurePresentationInfo : NSObject<PKIdentifiable>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *disclosures;
@property (retain, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountEnhancedMerchant:(id)merchant;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAccountEnhancedMerchantDisclosure:(id)disclosure;
@end

#endif /* PKAccountEnhancedMerchantDisclosurePresentationInfo_h */
