//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLTestFeedbackMessage_h
#define CPLTestFeedbackMessage_h
@import Foundation;

#include "CPLFeedbackMessage.h"

@class NSString;

@interface CPLTestFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *testMessage;

/* class methods */
+ (id)feedbackType;

/* instance methods */
- (id)initWithTestMessage:(id)message libraryIdentifier:(id)identifier;
- (id)serverMessage;
@end

#endif /* CPLTestFeedbackMessage_h */
