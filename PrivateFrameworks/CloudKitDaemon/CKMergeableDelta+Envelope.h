//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKMergeableDelta_Envelope_h
#define CKMergeableDelta_Envelope_h
@import Foundation;

@interface CKMergeableDelta (Envelope) <CKEncryptable>
/* instance methods */
- (BOOL)encryptWithContext:(id)context error:(id *)error;
- (BOOL)decryptWithContext:(id)context error:(id *)error;
- (BOOL)unwrapAssetKeyWithShareProtection:(struct _OpaquePCSShareProtection *)protection pcsManager:(id)manager error:(id *)error;
- (BOOL)needsEncryption;
- (BOOL)needsDecryption;
@end

#endif /* CKMergeableDelta_Envelope_h */
