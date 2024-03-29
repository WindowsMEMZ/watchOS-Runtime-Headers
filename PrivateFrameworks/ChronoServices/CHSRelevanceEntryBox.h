//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSRelevanceEntryBox_h
#define CHSRelevanceEntryBox_h
@import Foundation;

#include "CHSXPCEncodable-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSData, NSDictionary;

@interface CHSRelevanceEntryBox : NSObject<CHSXPCEncodable, NSCopying> {
  /* instance variables */
  NSData *_archivedData;
}

@property (copy, nonatomic) NSDictionary *timelineRelevanceEntries;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithEntries:(id)entries;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)prepareForEncoding;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CHSRelevanceEntryBox_h */
