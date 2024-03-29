//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSSHKeyFormatRSA_h
#define WFSSHKeyFormatRSA_h
@import Foundation;

#include "WFSSHKeyFormat-Protocol.h"

@class NSString;

@interface WFSSHKeyFormatRSA : NSObject<WFSSHKeyFormat>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)generateKeyPairWithKeySize:(unsigned long long)size comment:(id)comment;
+ (id)localizedDisplayName;
+ (id)possibleKeySizes;
+ (id)defaultKeySize;
+ (id)privateKeyType;
+ (id)publicKeyType;
+ (id)privateKeySpecifier;
+ (id)publicKeySpecifier;
+ (id)keyPairFromPrivateKey:(id)key comment:(id)comment error:(id *)error;
+ (id)pkcs1FromRSAKey:(struct _CCRSACryptor *)rsakey;
+ (id)sshPublicKeyFromRSAKey:(struct _CCRSACryptor *)rsakey;
@end

#endif /* WFSSHKeyFormatRSA_h */
