//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef NSMutableArray_WFStack_h
#define NSMutableArray_WFStack_h
@import Foundation;

@interface NSMutableArray (WFStack)
/* instance methods */
- (void)WF_push:(struct _xmlNode { void * x0; int x1; char * x2; struct _xmlNode * x3; struct _xmlNode * x4; struct _xmlNode * x5; struct _xmlNode * x6; struct _xmlNode * x7; struct _xmlDoc * x8; struct _xmlNs * x9; char * x10; struct _xmlAttr * x11; struct _xmlNs * x12; void * x13; unsigned short x14; unsigned short x15; } *)wf_push;
- (struct _xmlNode { void * x0; int x1; char * x2; struct _xmlNode * x3; struct _xmlNode * x4; struct _xmlNode * x5; struct _xmlNode * x6; struct _xmlNode * x7; struct _xmlDoc * x8; struct _xmlNs * x9; char * x10; struct _xmlAttr * x11; struct _xmlNs * x12; void * x13; unsigned short x14; unsigned short x15; } *)WF_pop;
@end

#endif /* NSMutableArray_WFStack_h */
