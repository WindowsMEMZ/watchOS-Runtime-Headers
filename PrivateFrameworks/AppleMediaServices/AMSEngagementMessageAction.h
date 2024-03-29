//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSEngagementMessageAction_h
#define AMSEngagementMessageAction_h
@import Foundation;

#include "AMSMetricsEvent.h"

@class NSDictionary, NSString, NSURL;

@interface AMSEngagementMessageAction : NSObject

@property (copy, nonatomic) NSDictionary *clickstreamMetricsEvent;
@property (retain, nonatomic) NSURL *deepLink;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSString *kind;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic) BOOL requiresDelegate;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;

/* instance methods */
- (id)initWithJSObject:(id)jsobject;
- (id)makeDialogAction;
@end

#endif /* AMSEngagementMessageAction_h */
