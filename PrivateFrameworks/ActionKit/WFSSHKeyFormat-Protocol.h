//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSSHKeyFormat_Protocol_h
#define WFSSHKeyFormat_Protocol_h
@import Foundation;

@protocol WFSSHKeyFormat <NSObject>
/* class methods */
+ (id)localizedDisplayName;
+ (id)possibleKeySizes;
+ (id)defaultKeySize;
+ (id)privateKeyType;
+ (id)publicKeyType;
+ (id)privateKeySpecifier;
+ (id)publicKeySpecifier;
+ (id)keyPairFromPrivateKey:(id)key comment:(id)comment error:(id *)error;
+ (id)generateKeyPairWithKeySize:(unsigned long long)size comment:(id)comment;
@end

#endif /* WFSSHKeyFormat_Protocol_h */
