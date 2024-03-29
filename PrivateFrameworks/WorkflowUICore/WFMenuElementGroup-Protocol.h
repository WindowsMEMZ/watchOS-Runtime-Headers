//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMenuElementGroup_Protocol_h
#define WFMenuElementGroup_Protocol_h
@import Foundation;

@protocol WFMenuElementGroup <NSObject, NSCopying>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL onlyDisplayTitleWhenCollapsed;

/* instance methods */
- (BOOL)shouldCollapse;
@end

#endif /* WFMenuElementGroup_Protocol_h */
