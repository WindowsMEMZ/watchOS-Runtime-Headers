//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUIImageResource_h
#define SAUIImageResource_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"

@class NSData, NSString, NSURL;

@interface SAUIImageResource : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (nonatomic) double pointHeight;
@property (nonatomic) double pointWidth;
@property (copy, nonatomic) NSURL *resourceUrl;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *urlFormatString;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)imageResource;
+ (id)imageResourceWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUIImageResource_h */
