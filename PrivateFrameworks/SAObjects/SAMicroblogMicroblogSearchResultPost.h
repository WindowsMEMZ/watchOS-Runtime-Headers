//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMicroblogMicroblogSearchResultPost_h
#define SAMicroblogMicroblogSearchResultPost_h
@import Foundation;

#include "SAMicroblogMicroblogSearchResultBase.h"
#include "SADecoratedString.h"
#include "SAMicroblogTwitterPostAuthor.h"
#include "SAUIAppPunchOut.h"

@class NSArray, NSDate, NSString, NSURL;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (copy, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) SADecoratedString *decoratedContent;
@property (copy, nonatomic) NSArray *embeddedHashtags;
@property (copy, nonatomic) NSArray *embeddedImages;
@property (copy, nonatomic) NSArray *embeddedLinks;
@property (copy, nonatomic) NSArray *embeddedMentions;
@property (nonatomic) long long favoritesCount;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *retweetAuthor;
@property (nonatomic) long long retweetCount;
@property (copy, nonatomic) NSURL *webAddress;

/* class methods */
+ (id)microblogSearchResultPost;
+ (id)microblogSearchResultPostWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAMicroblogMicroblogSearchResultPost_h */
