//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSLocalPairingPairedDeviceRecord_h
#define IDSLocalPairingPairedDeviceRecord_h
@import Foundation;

#include "IDSLocalPairingRecord.h"
#include "NSSecureCoding-Protocol.h"

@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord<NSSecureCoding>

@property (readonly, nonatomic) NSUUID *cbuuid;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCBUUID:(id)cbuuid publicIdentityDataClassA:(id)a classC:(id)c classD:(id)d;
- (id)description;
- (id)_publicIdenityForDataProtectionClass:(unsigned int)class error:(id *)error;
- (id)publicIdentityClassA:(id *)a;
- (id)publicIdentityClassC:(id *)c;
- (id)publicIdentityClassD:(id *)d;
@end

#endif /* IDSLocalPairingPairedDeviceRecord_h */
