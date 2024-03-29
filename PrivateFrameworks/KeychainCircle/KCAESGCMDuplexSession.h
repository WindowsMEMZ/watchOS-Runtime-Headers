//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef KCAESGCMDuplexSession_h
#define KCAESGCMDuplexSession_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface KCAESGCMDuplexSession : NSObject<NSSecureCoding>

@property BOOL asSender;
@property unsigned long long context;
@property (retain) NSData *secret;
@property struct { unsigned char x0[16] } * send;
@property struct { unsigned char x0[16] } * receive;
@property (retain) NSString *pairingUUID;
@property (retain) NSString *altDSID;
@property unsigned long long piggybackingVersion;
@property unsigned long long epoch;

/* class methods */
+ (id)sessionAsSender:(id)sender context:(unsigned long long)context;
+ (id)sessionAsReceiver:(id)receiver context:(unsigned long long)context;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initAsSender:(id)sender context:(unsigned long long)context;
- (id)initAsReceiver:(id)receiver context:(unsigned long long)context;
- (id)initWithSecret:(id)secret context:(unsigned long long)context as:(BOOL)as;
- (id)initWithSecret:(id)secret context:(unsigned long long)context as:(BOOL)as altDSID:(id)dsid pairingUUID:(id)uuid piggybackingVersion:(unsigned long long)version epoch:(unsigned long long)epoch;
- (unsigned long long)encryptCapsuleSize:(id)size IV:(id)iv;
- (BOOL)GCM:(const struct ccmode_gcm { unsigned long long x0; int x1; unsigned long long x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; void * x9; } *)gcm context:(struct { unsigned char x0[16] } *)context iv:(id)iv size:(unsigned long long)size data:(const char *)data processed:(char *)processed tag:(char *)tag error:(id *)error;
- (id)encrypt:(id)encrypt error:(id *)error;
- (id)decryptAndVerify:(id)verify error:(id *)error;
- (void)dealloc;
@end

#endif /* KCAESGCMDuplexSession_h */
