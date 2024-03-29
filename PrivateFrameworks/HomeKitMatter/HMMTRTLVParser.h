//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMTRTLVParser_h
#define HMMTRTLVParser_h
@import Foundation;

#include "HMFObject.h"

@interface HMMTRTLVParser : HMFObject
/* class methods */
+ (id)csrFromNOCSRElements:(id)nocsrelements;
+ (id)fabricIndicesFromTLV:(id)tlv;
+ (id)keyPairDataFromTLV:(id)tlv;
+ (id)logCategory;
@end

#endif /* HMMTRTLVParser_h */
