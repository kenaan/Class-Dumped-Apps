//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveFollowGuidePopup-Protocol.h"

@class LiveRoomModel, NSString, UIImageView;
@protocol IESLiveEnvironment, IESLiveSettings;

@interface HTSLiveFollowGuidePopupView : UIView <HTSLiveFollowGuidePopup>
{
    CDUnknownBlockType _onFollow;
    CDUnknownBlockType _onClose;
    LiveRoomModel *_liveRoom;
    UIView *_backgroundView;
    UIView *_headShadowView;
    UIView *_headImageView;
    UIView *_nameLabel;
    UIView *_hintLabel;
    UIView *_followButton;
    UIView *_nameContainer;
    UIImageView *_anchorLevelImageView;
    id <IESLiveSettings> _settings;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak UIImageView *anchorLevelImageView; // @synthesize anchorLevelImageView=_anchorLevelImageView;
@property(nonatomic) __weak UIView *nameContainer; // @synthesize nameContainer=_nameContainer;
@property(nonatomic) __weak UIView *followButton; // @synthesize followButton=_followButton;
@property(nonatomic) __weak UIView *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak UIView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak UIView *headShadowView; // @synthesize headShadowView=_headShadowView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) LiveRoomModel *liveRoom; // @synthesize liveRoom=_liveRoom;
@property(copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) CDUnknownBlockType onFollow; // @synthesize onFollow=_onFollow;
- (void).cxx_destruct;
- (void)close;
- (void)pr_follow:(id)arg1;
- (_Bool)showAnchorLevelImageView;
- (void)hasFollowed;
- (void)applyPortraitLayout;
- (void)applyLandscapeLayout;
- (id)initWithLiveRoom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

