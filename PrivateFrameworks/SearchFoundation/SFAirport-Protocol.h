//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFAirport_Protocol_h
#define SFAirport_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFAirport-Protocol.h"
#include "SFLatLng.h"

@class NSData, NSDictionary, NSString, NSTimeZone;

@protocol SFAirport <NSObject>

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSTimeZone *timezone;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFAirport_Protocol_h */
