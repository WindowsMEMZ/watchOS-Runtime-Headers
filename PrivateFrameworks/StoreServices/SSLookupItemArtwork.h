//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSLookupItemArtwork_h
#define SSLookupItemArtwork_h
@import Foundation;

@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject {
  /* instance variables */
  NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSURL *URL;

/* instance methods */
- (id)initWithLookupDictionary:(id)dictionary;
- (void)dealloc;
- (BOOL)getRed:(double *)red green:(double *)green blue:(double *)blue alpha:(double *)alpha forColorKind:(id)kind;
- (id)URLWithHeight:(long long)height width:(long long)width;
- (id)URLWithHeight:(long long)height width:(long long)width format:(id)format;
- (id)URLWithHeight:(long long)height width:(long long)width cropStyle:(id)style format:(id)format;
@end

#endif /* SSLookupItemArtwork_h */
