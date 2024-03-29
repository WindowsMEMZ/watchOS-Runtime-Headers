//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASTUserReviewItem_h
#define SASTUserReviewItem_h
@import Foundation;

#include "AceObject.h"
#include "SASTTemplateItem-Protocol.h"
#include "SAUIDecoratedText.h"

@class NSString;

@interface SASTUserReviewItem : AceObject<SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText *reviewDate;
@property (retain, nonatomic) SAUIDecoratedText *reviewText;
@property (retain, nonatomic) SAUIDecoratedText *reviewer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)userReviewItem;
+ (id)userReviewItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SASTUserReviewItem_h */
