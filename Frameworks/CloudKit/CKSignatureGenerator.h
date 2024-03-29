//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSignatureGenerator_h
#define CKSignatureGenerator_h
@import Foundation;

@interface CKSignatureGenerator : NSObject

@property (nonatomic) void * generator;
@property (nonatomic) BOOL valid;

/* class methods */
+ (id)signatureWithFileDescriptor:(int)descriptor error:(id *)error;
+ (BOOL)isValidSignature:(id)signature;
+ (BOOL)isValidV2Signature:(id)signature;
+ (id)signatureForStreamingAsset;

/* instance methods */
- (id)init;
- (id)initWithBoundaryKey:(id)key;
- (void)dealloc;
- (char *)_newSignatureByFinishingGenerator;
- (void)updateWithBytes:(const void *)bytes length:(unsigned long long)length;
- (void)updateWithData:(id)data;
- (id)dataByFinishingSignature;
- (BOOL)isValid;
@end

#endif /* CKSignatureGenerator_h */
