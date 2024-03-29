//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteQuarantineRequest_Protocol_h
#define WFRemoteQuarantineRequest_Protocol_h
@import Foundation;

@protocol WFRemoteQuarantineRequest <NSObject>

@property (readonly, nonatomic) NSString *policyFunctionName;
@property (readonly, nonatomic) NSString *defaultLocalizedPromptTitle;
@property (readonly, nonatomic) NSString *defaultLocalizedPromptMessage;
@property (readonly, nonatomic) NSString *defaultLocalizedDeniedErrorTitle;
@property (readonly, nonatomic) NSString *defaultLocalizedDeniedErrorMessage;

/* instance methods */
- (id)javaScriptCoreRepresentationWithError:(id *)error;
@end

#endif /* WFRemoteQuarantineRequest_Protocol_h */
