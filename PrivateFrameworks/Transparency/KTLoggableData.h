//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1033.64.3.0.0
//
#ifndef KTLoggableData_h
#define KTLoggableData_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSError, NSNumber, NSString;

@interface KTLoggableData : NSObject<NSSecureCoding>

@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property (retain) NSData *clientData;
@property BOOL notInSyncedData;
@property unsigned long long result;
@property (retain) NSError *failure;
@property (retain) NSDate *markExpiryDate;
@property (copy) NSData *deviceID;
@property (copy) NSData *signature;
@property BOOL successfulSync;
@property BOOL ktCapable;
@property (copy) NSString *build;
@property (copy) NSString *product;
@property (copy) NSNumber *version;
@property BOOL marked;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (void)loggableDataForDeviceID:(id)id application:(id)application completionBlock:(id /* block */)block;
+ (void)loggableDataForDeviceID:(id)id completionBlock:(id /* block */)block;
+ (BOOL)isAccountKTCapable:(id)ktcapable;
+ (void)combineLoggableDatasForUI:(id)ui byAdding:(id)adding;

/* instance methods */
- (id)initWithClientData:(id)data;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)debugDescription;
- (id)diagnosticsJsonDictionary;
- (id)description;
- (id)shortDescription;
@end

#endif /* KTLoggableData_h */
