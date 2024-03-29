//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDevice_h
#define CDPDevice_h
@import Foundation;

#include "CDPDeviceProtocol-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSDictionary, NSNumber, NSString, OTEscrowRecord;

@interface CDPDevice : NSObject<NSCopying, NSSecureCoding, CDPDeviceProtocol>

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *modelClass;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *machineID;
@property (copy, nonatomic) NSDate *recordDate;
@property (nonatomic) BOOL hasRandomSecret;
@property (nonatomic) BOOL hasNumericSecret;
@property (copy, nonatomic) NSNumber *numericSecretLength;
@property (nonatomic) BOOL isUsingMultipleiCSC;
@property (nonatomic) unsigned long long remainingAttempts;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL isCurrentDevice;
@property (nonatomic) unsigned long long recoveryStatus;
@property (retain, nonatomic) NSNumber *coolOffPeriod;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSDictionary *recordInfo;
@property (copy, nonatomic) OTEscrowRecord *record;
@property (copy, nonatomic) NSData *simplePublicKey;
@property (readonly, nonatomic) unsigned long long localSecretType;
@property (copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CDPDevice_h */
