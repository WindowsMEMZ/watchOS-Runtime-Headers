//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef _BMShareSheetLibraryNode_h
#define _BMShareSheetLibraryNode_h
@import Foundation;

#include "_BMLibraryNode.h"

@interface _BMShareSheetLibraryNode : _BMLibraryNode
/* class methods */
+ (id)Feedback;
+ (id)SuggestLessFeedback;
+ (id)storeConfigurationForFeedback;
+ (id)syncPolicyForFeedback;
+ (id)configurationForFeedback;
+ (id)storeConfigurationForSuggestLessFeedback;
+ (id)syncPolicyForSuggestLessFeedback;
+ (id)configurationForSuggestLessFeedback;
+ (id)identifier;
+ (id)streamNames;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)name;
+ (id)sublibraries;
@end

#endif /* _BMShareSheetLibraryNode_h */
