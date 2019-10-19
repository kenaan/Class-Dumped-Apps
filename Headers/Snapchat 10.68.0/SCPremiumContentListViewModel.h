//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel, SCDiscoverFeedDebugViewModel, SCDiscoverFeedLabelOverlayViewModel, SCDiscoverFeedLogoOverlayViewModel, SCDiscoverFeedPublisherStoryProgressBarViewModel, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedWhiteSpaceProfileRowViewModel, SCNetworkImage;

@interface SCPremiumContentListViewModel : NSObject <NSCopying>
{
    SCActionModel *_primarySingleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCActionModel *_debugActionModel;
    SCNetworkImage *_imageThumbnail;
    SCNetworkImage *_firstFrameOfVideoThumbnail;
    SCDiscoverFeedDebugViewModel *_debugViewModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    SCDiscoverFeedLabelOverlayViewModel *_labelOverlayViewModel;
    SCDiscoverFeedLogoOverlayViewModel *_logoOverlayViewModel;
    SCDiscoverFeedWhiteSpaceProfileRowViewModel *_profileRowViewModel;
    SCDiscoverFeedPublisherStoryProgressBarViewModel *_progressBarViewModel;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedPublisherStoryProgressBarViewModel *progressBarViewModel; // @synthesize progressBarViewModel=_progressBarViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceProfileRowViewModel *profileRowViewModel; // @synthesize profileRowViewModel=_profileRowViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedLogoOverlayViewModel *logoOverlayViewModel; // @synthesize logoOverlayViewModel=_logoOverlayViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedLabelOverlayViewModel *labelOverlayViewModel; // @synthesize labelOverlayViewModel=_labelOverlayViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCDiscoverFeedDebugViewModel *debugViewModel; // @synthesize debugViewModel=_debugViewModel;
@property(readonly, copy, nonatomic) SCNetworkImage *firstFrameOfVideoThumbnail; // @synthesize firstFrameOfVideoThumbnail=_firstFrameOfVideoThumbnail;
@property(readonly, copy, nonatomic) SCNetworkImage *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
@property(readonly, copy, nonatomic) SCActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) SCActionModel *scrollOutOfScreenActionModel; // @synthesize scrollOutOfScreenActionModel=_scrollOutOfScreenActionModel;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *primarySingleTapActionModel; // @synthesize primarySingleTapActionModel=_primarySingleTapActionModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimarySingleTapActionModel:(id)arg1 longPressActionModel:(id)arg2 scrollOutOfScreenActionModel:(id)arg3 debugActionModel:(id)arg4 imageThumbnail:(id)arg5 firstFrameOfVideoThumbnail:(id)arg6 debugViewModel:(id)arg7 storyLoggingInfo:(id)arg8 labelOverlayViewModel:(id)arg9 logoOverlayViewModel:(id)arg10 profileRowViewModel:(id)arg11 progressBarViewModel:(id)arg12;

@end
