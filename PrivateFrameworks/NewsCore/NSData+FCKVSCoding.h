//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSData_FCKVSCoding_h
#define NSData_FCKVSCoding_h
@import Foundation;

@interface NSData (FCKVSCoding) <FCKeyValueStoreCoding>
/* class methods */
+ (id)fc_randomDataWithLength:(unsigned long long)length;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)pair;

/* instance methods */
- (id)fc_zlibInflate;
- (id)fc_zlibDeflate;
- (id)fc_gzipInflate;
- (id)fc_gzipDeflate;
- (BOOL)fc_isGzipped;
- (id)fc_encryptAESSIVWithKey:(id)key additionalData:(id)data;
- (id)fc_decryptAESSIVWithKey:(id)key additionalData:(id)data;
- (id)fc_sha256;
- (id)fc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)options;
- (long long)fc_bigEndianCompareAsUnsignedInteger:(id)integer;
- (id)fc_anefEncryptWithKey:(id)key;
- (id)fc_anefDecryptWithKey:(id)key;
- (BOOL)fc_anefKeyIsValid:(id)valid;
- (void)writeToKeyValuePair:(id)pair;
@end

#endif /* NSData_FCKVSCoding_h */
