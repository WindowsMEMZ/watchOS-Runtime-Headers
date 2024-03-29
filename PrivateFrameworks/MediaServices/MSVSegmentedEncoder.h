//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVSegmentedEncoder_h
#define MSVSegmentedEncoder_h
@import Foundation;

#include "NSCoder.h"
#include "MSVSegmentedCoding-Protocol.h"
#include "MSVSegmentedCodingPackage.h"

@class NSDictionary, NSMutableDictionary;

@interface MSVSegmentedEncoder : NSCoder

@property (nonatomic) BOOL hasFinished;
@property (retain, nonatomic) MSVSegmentedCodingPackage *package;
@property (retain, nonatomic) NSObject<MSVSegmentedCoding> *rootObject;
@property (retain, nonatomic) NSMutableDictionary *subcoders;
@property (copy, nonatomic) NSDictionary *userInfo;

/* instance methods */
- (id)initWithCodingPackage:(id)package;
- (id)initWithCodingPackage:(id)package userInfo:(id)info;
- (void)finishEncoding;
- (void)encodeRootObject:(id)object;
- (void)encodeObject:(id)object forKey:(id)key;
- (void)encodeBool:(BOOL)bool forKey:(id)key;
- (void)encodeInt:(int)int forKey:(id)key;
- (void)encodeInt32:(int)int32 forKey:(id)key;
- (void)encodeInt64:(long long)int64 forKey:(id)key;
- (void)encodeFloat:(float)float forKey:(id)key;
- (void)encodeDouble:(double)double forKey:(id)key;
- (void)encodeBytes:(const char *)bytes length:(unsigned long long)length forKey:(id)key;
- (id)msv_userInfo;
- (void)msv_setUserInfo:(id)info;
- (id)_coderForKey:(id)key;
@end

#endif /* MSVSegmentedEncoder_h */
