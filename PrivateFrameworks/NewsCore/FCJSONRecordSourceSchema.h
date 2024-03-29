//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCJSONRecordSourceSchema_h
#define FCJSONRecordSourceSchema_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FCJSONRecordSourceSchema : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordIDPrefix;
@property (readonly, copy, nonatomic) NSArray *keys;
@property (readonly, copy, nonatomic) NSArray *localizableKeys;
@property (readonly, copy, nonatomic) NSArray *alwaysLocalizedKeys;
@property (readonly, copy, nonatomic) NSArray *allKeys;

/* instance methods */
- (id)initWithRecordType:(id)type recordIDPrefix:(id)idprefix keys:(id)keys localizableKeys:(id)keys alwaysLocalizedKeys:(id)keys;
- (id)initWithRecordType:(id)type recordIDPrefix:(id)idprefix keys:(id)keys localizableKeys:(id)keys;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCJSONRecordSourceSchema_h */
