//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSContentRating_h
#define AMSContentRating_h
@import Foundation;

@class NSNumber, NSString, NSURL;

@interface AMSContentRating : NSObject

@property (readonly, nonatomic) NSString *contentRatingID;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ratingDescription;
@property (readonly, nonatomic) NSNumber *value;

/* class methods */
+ (id)contentRatingWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
@end

#endif /* AMSContentRating_h */
