//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWidgetLaunchRequest_h
#define CHUISWidgetLaunchRequest_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class BSAction, NSString, NSURL, NSUserActivity;

@interface CHUISWidgetLaunchRequest : NSObject<BSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) BOOL isEntitledToOpenSystemProcesses;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSUserActivity *newUserActivity;
@property (readonly, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)initWithLaunchAction:(id)action effectiveContainerBundleIdentifier:(id)identifier isEntitledToOpenSystemProcesses:(BOOL)processes;
- (id)userActivityData;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)_stateDumpDescription;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CHUISWidgetLaunchRequest_h */
