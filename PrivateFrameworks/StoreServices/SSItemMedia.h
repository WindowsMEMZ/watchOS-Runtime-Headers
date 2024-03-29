//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSItemMedia_h
#define SSItemMedia_h
@import Foundation;

@class NSString, NSURL;

@interface SSItemMedia : NSObject {
  /* instance variables */
  long long _duration;
  long long _fullDuration;
  BOOL _protected;
  NSURL *_url;
}

@property (readonly, nonatomic) long long fullDurationInMilliseconds;
@property (readonly, nonatomic) long long mediaFileSize;
@property (copy, nonatomic) NSString *mediaKind;
@property (readonly, nonatomic) long long durationInMilliseconds;
@property (readonly, nonatomic) BOOL protectedMedia;
@property (readonly, nonatomic) NSURL *URL;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithStoreOfferDictionary:(id)dictionary;
- (BOOL)isProtectedMedia;
@end

#endif /* SSItemMedia_h */
