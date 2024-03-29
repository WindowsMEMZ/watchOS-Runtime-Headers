//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTimeBasedFlagDaily_h
#define HMDTimeBasedFlagDaily_h
@import Foundation;

#include "HMDTimeBasedFlag-Protocol.h"
#include "HMDTimeBasedFlagContext-Protocol.h"

@class HMMDateProvider, NSDate;

@interface HMDTimeBasedFlagDaily : NSObject<HMDTimeBasedFlag> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) NSObject<HMDTimeBasedFlagContext> *context;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property unsigned long long bits;
@property (retain) NSDate *bit0Date;

/* class methods */
+ (id)convertLegacyFlagBits:(id)bits lastSaveTIme:(id)time;

/* instance methods */
- (id)initWithContext:(id)context dateProvider:(id)provider;
- (id)initWithSerializedFlag:(id)flag context:(id)context dateProvider:(id)provider;
- (void)setCurrentBit;
- (void)setBitForDate:(id)date;
- (unsigned long long)_bitMaskForDate:(id)date;
- (unsigned long long)currentBits;
- (unsigned long long)bitsForDate:(id)date bitCount:(long long)count outValidBitCount:(long long *)count;
- (id)serializeToDictionary;
- (id)description;
@end

#endif /* HMDTimeBasedFlagDaily_h */
