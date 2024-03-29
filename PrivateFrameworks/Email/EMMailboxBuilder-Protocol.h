//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMMailboxBuilder_Protocol_h
#define EMMailboxBuilder_Protocol_h
@import Foundation;

@protocol EMMailboxBuilder <NSObject>

@property (nonatomic) BOOL canContainMessages;
@property (weak, nonatomic) EMMailbox *parent;
@property (nonatomic) BOOL descriptionUsesRealName;

@end

#endif /* EMMailboxBuilder_Protocol_h */
