//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef AttestationInfo_h
#define AttestationInfo_h
@import Foundation;

@class NSData;

@interface AttestationInfo : NSObject

@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *elements;
@property (copy, nonatomic) NSData *elementsSignature;
@property (copy, nonatomic) NSData *dac;
@property (copy, nonatomic) NSData *pai;
@property (copy, nonatomic) NSData *certificationDeclaration;
@property (copy, nonatomic) NSData *firmwareInfo;

/* instance methods */
- (id)initWithChallenge:(id)challenge nonce:(id)nonce elements:(id)elements elementsSignature:(id)signature dac:(id)dac pai:(id)pai certificationDeclaration:(id)declaration firmwareInfo:(id)info;
@end

#endif /* AttestationInfo_h */
