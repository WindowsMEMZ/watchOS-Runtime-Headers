//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSRatingsStoreFront_h
#define AMSRatingsStoreFront_h
@import Foundation;

@class NSArray, NSString;

@interface AMSRatingsStoreFront : NSObject

@property (readonly, nonatomic) NSString *defaultLanguage;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *ratingSystems;
@property (readonly, nonatomic) NSString *storeFront;
@property (readonly, nonatomic) NSString *storeFrontID;
@property (readonly, nonatomic) NSArray *supportedLanguages;

/* class methods */
+ (id)storeFrontWithDictionary:(id)dictionary mediaType:(unsigned long long)type andStoreFront:(id)front;
+ (id)storeFrontWithDictionary:(id)dictionary mediaType:(unsigned long long)type;

/* instance methods */
- (id)initWithDictionary:(id)dictionary mediaType:(unsigned long long)type andStoreFront:(id)front;
- (id)initWithDictionary:(id)dictionary mediaType:(unsigned long long)type;
- (id)description;
@end

#endif /* AMSRatingsStoreFront_h */
