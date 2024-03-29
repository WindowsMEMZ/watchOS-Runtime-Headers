//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLContentRating_h
#define MLContentRating_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface MLContentRating : NSObject<NSCopying> {
  /* instance variables */
  NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (retain, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSString *ratingSystem;

/* instance methods */
- (id)init;
- (id)initWithContentRatingDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithStringRepresentation:(id)representation;
- (id)copyStringRepresentation;
- (void)_setValue:(id)value forKey:(id)key;
- (void)_setValueCopy:(id)copy forKey:(id)key;
@end

#endif /* MLContentRating_h */
