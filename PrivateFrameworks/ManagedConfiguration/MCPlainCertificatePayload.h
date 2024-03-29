//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCPlainCertificatePayload_h
#define MCPlainCertificatePayload_h
@import Foundation;

#include "MCCertificatePayload.h"

@class NSData, NSString;

@interface MCPlainCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSString *certificateFileName;
@property (readonly, retain, nonatomic) NSData *certificateData;
@property (readonly, nonatomic) int dataEncoding;
@property (readonly, retain, nonatomic) NSString *password;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (BOOL)isSigned;
- (id)installationWarnings;
- (struct __SecCertificate *)copyCertificate;
- (id)verboseDescription;
- (id)persistentResourceID;
- (BOOL)isIdentity;
@end

#endif /* MCPlainCertificatePayload_h */
