//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXCallDirectoryMutableLabeledPhoneNumberEntryData_h
#define CXCallDirectoryMutableLabeledPhoneNumberEntryData_h
@import Foundation;

#include "CXCallDirectoryLabeledPhoneNumberEntryData.h"
#include "NSCopying-Protocol.h"

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData<NSCopying>

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;
@property (retain, nonatomic) NSMutableData *mutableLabelData;
@property (retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)init;
- (BOOL)appendPhoneNumber:(long long)number label:(id)label;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CXCallDirectoryMutableLabeledPhoneNumberEntryData_h */
