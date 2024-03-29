//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDebugReportFormatter_h
#define _UIDebugReportFormatter_h
@import Foundation;

@class NSString;

@interface _UIDebugReportFormatter : NSObject

@property (nonatomic) unsigned long long indentLevel;
@property (copy, nonatomic) NSString *indentString;
@property (nonatomic) unsigned long long extraBodyIndentLevel;

/* class methods */
+ (id)defaultFormatter;

/* instance methods */
- (id)init;
- (id)stringFromReportComponents:(id)components;
@end

#endif /* _UIDebugReportFormatter_h */
