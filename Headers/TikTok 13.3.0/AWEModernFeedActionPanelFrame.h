//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel;

@interface AWEModernFeedActionPanelFrame : NSObject
{
    _Bool _shouldShowRepostButton;
    _Bool _shouldShowActionPanel;
    _Bool _shouldShowTimeInfo;
    unsigned long long _layoutType;
    AWEAwemeModel *_aweme;
    struct CGRect _actionPanelFrame;
    struct CGRect _timeLabelFrame;
    struct CGRect _likeBtnFrame;
    struct CGRect _commentBtnFrame;
    struct CGRect _repostFrame;
    struct CGRect _shareBtnFrame;
}

@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(nonatomic) _Bool shouldShowTimeInfo; // @synthesize shouldShowTimeInfo=_shouldShowTimeInfo;
@property(nonatomic) _Bool shouldShowActionPanel; // @synthesize shouldShowActionPanel=_shouldShowActionPanel;
@property(nonatomic) _Bool shouldShowRepostButton; // @synthesize shouldShowRepostButton=_shouldShowRepostButton;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct CGRect shareBtnFrame; // @synthesize shareBtnFrame=_shareBtnFrame;
@property(nonatomic) struct CGRect repostFrame; // @synthesize repostFrame=_repostFrame;
@property(nonatomic) struct CGRect commentBtnFrame; // @synthesize commentBtnFrame=_commentBtnFrame;
@property(nonatomic) struct CGRect likeBtnFrame; // @synthesize likeBtnFrame=_likeBtnFrame;
@property(nonatomic) struct CGRect timeLabelFrame; // @synthesize timeLabelFrame=_timeLabelFrame;
@property(nonatomic) struct CGRect actionPanelFrame; // @synthesize actionPanelFrame=_actionPanelFrame;
- (void).cxx_destruct;
- (void)configFrameWithAweme:(id)arg1 ContainerWidth:(double)arg2 layoutType:(unsigned long long)arg3 browsedType:(unsigned long long)arg4;
- (id)init;

@end

