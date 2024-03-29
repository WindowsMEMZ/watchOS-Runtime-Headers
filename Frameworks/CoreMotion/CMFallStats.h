//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMFallStats_h
#define CMFallStats_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SRSampleExporting-Protocol.h"
#include "SRSampling-Protocol.h"

@class NSData, NSString;

@interface CMFallStats : NSObject<SRSampling, SRSampleExporting, NSSecureCoding> {
  /* instance variables */
  NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double iOStime;
@property (readonly, nonatomic) int fallType;
@property (readonly, nonatomic) BOOL isNearFall;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)sr_exportRepresentationEnumerator;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)representation metadata:(id)metadata timestamp:(double)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithData:(id)data;
- (id)initWithBufferAndLength:(char *)length length:(unsigned long long)length;
- (id)itemsIterator;
- (void)dealloc;
- (void)_decodeMeta;
@end

#endif /* CMFallStats_h */
