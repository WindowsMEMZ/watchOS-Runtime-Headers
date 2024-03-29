//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef NSData_Encryption_h
#define NSData_Encryption_h
@import Foundation;

@interface NSData (Encryption)
/* instance methods */
- (id)cdp_unarchivedRoot;
- (id)AESGCM256EncryptedDataWithSymmetricKey:(id)key;
- (id)AESGCM256DecryptedDataWithSymmetricKey:(id)key;
- (id)_randomDataGeneratorWithNumberOfBytes:(unsigned long long)bytes;
@end

#endif /* NSData_Encryption_h */
