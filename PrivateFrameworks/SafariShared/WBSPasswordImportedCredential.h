//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPasswordImportedCredential_h
#define WBSPasswordImportedCredential_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *otpAuthURL;
@property (readonly, copy, nonatomic) NSString *notesEntry;
@property (readonly, copy, nonatomic) NSString *title;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUser:(id)user password:(id)password url:(id)url;
- (id)initWithUser:(id)user password:(id)password url:(id)url sidecarData:(id)data;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)urlCredentialWithPersistence:(unsigned long long)persistence;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)persistence;
- (id)initWithCoder:(id)coder;
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* WBSPasswordImportedCredential_h */
