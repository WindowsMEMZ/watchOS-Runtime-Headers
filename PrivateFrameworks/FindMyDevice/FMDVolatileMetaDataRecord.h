//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 421.2.0.0.0
//
#ifndef FMDVolatileMetaDataRecord_h
#define FMDVolatileMetaDataRecord_h
@import Foundation;

#include "FMDDictionaryRepresentable-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FMDVolatileMetaDataRecord : NSObject<NSSecureCoding, FMDDictionaryRepresentable>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)appendMetaData:(id)data;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FMDVolatileMetaDataRecord_h */
