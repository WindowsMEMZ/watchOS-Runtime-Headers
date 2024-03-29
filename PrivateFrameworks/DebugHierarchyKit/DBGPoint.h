//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 66.0.0.0.0
//
#ifndef DBGPoint_h
#define DBGPoint_h
@import Foundation;

#include "DBGValue-Protocol.h"
#include "DBGValueJSONSerialization-Protocol.h"

@class NSString;

@interface DBGPoint : NSObject<DBGValueJSONSerialization, DBGValue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property struct CGPoint { double x0; double x1; } point;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)valueWithEncodedValue:(id)value format:(id)format error:(id *)error;
+ (id)withPoint:(struct CGPoint { double x0; double x1; })point;

/* instance methods */
- (id)JSONCompatibleRepresentation;
- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })cgpoint;
- (id)objectValue;
@end

#endif /* DBGPoint_h */
