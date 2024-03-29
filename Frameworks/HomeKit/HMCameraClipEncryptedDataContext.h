//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCameraClipEncryptedDataContext_h
#define HMCameraClipEncryptedDataContext_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject<NSCopying>

@property (readonly, copy) NSData *initializationVector;
@property (readonly, copy) NSData *ciphertext;
@property (readonly, copy) NSData *tag;
@property (readonly, copy) NSData *dataRepresentation;

/* instance methods */
- (id)initWithDataRepresentation:(id)representation;
- (id)initWithInitializationVector:(id)vector ciphertext:(id)ciphertext tag:(id)tag;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMCameraClipEncryptedDataContext_h */
