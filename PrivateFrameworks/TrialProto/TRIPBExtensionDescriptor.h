//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBExtensionDescriptor_h
#define TRIPBExtensionDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIPBEnumDescriptor.h"

@class NSString;

@interface TRIPBExtensionDescriptor : NSObject<NSCopying> {
  /* instance variables */
  struct TRIPBExtensionDescription { union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } x0; char * x1; char * x2; char * x3; undefined * x4; int x5; unsigned char x6; unsigned char x7; } * description_;
  union { BOOL valueBool; int valueInt32; long long valueInt64; unsigned int valueUInt32; unsigned long long valueUInt64; float valueFloat; double valueDouble; NSData *valueData; NSString *valueString; TRIPBMessage *valueMessage; int valueEnum; } defaultValue_;
  Class containingMessageClass_;
}

@property (readonly, nonatomic) int wireType;
@property (readonly, nonatomic) int alternateWireType;
@property (readonly, nonatomic) unsigned int fieldNumber;
@property (readonly, nonatomic) Class containingMessageClass;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) BOOL repeated;
@property (readonly, nonatomic) BOOL packable;
@property (readonly, nonatomic) Class msgClass;
@property (readonly, nonatomic) NSString *singletonName;
@property (readonly, nonatomic) TRIPBEnumDescriptor *enumDescriptor;
@property (readonly, nonatomic) id defaultValue;

/* instance methods */
- (id)initWithExtensionDescription:(struct TRIPBExtensionDescription { union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } x0; char * x1; char * x2; char * x3; undefined * x4; int x5; unsigned char x6; unsigned char x7; } *)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (const char *)singletonNameC;
- (BOOL)isRepeated;
- (BOOL)isPackable;
- (long long)compareByFieldNumber:(id)number;
@end

#endif /* TRIPBExtensionDescriptor_h */
