//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBGetFileInformationIntentResponse_Protocol_h
#define _INPBGetFileInformationIntentResponse_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBFileProperty.h"
#include "_INPBGetFileInformationIntentResponse-Protocol.h"
#include "_INPBString.h"

@class NSString;

@protocol _INPBGetFileInformationIntentResponse <NSObject>

@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (retain, nonatomic) _INPBFileProperty *property;
@property (readonly, nonatomic) BOOL hasProperty;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;

@end

#endif /* _INPBGetFileInformationIntentResponse_Protocol_h */
