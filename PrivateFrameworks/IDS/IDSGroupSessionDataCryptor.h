//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSGroupSessionDataCryptor_h
#define IDSGroupSessionDataCryptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSMapTable, NSMutableDictionary, NSString, NSUUID;

@interface IDSGroupSessionDataCryptor : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSString *_topic;
  NSUUID *_encryptingKeyID;
  NSData *_encryptingKey;
  NSData *_encryptingKeySalt;
  struct _CCCryptor * _encryptingCryptor;
  NSMutableDictionary *_decryptionKeysByKeyID;
  NSMapTable *_decryptionCryptorsByKeyID;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTopic:(id)topic;
- (id)initWithTopic:(id)topic keyManager:(id)manager;
- (void)dealloc;
- (id)encryptData:(id)data sequenceNumber:(unsigned long long)number error:(id *)error;
- (id)getEncryptionKeyID;
- (id)decryptData:(id)data keyID:(id)id sequenceNumber:(unsigned long long)number error:(id *)error;
- (id)getDecryptionKeyIDSet;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToCryptor:(id)cryptor;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IDSGroupSessionDataCryptor_h */
