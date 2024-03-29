//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASZoneSupport_h
#define _PASZoneSupport_h
@import Foundation;

@interface _PASZoneSupport : NSObject
/* class methods */
+ (id)newMutableArrayInZone:(struct _NSZone *)zone;
+ (id)newMutableArrayInZone:(struct _NSZone *)zone capacity:(unsigned long long)capacity;
+ (id)copyArray:(id)array toZone:(struct _NSZone *)zone;
+ (id)mutableCopyArray:(id)array toZone:(struct _NSZone *)zone;
+ (id)newMutableDictionaryInZone:(struct _NSZone *)zone;
+ (id)newMutableDictionaryInZone:(struct _NSZone *)zone capacity:(unsigned long long)capacity;
+ (id)copyDictionary:(id)dictionary toZone:(struct _NSZone *)zone;
+ (id)mutableCopyDictionary:(id)dictionary toZone:(struct _NSZone *)zone;
+ (id)newMutableSetInZone:(struct _NSZone *)zone;
+ (id)newMutableSetInZone:(struct _NSZone *)zone capacity:(unsigned long long)capacity;
+ (id)copySet:(id)set toZone:(struct _NSZone *)zone;
+ (id)mutableCopySet:(id)set toZone:(struct _NSZone *)zone;
+ (id)newMutableStringInZone:(struct _NSZone *)zone;
+ (id)newMutableStringInZone:(struct _NSZone *)zone capacity:(unsigned long long)capacity;
+ (id)copyString:(id)string toZone:(struct _NSZone *)zone;
+ (id)mutableCopyString:(id)string toZone:(struct _NSZone *)zone;
+ (id)newMutableDataInZone:(struct _NSZone *)zone;
+ (id)newMutableDataInZone:(struct _NSZone *)zone capacity:(unsigned long long)capacity;
+ (id)newMutableDataInZone:(struct _NSZone *)zone length:(unsigned long long)length;
+ (id)copyData:(id)data toZone:(struct _NSZone *)zone;
+ (id)mutableCopyData:(id)data toZone:(struct _NSZone *)zone;
+ (id)copyNumber:(id)number toZone:(struct _NSZone *)zone;
+ (id)copyDate:(id)date toZone:(struct _NSZone *)zone;
+ (id)copyUUID:(id)uuid toZone:(struct _NSZone *)zone;
+ (id)deepCopyObject:(id)object toZone:(struct _NSZone *)zone strategy:(struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; })strategy;
@end

#endif /* _PASZoneSupport_h */
