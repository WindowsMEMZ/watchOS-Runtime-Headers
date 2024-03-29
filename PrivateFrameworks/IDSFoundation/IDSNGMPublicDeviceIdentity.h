//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSNGMPublicDeviceIdentity_h
#define IDSNGMPublicDeviceIdentity_h
@import Foundation;

@interface IDSNGMPublicDeviceIdentity : NSObject
/* class methods */
+ (id)identityWithDataRepresentation:(id)representation error:(id *)error;
+ (id)identityWithIdentityData:(id)data prekeyData:(id)data error:(id *)error;

/* instance methods */
- (id)dataRepresentationWithError:(id *)error;
- (id)identityData;
- (id)prekeyData;
- (id)sealMessage:(id)message signedByFullIdentity:(id)identity error:(id *)error;
- (id)sealMessage:(id)message withEncryptedAttributes:(id)attributes signedByFullIdentity:(id)identity error:(id *)error;
- (id)sealMessage:(id)message forceSizeOptimizations:(BOOL)optimizations resetState:(BOOL)state encryptedAttributes:(id)attributes signedByFullIdentity:(id)identity errors:(id *)errors;
- (BOOL)isValidSignature:(id)signature forMessage:(id)message forType:(long long)type error:(id *)error;
@end

#endif /* IDSNGMPublicDeviceIdentity_h */
