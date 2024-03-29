//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.40.6.0.0
//
#ifndef MSCMSIdentifier_h
#define MSCMSIdentifier_h
@import Foundation;

@class NSData;

@interface MSCMSIdentifier : NSObject

@property int type;
@property struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x0; void * x1; } x0; struct heim_integer { unsigned long long x0; void * x1; int x2; } x1; } * issuerAndSerialNumber;
@property struct heim_base_data { unsigned long long x0; void * x1; } * subjectKeyId;
@property (retain) NSData *skidData;
@property (retain) NSData *serialNumberData;
@property (retain) NSData *issuerNameData;

/* class methods */
+ (id)decodeIdentifier:(struct heim_base_data { unsigned long long x0; void * x1; } *)identifier error:(id *)error;

/* instance methods */
- (id)initWithSkid:(id)skid;
- (id)initWithIssuerName:(id)name serialNumber:(id)number;
- (id)initWithIssuerName:(id)name serialNumber:(id)number negativeNumber:(BOOL)number;
- (id)encodeMessageSecurityObject:(id *)object;
@end

#endif /* MSCMSIdentifier_h */
