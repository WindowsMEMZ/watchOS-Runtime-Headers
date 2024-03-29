//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKImageBalloonPluginDatasource_h
#define CKImageBalloonPluginDatasource_h
@import Foundation;

#include "IMBalloonPluginDataSource.h"
#include "CKBalloonView.h"
#include "CKMediaObject.h"

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) CKMediaObject *mediaObject;

/* instance methods */
- (id)initWithPluginPayload:(id)payload;
- (id)imageBalloon;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)previewDidChange:(id)change;
@end

#endif /* CKImageBalloonPluginDatasource_h */
