//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFContactButtonItem_Protocol_h
#define SFContactButtonItem_Protocol_h
@import Foundation;

#include "SFButtonItem.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFContactButtonItem-Protocol.h"
#include "SFPerson.h"

@class NSData, NSDictionary, NSString;

@protocol SFContactButtonItem <SFButtonItem>

@property (copy, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) SFPerson *person;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFContactButtonItem_Protocol_h */
