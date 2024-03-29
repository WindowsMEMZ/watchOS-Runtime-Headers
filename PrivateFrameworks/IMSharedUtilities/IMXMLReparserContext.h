//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMXMLReparserContext_h
#define IMXMLReparserContext_h
@import Foundation;

@class NSArray, NSDictionary, NSError, NSString;

@interface IMXMLReparserContext : NSObject {
  /* instance variables */
  NSString *_inContent;
}

@property (readonly, retain) NSString *_inContent;
@property (readonly, retain, nonatomic) NSArray *attributesToPreserve;
@property (readonly, retain, nonatomic) NSDictionary *attributesToMerge;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *outContent;

/* instance methods */
- (id)initWithContent:(id)content attributesToPreserve:(id)preserve attributesToMerge:(id)merge;
- (void)dealloc;
- (void)_setOutContent:(id)content error:(id)error;
@end

#endif /* IMXMLReparserContext_h */
