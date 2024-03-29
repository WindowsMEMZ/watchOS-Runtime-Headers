//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBFileProperty_Protocol_h
#define _INPBFileProperty_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBFileProperty-Protocol.h"
#include "_INPBFilePropertyValue.h"

@class NSString;

@protocol _INPBFileProperty <NSObject>

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int qualifier;
@property (nonatomic) BOOL hasQualifier;
@property (retain, nonatomic) _INPBFilePropertyValue *value;
@property (readonly, nonatomic) BOOL hasValue;

/* instance methods */
- (id)nameAsString:(int)string;
- (int)StringAsName:(id)name;
- (id)qualifierAsString:(int)string;
- (int)StringAsQualifier:(id)qualifier;
@end

#endif /* _INPBFileProperty_Protocol_h */
