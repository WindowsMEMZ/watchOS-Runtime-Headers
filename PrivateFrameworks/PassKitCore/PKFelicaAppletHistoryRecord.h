//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFelicaAppletHistoryRecord_h
#define PKFelicaAppletHistoryRecord_h
@import Foundation;

#include "PKTransitAppletHistoryRecord.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord<NSCopying>

@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSNumber *transactionType;
@property (copy, nonatomic) NSNumber *sectorCombination;
@property (copy, nonatomic) NSNumber *amountType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKFelicaAppletHistoryRecord_h */
