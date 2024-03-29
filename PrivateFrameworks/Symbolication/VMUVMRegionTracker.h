//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUVMRegionTracker_h
#define VMUVMRegionTracker_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "VMUStackLogReader-Protocol.h"

@class NSMutableArray;

@interface VMUVMRegionTracker : NSObject<NSSecureCoding> {
  /* instance variables */
  NSObject<VMUStackLogReader> *_stackLogReader;
  NSMutableArray *_regionInfoArray;
}

@property (readonly) long long regionCount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithStackLogReader:(id)reader;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)_regionIndexForAddress:(unsigned long long)address;
- (unsigned long long)handleStackLogType:(unsigned int)type address:(unsigned long long)address size:(unsigned long long)size stackID:(unsigned long long)id;
- (void)convertStackIDs:(id /* block */)ids;
- (id)vmRegionRangeInfoForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* VMUVMRegionTracker_h */
