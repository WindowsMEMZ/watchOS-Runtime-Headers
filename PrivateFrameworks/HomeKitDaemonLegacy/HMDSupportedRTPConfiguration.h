//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSupportedRTPConfiguration_h
#define HMDSupportedRTPConfiguration_h
@import Foundation;

#include "HAPTLVBase.h"
#include "HAPTLVCreateParse-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData;

@interface HMDSupportedRTPConfiguration : HAPTLVBase<HAPTLVCreateParse, NSSecureCoding>

@property (readonly, copy, nonatomic) NSArray *srtpCryptoSuites;
@property (readonly, copy) NSData *tlvData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCryptoSuites:(id)suites;
- (BOOL)_parseFromTLVData;
- (void)description:(id)description indent:(id)indent;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDSupportedRTPConfiguration_h */
