//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 327.60.2.0.0
//
#ifndef NGMPrekeySignatureFormatter_h
#define NGMPrekeySignatureFormatter_h
@import Foundation;

#include "SignatureFormatter-Protocol.h"

@class NSData, NSString;

@interface NGMPrekeySignatureFormatter : NSObject<SignatureFormatter>

@property (readonly, nonatomic) NSData *prekeyPublic;
@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initToSignKey:(id)key;
- (id)initWithPublicPrekey:(id)prekey;
- (id)signedData;
@end

#endif /* NGMPrekeySignatureFormatter_h */
