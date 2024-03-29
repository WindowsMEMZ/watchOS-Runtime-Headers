//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXCallDirectoryPhoneNumberEntryData_h
#define CXCallDirectoryPhoneNumberEntryData_h
@import Foundation;

#include "CXCallDirectoryEntryData-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface CXCallDirectoryPhoneNumberEntryData : NSObject<CXCallDirectoryEntryData, NSSecureCoding>

@property (retain, nonatomic) NSData *phoneNumberData;
@property (readonly, nonatomic) const long long * phoneNumbers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (long long)phoneNumberAtIndex:(unsigned long long)index;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CXCallDirectoryPhoneNumberEntryData_h */
