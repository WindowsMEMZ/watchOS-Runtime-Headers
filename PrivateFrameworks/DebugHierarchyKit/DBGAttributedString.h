//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 66.0.0.0.0
//
#ifndef DBGAttributedString_h
#define DBGAttributedString_h
@import Foundation;

#include "DBGValue-Protocol.h"
#include "DBGValueJSONSerialization-Protocol.h"

@class NSAttributedString, NSString;

@interface DBGAttributedString : NSObject<DBGValueJSONSerialization, DBGValue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)valueWithEncodedValue:(id)value format:(id)format error:(id *)error;
+ (id)withAttributedString:(id)string;

/* instance methods */
- (id)JSONCompatibleRepresentation;
- (id)initWithAttributedString:(id)string;
- (id)objectValue;
@end

#endif /* DBGAttributedString_h */
