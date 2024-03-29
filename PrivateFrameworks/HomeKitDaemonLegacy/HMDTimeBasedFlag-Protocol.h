//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTimeBasedFlag_Protocol_h
#define HMDTimeBasedFlag_Protocol_h
@import Foundation;

@protocol HMDTimeBasedFlag 
/* instance methods */
- (id)initWithSerializedFlag:(id)flag context:(id)context dateProvider:(id)provider;
- (void)setCurrentBit;
- (void)setBitForDate:(id)date;
- (unsigned long long)currentBits;
- (unsigned long long)bitsForDate:(id)date bitCount:(long long)count outValidBitCount:(long long *)count;
- (id)serializeToDictionary;
@end

#endif /* HMDTimeBasedFlag_Protocol_h */
