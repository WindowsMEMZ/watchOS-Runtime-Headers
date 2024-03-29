//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFWeatherColor_Protocol_h
#define SFWeatherColor_Protocol_h
@import Foundation;

#include "SFColor.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFColor.h"
#include "SFLatLng.h"
#include "SFWeatherColor-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString;

@protocol SFWeatherColor <SFColor>

@property (copy, nonatomic) NSString *condition;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFWeatherColor_Protocol_h */
