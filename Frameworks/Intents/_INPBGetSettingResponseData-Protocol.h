//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBGetSettingResponseData_Protocol_h
#define _INPBGetSettingResponseData_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBGetSettingResponseData-Protocol.h"
#include "_INPBNumericSettingValue.h"
#include "_INPBSettingMetadata.h"

@class NSString;

@protocol _INPBGetSettingResponseData <NSObject>

@property (nonatomic) int binaryValue;
@property (nonatomic) BOOL hasBinaryValue;
@property (nonatomic) int boundedValue;
@property (nonatomic) BOOL hasBoundedValue;
@property (copy, nonatomic) NSString *labeledValue;
@property (readonly, nonatomic) BOOL hasLabeledValue;
@property (retain, nonatomic) _INPBNumericSettingValue *numericValue;
@property (readonly, nonatomic) BOOL hasNumericValue;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;

/* instance methods */
- (id)binaryValueAsString:(int)string;
- (int)StringAsBinaryValue:(id)value;
- (id)boundedValueAsString:(int)string;
- (int)StringAsBoundedValue:(id)value;
@end

#endif /* _INPBGetSettingResponseData_Protocol_h */
